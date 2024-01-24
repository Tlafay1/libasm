#include "tests.hpp"

TEST(ft_write, test_hello_world)
{
    int devNull = open("/dev/null", O_WRONLY);
    
    std::string str = "Hello World!";
    int ret1 = ft_write(devNull, str.c_str(), 13);
    int ret2 = write(devNull, str.c_str(), 13);
    ASSERT_EQ(ret1, ret2);

    close(devNull);
}

TEST(ft_write, test_empty_string)
{
    int devNull = open("/dev/null", O_WRONLY);
    
    std::string str = "";
    int ret1 = ft_write(devNull, str.c_str(), 0);
    int ret2 = write(devNull, str.c_str(), 0);
    ASSERT_EQ(ret1, ret2);

    close(devNull);
}

TEST(ft_write, test_hello_world_newline)
{
    int devNull = open("/dev/null", O_WRONLY);
    
    std::string str = "Hello World!\n";
    int ret1 = ft_write(devNull, str.c_str(), 14);
    int ret2 = write(devNull, str.c_str(), 14);
    ASSERT_EQ(ret1, ret2);

    close(devNull);
}

TEST(ft_write, test_null_string)
{
    int devNull = open("/dev/null", O_WRONLY);

    int ret1 = ft_write(devNull, NULL, 0);
    int ret2 = write(devNull, NULL, 0);
    ASSERT_EQ(ret1, ret2);

    close(devNull);
}

TEST(ft_write, negative_write)
{
    int devNull = open("/dev/null", O_WRONLY);

    int ret1 = ft_write(devNull, "Hello World!", -1);
    int errno1 = errno;
    int ret2 = write(devNull, "Hello World!", -1);
    int errno2 = errno;
    ASSERT_EQ(ret1, ret2);
    ASSERT_EQ(errno1, errno2);

    close(devNull);
}

TEST(ft_write, invalid_fd)
{
    int ret1 = ft_write(-1, "Hello World!", 13);
    int errno1 = errno;
    int ret2 = write(-1, "Hello World!", 13);
    int errno2 = errno;
    ASSERT_EQ(ret1, ret2);
    ASSERT_EQ(errno1, errno2);
}