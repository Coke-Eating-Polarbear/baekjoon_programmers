#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 1;
    int count=slice;
    while(1)
    {
        if(slice<n)
        {
            slice = slice+count;
            answer++;
        }
        else if(slice >= n)
            break;
    }
    return answer;
}