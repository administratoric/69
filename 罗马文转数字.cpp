#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int fun(char c)
{
	switch (c) {
	case 'I':return 1;
	case 'V':return 5;
	case 'X':return 10;
	case 'L':return 50;
	case 'C':return 100;
	case 'D':return 500;
	case 'M':return 1000;
	default:return 0;
	}
}//使用switch语句进行罗马数字到阿拉伯数字的转换

int main() {
	char s[15];
	scanf("%s", &s);
	int sum = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		int zuo = fun(s[i]);
		int you = (i + 1 < n) ? fun(s[i + 1]) : 0;//条件判断：是否还有下一位罗马数字，有则预加载下一位罗马数字对应的阿拉伯数字
		if (zuo < you)
			sum -= zuo;//条件判断：如果本位数字小于了下一位数字，则执行减法操作
		else
			sum += zuo;//否则正常执行加法操作
	}
	printf("%d", sum);//输出转换结果
	return 0;
}
//其实该方法有不完善的地方，因为罗马数字的特殊运算法则，I（1）只能用于V（5）、X（10）两侧，X只能用于L（50）、C（100）两侧，以此类推
//意思就是，不会出现IL、IC这种表达，但该算法没有写对应的判断语句，因此请注意
