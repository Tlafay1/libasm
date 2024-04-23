#include "tests.hpp"

TEST(ft_strcpy, hello_world)
{
    std::string str = "Hello World!";
    char *cpy1 = ft_strcpy(new char[str.length() + 1], str.c_str());
    char *cpy2 = strcpy(new char[str.length() + 1], str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}

TEST(ft_strcpy, empty_string)
{
    std::string str = "";
    char *cpy1 = ft_strcpy(new char[str.length() + 1], str.c_str());
    char *cpy2 = strcpy(new char[str.length() + 1], str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}

TEST(ft_strcpy, hello_world_newline)
{
    std::string str = "Hello World!\n";
    char *cpy1 = ft_strcpy(new char[str.length() + 1], str.c_str());
    char *cpy2 = strcpy(new char[str.length() + 1], str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}

/* TEST(ft_strcpy, dest_smaller_than_src)
{
    std::string str = "Hello World!";
    char *cpy1 = ft_strcpy(new char[5], str.c_str());
    char *cpy2 = strcpy(new char[5], str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
} */

TEST(ft_strcpy, dest_larger_than_src)
{
    std::string str = "Hello World!";
    char *cpy1 = ft_strcpy(new char[str.length() + 10], str.c_str());
    char *cpy2 = strcpy(new char[str.length() + 10], str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}