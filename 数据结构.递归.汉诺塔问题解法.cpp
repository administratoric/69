#define  _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
void fun(int n, char X, char Y, char Z)
{
	if (n == 1)
		printf("��%dƬԲ�̴�%c���ƶ���%c����\n", n, X, Z);
	else
	{
		fun(n - 1, X, Z, Y);
		printf("��%dƬԲ�̴�%c���ƶ���%c����\n", n, X, Z);
		fun(n - 1, Y, X, Z);
	}	
}
int main() 
{
	int n;
	printf("��������֪���ĺ�ŵ������𰸵�Ƭ��n=");
	scanf("%d", &n);
	char X = 'X';
	char Y = 'Y';
	char Z = 'Z';
	fun(n,X,Y,Z);
	return 0;
}
