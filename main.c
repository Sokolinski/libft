
#include <stdio.h>
#include <string.h>
#include "ft_memmove.c"



int main()
{
    char str1[] = "Hello, world!";  

    puts("\nstr1 after memmove ");
    memmove(str1 , str1 + 7, 6);
    puts(str1);

    char str2[] = "Hello, world!"; 
    ft_memmove(str2 , str2 + 7, 6);
    puts("\nstr2 after memmove ");
    puts(str2);
    return 0;
}
