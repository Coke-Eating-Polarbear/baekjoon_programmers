import math

def solution(n):
    answer = 0
    a = int(n**0.5)
    if a*a ==n:
        answer = (a+1)**2
    else:
        answer =-1
    
    return answer