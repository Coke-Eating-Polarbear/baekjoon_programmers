#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 2;
    int i=1;
    while(1)
    {
        if(n == i*i)
        {
            answer = 1;
            break;
        }
        if(n < i*i)
            break;
        i++;
    }
    return answer;
}