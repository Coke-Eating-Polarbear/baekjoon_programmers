#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    int count = 0;
    int temp = 0;
    if(order ==0)
    {
        answer = 0;
    }
    else
    {
        while(1)
        {
            temp = order %10;
            if((temp%3 == 0) &&( temp !=0))
            {
                count++;
            }
            if(order<10)
            {
                break;
            }
            order = order/10;        
        }
    }
    answer = count;
    return answer;
}