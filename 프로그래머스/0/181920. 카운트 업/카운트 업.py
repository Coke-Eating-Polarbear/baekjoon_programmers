def solution(start_num, end_num):
    answer = []
    i = start_num
    while True:
        answer.append(i)
        if(i==end_num):
            break
        i = i+1
        
    return answer