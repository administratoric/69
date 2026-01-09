#define  _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include <stdlib.h>

int main(){
    int n=-16;
    //scanf("%d", &n);
    if (n == 0)
        printf("false");
    else if(n<0)
        printf("false");
    else if (n == 1)
        printf("true");
    else if (n % 2 == 0)
    {
        while (n / 2 != 0)
        {
            if (n == 2)
                break;
            n = n / 2;
            if (n % 2 == 1)
            {
                printf("false");
                exit(0);
            }
        }
        printf("true");
    }
    else
        printf("false");;
    return 0;
}