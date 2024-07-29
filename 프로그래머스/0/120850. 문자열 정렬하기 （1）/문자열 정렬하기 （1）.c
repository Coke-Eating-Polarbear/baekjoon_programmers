#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(101);
    int len = strlen(my_string);
    int index=0;
    
    for(int i=0; i<len;i++)
    {
        if(my_string[i]>=48 && my_string[i]<=57)
        {
            answer[index]=my_string[i]-48;
            index++;
        }
    }
    int temp;
    for(int j=0;j<index;j++)
    {
        for(int k=j+1;k<index;k++)
        {
            if(answer[j]>answer[k])
            {
                temp = answer[j];
                answer[j]=answer[k];
                answer[k]=temp;
            }
        }
    }
    return answer;
}