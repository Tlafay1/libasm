#include <stdio.h>
#include <assert.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

extern unsigned long int ft_strlen(char*);
extern char* ft_strcpy(char*, char*);
extern int ft_strcmp(char*, char*);
extern int ft_write(int, char*, int);

void test_ft_strlen()
{
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

void test_ft_strcpy()
{
    char* src = "Hello World!";
    char dest[13];
    char* ret = ft_strcpy(dest, src);
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
    char* s1 = "Hello World!";
    char* s2 = "Hello World!";
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
}

void test_ft_write()
{
    int devNull = open("/dev/null", O_WRONLY);
    
    char* str = "Hello World!";
    int ret = ft_write(devNull, str, 13);
    assert(ret == 13);

    str = "";
    ret = ft_write(devNull, str, 0);
    assert(ret == 0);

    str = "Hello World!\n";
    ret = ft_write(devNull, str, 14);
    assert(ret == 14);

    str = NULL;
    ret = ft_write(devNull, str, 0);
    assert(ret == 0);

    

    close(devNull);
}

int main()
{
    test_ft_strlen();
    test_ft_strcpy();
    test_ft_strcmp();
    test_ft_write();
    printf("All tests passed!\n");
    return 0;
}