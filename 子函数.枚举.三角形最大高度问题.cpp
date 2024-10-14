#define  _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
int fun2(int red, int blue, int n);
int fun1(int red, int blue, int n) {
	if (blue >=n)
	{
		blue = blue - n;
		n++;
		fun2(red, blue, n);
	}
	else
		return n-1;
}
int fun2(int red, int blue, int n) {
	if (red >=n)
	{
		red = red - n;
		n++;
		fun1(red, blue, n);
	}
	else
		return n-1;
}
int main() {
	int n,a,b;
	int red, blue;
	printf("请输入小蓝球的个数：");
	scanf("%d", &red);
	printf("请输入小红球的个数：");
	scanf("%d", &blue);
	a=fun1(red, blue, 1);
	b = fun2(red,blue, 1);
	if (a == b)
		printf("%d", a);
	else if(a>b)
		printf("%d", a);
	else
		printf("%d", b);
}


//力扣（leetcode）第3200题题解：
//int fun2(int red, int blue, int n);
//int fun1(int red, int blue, int n) {
//	if (blue >= n)
//	{
//		blue = blue - n;
//		n++;
//		return fun2(red, blue, n);
//	}
//	else
//		return n - 1;
//}
//int fun2(int red, int blue, int n) {
//	if (red >= n)
//	{
//		red = red - n;
//		n++;
//		return fun1(red, blue, n);
//	}
//	else
//		return n - 1;
//}
//
//int maxHeightOfTriangle(int red, int blue) {
//	int n, a, b;
//	a = fun1(red, blue, 1);
//	b = fun2(red, blue, 1);
//	if (a == b)
//		return a;
//	else if (a > b)
//		return a;
//	else
//		return b;
//}