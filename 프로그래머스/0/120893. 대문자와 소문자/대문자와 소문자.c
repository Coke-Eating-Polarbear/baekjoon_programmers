#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char* answer = (char*)malloc(1000*sizeof(my_string));
    printf("%d",len);
    for(int i=0;i<len;i++)
    {
        if((my_string[i]<91)&&(my_string[i]>64))
            answer[i] = my_string[i]+32;
        else if((my_string[i]<123)&&(my_string[i]>96))
            answer[i] = my_string[i]-32;
    }
    return answer;
}