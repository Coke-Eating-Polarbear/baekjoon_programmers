#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    char ck = k + 48;
    char ci[3];

    for(; i<=j; i++)
    {
        sprintf(ci, "%d", i);
        for(int o = 0; o<strlen(ci); o++){
            if(ci[o] == ck){
                answer++;
            }
        }
     }
     return answer;
}