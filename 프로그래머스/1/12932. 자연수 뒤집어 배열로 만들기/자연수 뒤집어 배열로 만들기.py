def solution(n):
    answer = []
    while(1):
        answer.append(n%10)
        if n<10:
            break
        n = n//10
    return answer