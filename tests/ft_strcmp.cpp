#include "tests.hpp"

TEST(ft_strcmp, hello_world_equal)
{
    std::string str1 = "Hello World!";
    std::string str2 = "Hello World!";

    ASSERT_EQ(ft_strcmp(str1.c_str(), str2.c_str()), strcmp(str1.c_str(), str2.c_str()));
}

TEST(ft_strcmp, hello_world_not_equal)
{
    std::string str1 = "Hello World!";
    std::string str2 = "Hello World";

    ASSERT_EQ(ft_strcmp(str1.c_str(), str2.c_str()), strcmp(str1.c_str(), str2.c_str()));
}

TEST(ft_strcmp, empty_str1)
{
    std::string str1 = "";
    std::string str2 = "Hello World!";

    ASSERT_EQ(ft_strcmp(str1.c_str(), str2.c_str()), strcmp(str1.c_str(), str2.c_str()));
}

TEST(ft_strcmp, empty_str2)
{
    std::string str1 = "Hello World!";
    std::string str2 = "";

    ASSERT_EQ(ft_strcmp(str1.c_str(), str2.c_str()), strcmp(str1.c_str(), str2.c_str()));
}