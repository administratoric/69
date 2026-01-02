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
}

int main() {
	char s[15];
	scanf("%s", &s);
	int sum = 0;
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		int zuo = fun(s[i]);
		int you = (i + 1 < n) ? fun(s[i + 1]) : 0;
		if (zuo < you)
			sum -= zuo;
		else
			sum += zuo;
	}
	printf("%d", sum);
	return 0;
}