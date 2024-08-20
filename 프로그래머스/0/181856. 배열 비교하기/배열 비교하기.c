#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr1_len은 배열 arr1의 길이입니다.
// arr2_len은 배열 arr2의 길이입니다.
int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
    int answer = 0;
    int count1 =0, count2=0;
    for(int i=0;i<arr1_len;i++)
    {
        count1 = count1 + arr1[i];      
    }
    for(int j=0;j<arr2_len;j++)
    {
        count2 = count2 + arr2[j];      
    }
    if(arr1_len > arr2_len)
        answer =1;
    else if(arr1_len < arr2_len)
        answer = -1;
    else if(arr1_len == arr2_len)
    {
    if(count1 > count2)
        answer =1;
    else if(count1<count2)
        answer = -1;
    else if(arr1_len == arr2_len)
        answer = 0;
    }

    
    return answer;
}