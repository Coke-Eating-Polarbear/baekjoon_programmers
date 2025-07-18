def solution(arr):
    answer = 0
    count = 0
    for i in arr:
        count +=1
        answer = answer + i
    
    answer = answer / count
    return answer