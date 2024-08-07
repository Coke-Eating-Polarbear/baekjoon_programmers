#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char* answer = (char*)malloc(len+1);
    int index = 0;
    char ch[5] = {'a','e','i','o','u'};
    for(int i = 0; i<len;i++)
    {
        bool is_vowel = false;
        for(int j=0;j<5;j++)
        {

            if (my_string[i] == ch[j]) 
            {
            is_vowel = true;
            break;
            }
                      
        }
        if (!is_vowel) 
        {
            answer[index] = my_string[i];
            index++;
        }
    }
    answer[index] = '\0';
    return answer;
}