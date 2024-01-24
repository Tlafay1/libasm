#include "tests.hpp"

TEST(ft_strlen, test_hello_world)
{
    std::string str = "Hello World!";
    ssize_t len1 = ft_strlen(str.c_str());
    ssize_t len2 = strlen(str.c_str());
    ASSERT_EQ(len1, len2);
}

TEST(ft_strlen, test_empty_string)
{
    std::string str = "";
    ssize_t len1 = ft_strlen(str.c_str());
    ssize_t len2 = strlen(str.c_str());
    ASSERT_EQ(len1, len2);
}

TEST(ft_strlen, test_hello_world_newline)
{
    std::string str = "Hello World!\n";
    ssize_t len1 = ft_strlen(str.c_str());
    ssize_t len2 = strlen(str.c_str());
    ASSERT_EQ(len1, len2);
}
