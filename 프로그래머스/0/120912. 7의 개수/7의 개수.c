#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {

    int answer = 0;
    char ck = 55;
    char ci[3];

    for(int i=0; i<array_len; i++)
    {
        sprintf(ci, "%d", array[i]);
        for(int o = 0; o<strlen(ci); o++){
            if(ci[o] == ck){
                answer++;
            }
        }
     }
return answer;
    return answer;
}