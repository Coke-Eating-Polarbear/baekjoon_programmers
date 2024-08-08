def solution(num, k):
    answer = -1
    index = 0
    array=[]
    while(1):
        array.append(num%10)
        if(num<10):
            break;
        num = num //10
        index = index + 1
    array = list(reversed(array))
    temp = 1
    for index, value in enumerate(array, start=1):
        if value == k:
            return index
    return answer