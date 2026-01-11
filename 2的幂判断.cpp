#define  _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include <stdlib.h>
//解决2的幂判断问题，须考虑到以下几点：
//一.1也是2的幂（2的0次方）
//二.负数不可能是2的幂
//三.能被2取余的数字不一定是2的幂（比如6、10、12等）
int main(){
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("false");
    else if(n<0)
        printf("false");
    else if (n == 1)
        printf("true");//所以，我们需要先进行三个简单的if语句剔除三种情况（0、1、负数）以减少判断难度
    else if (n % 2 == 0)//但要解决2的幂判断问题，我们得剔除非2的幂的双数，先筛选出双数
    {
        while (n / 2 != 0)//然后判断其除以2后的值
        {
            if (n == 2)//2的幂最后会被除到2
                break;
            n = n / 2;
            if (n % 2 == 1)//而非2的幂双数一定会得到1
            {
                printf("false");
                exit(0);//记得及时退出
            }
        }
        printf("true");
    }
    else
        printf("false");//单数一定不是2的幂
    return 0;
}//力扣Leetcode第231题