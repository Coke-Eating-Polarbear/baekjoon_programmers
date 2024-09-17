def solution(arr):
    answer = []
    ex = -1
    for i in arr:
        if(ex == i):
            continue
        else:
            answer.append(i)
            ex = i
    return answer