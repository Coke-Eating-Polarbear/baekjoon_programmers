#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=strlen(my_string);
    char* answer = (char*)malloc(len+1);
    char temp;
    char array[len];
    for(int a=0;a<len;a++)
    {
        array[a] = my_string[a];
        if(array[a]>=65 &&array[a]<=90)
            array[a] = array[a]+32;
        printf("%c",array[a]);
    }
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(array[i]>array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int b=0;b<len;b++)
    {
        answer[b] = array[b];
    }
    answer[len] = '\0';
    return answer;
}