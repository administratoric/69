#define  _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int main()
{
    int nums[] = { 1,2,2,1 };//������ô����
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
        if (k != 1)//��ֹֻ��һ������û����ʱ�޷�����λ����Ӷ����ִ�������
            for (i = 1; i <= k; i++)
                count = count ^ add[i];//����ɸѡ������ͬ����λ����
    printf("%d", count);//���λ������
    return 0;
}
//���ۣ�leetcode���ϵ�3158����Ľⷨ���룺
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