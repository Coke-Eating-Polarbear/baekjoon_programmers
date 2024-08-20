#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// delete_list_len은 배열 delete_list의 길이입니다.
int* solution(int arr[], size_t arr_len, int delete_list[], size_t delete_list_len) {
    int temp[arr_len];
    int index =0;
    for(int i=0;i<arr_len;i++)
    {
        bool flag = false;
        for(int j=0;j<delete_list_len;j++)
        {
            if(arr[i]==delete_list[j])
            {
                flag = true;
            }
        }
        if(flag == false)
        {
            temp[index] = arr[i];
            index++;
        }
    }
    printf("%d",index);
    int* answer = (int*)malloc(index*sizeof(int));
    for(int a=0;a<index;a++)
    {
        answer[a]=temp[a];
    }
    return answer;
}