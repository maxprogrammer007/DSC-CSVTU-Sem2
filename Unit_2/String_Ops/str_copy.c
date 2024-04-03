#include <stdio.h>
#include <string.h>

char *str_cpy1(char *dest, const char *source)
{
    if(dest == NULL) return NULL;


    int i = 0;
    while(source[i] != '\0'){
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';

    return dest;
}
int main()
{
     char src[] = "Copy This";
     char dest[100];

     char *dest_ptr = str_cpy1(dest,src);

     printf("   src : %s \n",src);
     printf("   dest: %s\n",dest);
     printf("dest_ptr : %s\n", dest_ptr);

    return 0;
}