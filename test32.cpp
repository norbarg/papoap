
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char string[1000];
    printf("type something\n");
    scanf("%999[^\n]", string);
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    printf("sign number is %d\n", count);
}
    