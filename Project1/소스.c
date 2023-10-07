#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)
void reverse(char str[])
{
	int idx = 0;
	int i;
	int tmp;
	int start;
	int end;

	//while (str[idx] != '\0')
	//{
	//	//printf("%c", str[idx]);
	//	idx++;
	//}
	idx = strlen(str);
	idx = idx - 1;
	start = 0;
	end = idx;
	for (i = 0; i < idx / 2; i++)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}
int main(void)
{
	char str[50];
	
		
	printf("영단어 입력");
	scanf("%s", str);

	reverse(str);
	
	printf("%s", str);

}