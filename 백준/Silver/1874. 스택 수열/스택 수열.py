import sys
n = int(input())

stk = []
answer = []
number = 1
inputnumber = []
for i in range(n):
    a = int(input())
    inputnumber.append(a)
for j in range(n):
    current = inputnumber[j]
    while(number <= current):
        stk.append(number)
        answer.append('+')
        number +=1

    if(len(stk)>0 and stk[-1]==current):
        stk.pop()
        answer.append('-')
    else :
        print('NO')
        sys.exit(0)

for op in answer:
    print(op)