#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count=0;
    int index=0;
    for(int x=0;x<arr_len;x++)
    {
        count = count+ arr[x];
    }
    int* answer = (int*)malloc(count*sizeof(int));
    for(int i=0;i<arr_len;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
            answer[index] =arr[i];
            index++;
        }
    }

    return answer;
}