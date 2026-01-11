#define  _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include <stdlib.h>
//解决3的幂判断问题，须考虑到以下几点：
//一.1也是3的幂（3的0次方）
//二.负数不可能是3的幂
//三.能被3取余的数字不一定是3的幂（比如6、12、21等）
int main() {
    int n;
    scanf("%d", &n);
    if (n == 0)
        printf("false");
    else if (n < 0)
        printf("false");
    else if (n == 1)
        printf("true");//所以，我们需要先进行三个简单的if语句剔除三种情况（0、1、负数）以减少判断难度
    else if (n % 3 == 0)//但要解决3的幂判断问题，我们得剔除非3的幂的数
    {
        while (n / 3 != 0)//然后判断其除以3后的值
        {
            if (n == 3)//3的幂最后会被除到3
                break;
            n = n / 3;
            if (n % 3 == 1 || n % 3 == 2)//而非3的幂的3的倍数一定会得到1或2
            {
                printf("false");
                exit(0);//记得及时退出
            }
        }
        printf("true");
    }
    else
        printf("false");
    return 0;
}//力扣Leetcode第326题