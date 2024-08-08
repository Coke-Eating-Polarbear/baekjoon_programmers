#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    int temp = 0;
    int min = 9999;
    int index =0;
    for(int i=0;i<array_len;i++)
    {
        temp = array[i]-n;
        if(temp <0)
        {
            temp = temp* -1;
        }
        if(temp<min)
        {
            min = temp;
            index = i;
        }
        if(temp == min)
        {
            if(array[index]>array[i])
            {
                index = i;
            }

        }
    }
    answer = array[index];
    return answer;
}