#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(2);
    int odd=0;
    int ddo=0;
    for(int i = 0; i < num_list_len;i++)
    {
        if(num_list[i]%2 == 0)
            odd++;
        else
            ddo++;
    }
    answer[0] = odd;
    answer[1] = ddo;
    return answer;
}