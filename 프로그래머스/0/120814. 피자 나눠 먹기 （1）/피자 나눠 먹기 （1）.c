#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(unsigned int n) {
    unsigned int answer = 0;
    if(n>7)
    {
        answer = n/7;
        if(n%7 != 0)
        {  
            answer++;
        }
    }
    else
        answer = 1;

    
    return answer;
}