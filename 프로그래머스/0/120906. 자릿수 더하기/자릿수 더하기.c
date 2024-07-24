#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    while(1)
    {
        answer = answer + n%10;
        if(n<10)
            break;
        n = n/10;
    }
    return answer;
}