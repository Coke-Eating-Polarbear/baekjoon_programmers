#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

const char* morse[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
    "..-", "...-", ".--", "-..-", "-.--", "--.."
};

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    size_t len = strlen(letter);
    char* answer = (char*)malloc((len + 1) * sizeof(char));
    size_t index = 0;
    char morse_char[6]; 
    size_t morse_index = 0;
    
    for (size_t i = 0; i <= len; ++i) {
        if (letter[i] == ' ' || letter[i] == '\0') {
            morse_char[morse_index] = '\0';
            for (int j = 0; j < 26; ++j) {
                if (strcmp(morse_char, morse[j]) == 0) {
                    answer[index++] = 'a' + j;
                    break;
                }
            }
            morse_index = 0;
            if (letter[i] == '\0') {
                break;
            }
        } else {
            morse_char[morse_index++] = letter[i];
        }
    }
    answer[index] = '\0';
    return answer;
}