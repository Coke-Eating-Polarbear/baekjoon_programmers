#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(50);
    int cal = 2;
    int index = 0;
    int temp;
    while(1)
    {
        if(n==cal)
        {
            answer[index] = cal;
            break;
        }
        if(n%cal == 0)
        {
            if(answer[index-1]!=cal)
            {
                answer[index] = cal;
                index++;
            }
            n = n/cal;
        }
        else if(n%cal != 0)
        {           
            cal++;
        }

        
    }
    
    return answer;
}