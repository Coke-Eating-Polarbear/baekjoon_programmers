#include <stdio.h>
#include<string.h>
int main()
{
	char S[1000]="";
	int i = 0;
	scanf("%s", S,sizeof(S));
	scanf("%d", &i);
	printf("%c" ,S[i - 1]);
}