#include "tests.hpp"

TEST(ft_read, read_hundred_bytes)
{
    int fd1 = open("Makefile", O_RDONLY);
    int fd2 = open("Makefile", O_RDONLY);
    char buf1[1000];
    char buf2[1000];

    memset(buf1, 0, 1000);
    memset(buf2, 0, 1000);

    int ret1 = ft_read(fd1, buf1, 100);
    int ret2 = read(fd2, buf2, 100);
    ASSERT_EQ(ret1, ret2);
    ASSERT_STREQ(buf1, buf2);

    close(fd1);
    close(fd2);
}

TEST(ft_read, read_zero_bytes)
{
    int fd1 = open("Makefile", O_RDONLY);
    int fd2 = open("Makefile", O_RDONLY);
    char buf1[1000];
    char buf2[1000];

    memset(buf1, 0, 1000);
    memset(buf2, 0, 1000);

    int ret1 = ft_read(fd1, buf1, 0);
    int ret2 = read(fd2, buf2, 0);
    ASSERT_EQ(ret1, ret2);
    ASSERT_STREQ(buf1, buf2);

    close(fd1);
    close(fd2);
}

TEST(ft_read, read_negative_bytes)
{
    int fd1 = open("Makefile", O_RDONLY);
    int fd2 = open("Makefile", O_RDONLY);
    char buf1[1000] = "Hello World!";
    char buf2[1000] = "Hello World!";

    int ret1 = ft_read(fd1, buf1, -1);
    int errno1 = errno;
    int ret2 = read(fd2, buf2, -1);
    int errno2 = errno;
    ASSERT_EQ(ret1, ret2);
    ASSERT_STREQ(buf1, buf2);
    ASSERT_EQ(errno1, errno2);
    close(fd1);
    close(fd2);
}

TEST(ft_read, read_more_than_file_size)
{
    int fd1 = open("Makefile", O_RDONLY);
    int fd2 = open("Makefile", O_RDONLY);
    char buf1[10000];
    char buf2[10000];

    int ret1 = ft_read(fd1, buf1, 10000);
    int ret2 = read(fd2, buf2, 10000);
    ASSERT_EQ(ret1, ret2);
    ASSERT_STREQ(buf1, buf2);

    close(fd1);
    close(fd2);
}

TEST(ft_read, invalid_fd)
{
    char buf1[1000] = "Hello World!";
    char buf2[1000] = "Hello World!";

    int ret1 = ft_read(-1, buf1, 100);
    int errno1 = errno;
    int ret2 = read(-1, buf2, 100);
    int errno2 = errno;
    ASSERT_EQ(ret1, ret2);
    ASSERT_STREQ(buf1, buf2);
    ASSERT_EQ(errno1, errno2);
}