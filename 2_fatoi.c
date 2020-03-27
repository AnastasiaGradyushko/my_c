#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatoi(const char* str)
{
    int i, k;
    k = strlen(str);
    int a[k];
    printf("\n Digital str: ");
    for(i = 0; i < k; i++)
    {
       a[i] = (int)str[i];
       printf("%d", a[i]);
    }
}

int main()
{
    int i, n, len;
    const char str[] = "Ten Duel Commandments";
    printf("\n String: %s", str);
    fatoi(str);
    return 0;
}
