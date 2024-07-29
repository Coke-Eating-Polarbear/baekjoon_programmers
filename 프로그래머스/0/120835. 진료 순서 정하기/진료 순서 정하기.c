#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// emergency_len은 배열 emergency의 길이입니다.
int* solution(int emergency[], size_t emergency_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(emergency_len*sizeof(int));
    int max =0;
    int count =1;
    int index=0;
    int temp=0;
    for(int i=0;i<emergency_len;i++)
    {
        for(int j=0;j<emergency_len;j++)
        {
            if(emergency[j]>max)
            {
                max = emergency[j];
                temp = j;
                answer[j] = count;
            }
                        
        }
        emergency[temp] = -999;
        count++;
        index++;
        max=0;
    }
    
    return answer;
}