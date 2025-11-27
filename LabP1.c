#include <stdio.h>

void main()
{
    char str;
    printf("enter your any charecter to convert : \n");
    scanf("%c",&str);
        if(str>=65 && str<=90)
            printf("%c in lower case %c ",str,str+32);
        if(str>=97 && str<=122)
            printf("%c in uppercase case %c ",str,str-32);

}

