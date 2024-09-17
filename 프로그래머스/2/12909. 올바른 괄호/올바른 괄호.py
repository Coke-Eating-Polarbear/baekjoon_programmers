def solution(s):
    answer = True
    temp = []
    for i in s:
        if(i=='('):
            temp.append(i)
        elif(i==')'):
            if(len(temp)==0):
                answer = False
                break
            else:
                temp.pop(-1)
    if(len(temp) != 0):
        answer = False

    return answer