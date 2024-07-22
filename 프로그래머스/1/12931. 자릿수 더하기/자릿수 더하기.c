#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int sum =0;
    int cal;
    while(1)
    {
        cal = n % 10;
        answer = answer + cal;
            if(n<10)
        break;
        n = n /10;
        
    }
    return answer;
}