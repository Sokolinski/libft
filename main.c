#include <stdio.h>
#include <string.h>

int main()
{
    char str[4] = "000";
    char str2[5] = "12345";
	char *p1,p2;
	p1 = &str;
	p2 = &str2;
    size_t i = strlcpy(p1,p2,2);
    printf("%s",str);

    return 0;
}
