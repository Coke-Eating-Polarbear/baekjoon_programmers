
#include <stdio.h>

int main() {
    int n;
    int array[100];
    int count = 0;
    
    // 배열 크기 입력
    scanf("%d", &n);
    
    // 배열 요소 입력
    for(int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    
    // 각 요소가 소수인지 확인
    for(int a = 0; a < n; a++) {
        int is_prime = 1; // array[a]가 소수라고 가정
        
        if(array[a] <= 1)
            is_prime = 0; // 1 이하의 숫자는 소수가 아님
        else {
            // array[a]가 소수인지 확인하는 로직
            for(int b = 2; b * b <= array[a]; b++) {
                if(array[a] % b == 0) {
                    is_prime = 0; // array[a]가 소수가 아님
                    break;
                }
            }
        }
        
        // 소수인 경우 count 증가
        if(is_prime == 1) {
            count++;
        }
    }
    
    // 소수의 개수 출력
    printf("%d\n", count);
    
    return 0;
}

