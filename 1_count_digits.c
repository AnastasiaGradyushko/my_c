#include <stdio.h>

/* strlen() */
int count_digits(const char *str)
{
    int i = 0;
    int k = 0;

    while (str[i] !='\0'){
        if (str[i]>='0' && str[i]<='9') {k++;}
        i++;}

    return k;
}


int main()
{
    char s[255];
    gets(s);

    printf("%d\n", count_digits(s));

    return 0;
}
