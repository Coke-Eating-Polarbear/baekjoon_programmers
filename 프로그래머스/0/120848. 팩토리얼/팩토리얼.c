#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int factorial(int num)
{
    if(num <= 1)
	{
		return 1;
	}
	else
	{
		return num * factorial(num - 1);		//재귀호출
	}
}
int solution(int n) {
    int answer = 0;
    int index = 1;
    int cal1,cal2;
    while(1)
    {
        cal1 = factorial(index);
        
        if(cal1>n)
            break;
        index++;
    }
    answer = index-1;
    return answer;
}