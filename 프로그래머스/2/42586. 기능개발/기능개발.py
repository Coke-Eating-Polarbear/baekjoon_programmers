import math
def solution(progresses, speeds):
    answer = []
    date = 0
    needdate = 0
    count = 0
    for i in range(len(progresses)):
        need = 100 - progresses[i]
        needdate = math.ceil(need / speeds[i])
        if(date>=needdate):
            count += 1
        else:          
            if(count>0):
                answer.append(count)
            count = 1
            date = needdate
    answer.append(count)
    return answer