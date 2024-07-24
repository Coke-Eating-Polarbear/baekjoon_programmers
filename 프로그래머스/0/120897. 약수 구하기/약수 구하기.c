#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int i =1;
    int* answer = (int*)malloc(10000);
    int index=0;
    while(1)
    {
        if(n%i==0)
        {
            answer[index]=i;
            index++;
        }
        if(i==n)
            break;
        i++;
        
    }
    
    return answer;
}