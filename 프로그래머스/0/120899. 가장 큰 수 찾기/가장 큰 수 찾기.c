#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// array_len은 배열 array의 길이입니다.
int* solution(int array[], size_t array_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*array_len);
    int index=0;
    int max=0;
    for(int i = 0;i<array_len;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
            index=i;
        }
    }
    answer[0]=max;
    answer[1]=index;
    return answer;
}