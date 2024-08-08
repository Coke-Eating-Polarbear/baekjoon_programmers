#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char* answer = (char*)malloc(len+1);
    char array[len];
    int index =0;
    answer[index] = my_string[index];
    index++;
    for(int a=0;a<len;a++)
    {
        array[a]=my_string[a];
    }
    for(int i=1;i<len;i++)
    {
        bool flag = false;
        for(int j=0;j<i;j++)
        {
            if(array[i]==array[j])
                {
                flag = true;
            }
        }

        {
            if(flag != true)
                {answer[index]=array[i];
                index++;}
        }
    }        
    
    answer[index] = '\0';
    return answer;
}