def solution(s):
    answer = 0
    array = s.split(" ")
    index = 0
    for i in array:
        if(i == 'Z'):
            array[index-1] = 0
            array[index] = 0
        index = index +1
    temp = list(map(int, array))
    answer = sum(temp)
    return answer