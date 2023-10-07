//열혈 프로그래밍 p.268 3번문제 솔루션
#include <stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	char a[50];
	int idx = 0;
	int max = a[0];
	printf("영단어 입력");
	scanf("%s", a);
	while (a[idx] != '\0')
	{
		idx++;
		if (a[idx] > max)
		{
			max = a[idx];
		}
	}
	printf("%c", max);
}
