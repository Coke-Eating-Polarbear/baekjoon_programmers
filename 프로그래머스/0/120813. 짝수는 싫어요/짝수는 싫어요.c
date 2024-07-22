#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*n);
    //int array[n];
    int index=0;
    for(int i =0;i<=n;i++)
    {
        if(i%2==1)
        {
            answer[index] = i;
            index++;
        }
    }
    return answer;
}