def solution(x):
    answer = True
    count = 0
    check = x
    while(1):
        count = count+ (x%10)
        if x<10:
            break
        x = x//10
        
    if check%count ==0:
        answer =True
    else:
        answer = False
        
    return answer