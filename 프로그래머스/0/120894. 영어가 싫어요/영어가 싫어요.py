def solution(numbers):
    answer = 0
    alpha = ["zero","one",'two','three','four','five','six','seven','eight','nine']
    num = ['0','1','2','3','4','5','6','7','8','9']
    for i in range(10):
        numbers = numbers.replace(alpha[i],num[i])
    print(numbers)
    answer = int(numbers)
    return answer