#define  _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int main()
{
    int nums[] = { 1,2,2,1 };//随你怎么输入
    int i, j, k = 0;
    int add[100] = { 0 };
    int count;
    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 4; j++)
            if (nums[i] == nums[j])
            {
                add[k] = nums[i];
                k++;
                break;
            }
    count = add[0];
    if (k != 0)
        if (k != 1)//防止只有一个数或没有数时无法进行位运算从而出现错误结果；
            for (i = 1; i <= k; i++)
                count = count ^ add[i];//进行筛选出的相同数的位运算
    printf("%d", count);//输出位运算结果
    return 0;
}
//力扣（leetcode）上第3158道题的解法代码：
//int duplicateNumbersXOR(int* nums, int numsSize) {
//    int i, j, k = 0;
//    int add[100] = { 0 };
//    int count;
//    for (i = 0; i < numsSize; i++)
//        for (j = i + 1; j < numsSize; j++)
//            if (nums[i] == nums[j])
//            {
//                add[k] = nums[i];
//                k++;
//                break;
//            }
//    count = add[0];
//    if (k != 0)
//        if (k != 1)
//            for (i = 1; i <= k; i++)
//                count = count ^ add[i];
//    return count;
//}