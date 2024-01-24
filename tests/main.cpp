#include <gtest/gtest.h>

/* void test_ft_strcpy()
{
    std::string src = "Hello World!";
    char dest[13];
    std::string ret = ft_strcpy(dest, src);
    assert(ret == dest);
    assert(dest[0] == 'H');
    assert(dest[1] == 'e');
    assert(dest[2] == 'l');
    assert(dest[3] == 'l');
    assert(dest[4] == 'o');
    assert(dest[5] == ' ');
    assert(dest[6] == 'W');
    assert(dest[7] == 'o');
    assert(dest[8] == 'r');
    assert(dest[9] == 'l');
    assert(dest[10] == 'd');
    assert(dest[11] == '!');
    assert(dest[12] == '\0');

    src = "";
    ret = ft_strcpy(dest, src);
    assert(ret == dest);
    assert(dest[0] == '\0');

    src = "Hello World!\n";
    ret = ft_strcpy(dest, src);
    assert(ret == dest);
    assert(dest[0] == 'H');
    assert(dest[1] == 'e');
    assert(dest[2] == 'l');
    assert(dest[3] == 'l');
    assert(dest[4] == 'o');
    assert(dest[5] == ' ');
    assert(dest[6] == 'W');
    assert(dest[7] == 'o');
    assert(dest[8] == 'r');
    assert(dest[9] == 'l');
    assert(dest[10] == 'd');
    assert(dest[11] == '!');
    assert(dest[12] == '\n');

    src = NULL;
    ret = ft_strcpy(dest, src);
    assert(ret == dest);
    assert(dest[0] == '\0');
}

void test_ft_strcmp()
{
    std::string s1 = "Hello World!";
    std::string s2 = "Hello World!";
    int ret = ft_strcmp(s1, s2);
    assert(ret == 0);

    s1 = "Hello World!";
    s2 = "Hello World!\n";
    ret = ft_strcmp(s1, s2);
    assert(ret == -10);

    s1 = "Hello World!\n";
    s2 = "Hello World!";
    ret = ft_strcmp(s1, s2);
    assert(ret == 10);

    s1 = "Hello World!";
    s2 = "Hello World";
    ret = ft_strcmp(s1, s2);
    assert(ret == 33);

    s1 = "Hello World";
    s2 = "Hello World!";
    ret = ft_strcmp(s1, s2);
    assert(ret == -33);

    s1 = "";
    s2 = "";
    ret = ft_strcmp(s1, s2);
    assert(ret == 0);

    s1 = "";
    s2 = "Hello World!";
    ret = ft_strcmp(s1, s2);
    assert(ret == -72);

    s1 = "Hello World!";
    s2 = "";
    ret = ft_strcmp(s1, s2);
    assert(ret == 72);
} */

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

