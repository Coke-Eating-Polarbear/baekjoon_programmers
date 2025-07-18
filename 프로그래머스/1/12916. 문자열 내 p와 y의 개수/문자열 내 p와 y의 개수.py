def solution(s):
    answer = True
    pcount = 0
    s = s.lower()
    for i in s:
        print(i)
        if i=='p':
            pcount+=1
        elif i=='y':
            pcount-=1
    if pcount==0:
        return True
    else:
        return False