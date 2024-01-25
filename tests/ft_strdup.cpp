#include "tests.hpp"

TEST(ft_strdup, hello_world)
{
    std::string str = "Hello World!";
    char *cpy1 = ft_strdup(str.c_str());
    char *cpy2 = strdup(str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}

TEST(ft_strdup, empty_string)
{
    std::string str = "";
    char *cpy1 = ft_strdup(str.c_str());
    char *cpy2 = strdup(str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}

TEST(ft_strdup, hello_world_newline)
{
    std::string str = "Hello World!\n";
    char *cpy1 = ft_strdup(str.c_str());
    char *cpy2 = strdup(str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}

TEST(ft_strdup, long_string)
{
    std::string str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec a diam lectus. Sed sit amet ipsum mauris. Maecenas congue ligula ac quam viverra nec consectetur ante hendrerit. Donec et mollis dolor.";
    char *cpy1 = ft_strdup(str.c_str());
    char *cpy2 = strdup(str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}

TEST(ft_strdup, very_long_string)
{
    std::string str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec a diam lectus. Sed sit amet ipsum mauris. Maecenas congue ligula ac quam viverra nec consectetur ante hendrerit. Donec et mollis dolor. Praesent et diam eget libero egestas mattis sit amet vitae augue. Nam tincidunt congue enim, ut porta lorem lacinia consectetur.";
    char *cpy1 = ft_strdup(str.c_str());
    char *cpy2 = strdup(str.c_str());
    ASSERT_STREQ(cpy1, cpy2);
    delete[] cpy1;
    delete[] cpy2;
}