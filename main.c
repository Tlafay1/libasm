#include <stdio.h>
#include <assert.h>

extern unsigned long int ft_strlen(char*);

void test_ft_strlen() {
    char* str = "Hello World!";
    unsigned long int len = ft_strlen(str);
    assert(len == 12);

    str = "";
    len = ft_strlen(str);
    assert(len == 0);

    str = "Hello World!\n";
    len = ft_strlen(str);
    assert(len == 13);

    str = NULL;
    len = ft_strlen(str);
    assert(len == 0);
}

int main() {
    test_ft_strlen();
    printf("All tests passed!\n");
    return 0;
}