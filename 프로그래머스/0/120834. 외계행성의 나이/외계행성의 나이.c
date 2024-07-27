#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int index = 0;
    int array[4];
    while(1)
    {
        array[index] = age %10 +97;        
        index++;
        if(age < 10)
            break;
        age = age/10;
    }
    char* answer = (char*)malloc(index+1);
    int temp = index-1;
    for(int i=0; i<index;i++)
    {
        answer[i]= array[temp];
        temp--;
    }
    answer[index] = '\0';
    return answer;
}