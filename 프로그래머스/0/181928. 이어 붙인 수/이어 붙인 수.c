#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int temp1=0;
    int temp2=0;
    for(int i=0;i<num_list_len;i++)
    {
        if(num_list[i]%2==0)
        {   
            temp1 = temp1 *10;
            temp1 = temp1 + num_list[i]; 
        }
        else
        {
            temp2 = temp2 * 10;
            temp2 = temp2 + num_list[i];
        }
    }
    answer = temp1 + temp2;
    return answer;
}