#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(arr_len*sizeof(int));
    int len = arr_len%2;
    for(int a=0;a<arr_len;a++)
    {
        answer[a] = arr[a];
    }
    if(len ==1)
    {
        for(int i =0;i<arr_len;i=i+2)
        {
            answer[i] = answer[i]+n;
        }
    }
    else if(len ==0)
    {
        for(int j=1;j<arr_len;j= j+2)
        {
            answer[j] = answer[j]+n;
        }
    }
    
    return answer;
}