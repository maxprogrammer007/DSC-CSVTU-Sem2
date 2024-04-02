#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, const char *source);

int main()
{
    char dest[1024] = "first";
    char source[] = "second";

    _strcat(dest,source);
    printf("Result: %s \n", dest);
}

char *_strcat(char *dest, const char *source)
{
    int i = 0, j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }

    while(source[j] != '\0')
    {
        dest[i] = source[j];
        i++;
        j++;
    }
    dest[i] = '\0';

    return dest;

    
}