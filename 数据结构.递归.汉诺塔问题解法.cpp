#define  _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
void fun(int n, char X, char Y, char Z)
{
	if (n == 1)
		printf("第%d片圆盘从%c柱移动到%c柱上\n", n, X, Z);
	else
	{
		fun(n - 1, X, Z, Y);
		printf("第%d片圆盘从%c柱移动到%c柱上\n", n, X, Z);
		fun(n - 1, Y, X, Z);
	}	
}
int main() 
{
	int n;
	printf("请输入想知道的汉诺塔问题答案的片数n=");
	scanf("%d", &n);
	char X = 'X';
	char Y = 'Y';
	char Z = 'Z';
	fun(n,X,Y,Z);
	return 0;
}
