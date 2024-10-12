croalphabet = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

stringinput = input()

count = 0
temp = stringinput
for i in croalphabet:
    stringinput = stringinput.replace(i, "*")
        

answer = len(stringinput)


print(answer)