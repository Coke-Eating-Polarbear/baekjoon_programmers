#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(s);
    char* answer = (char*)malloc(len+1);
    char array[len];
    int index =0;
    int count=0;
    for(int i = 0; i<len;i++)
    {
        array[i] = s[i];
    }
        char temp[len + 1];
    for (int i = 0; i < len; i++) {
        temp[i] = '0';  // 모든 요소를 '0'으로 설정
    }
    temp[len] = '\0'; 
    int tlen = strlen(temp);
    if(len != 1)       
    { 
        for(int j=0;j<len;j++)
        {
            tlen = strlen(temp);
            bool flag =false;
            for(int k=0;k<tlen;k++)
            {
                
                if(array[j] == temp[k])
                {
                    flag = true;
                    break;
                }
            }
            if(flag != true)
            {
                temp[index] = array[j];
                index++;
            }
        }
    }
    int tempcount=0;
    int counttemp=0;
    for(int a=0;a<tlen;a++)
    {
        for(int b=0;b<len;b++)
        {
            if(temp[a]==array[b])
            {
                count++;
                counttemp =b;
            }
        }
        if(count==1)
        {
            answer[tempcount] = array[counttemp];
            tempcount++;
        }
        count=0;
    }
    char tempchar;
    answer[tempcount] = '\0';
    for(int x=0;x<tempcount;x++)
    {
        for(int y=0;y<tempcount;y++)
        {
            if(answer[x]<answer[y])
            {
                tempchar = answer[x];
                answer[x]=answer[y];
                answer[y] =tempchar;
            }
        }
    }
    if(len == 1)
    {
        answer[0] = s[0];
        answer[len] = '\0';
    }
    
    return answer;
}