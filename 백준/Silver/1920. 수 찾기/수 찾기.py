n = int(input())

main = set(map(int, input().split()))

m = int(input())

finds= list(map(int, input().split()))

for num in finds:
    if num in main:
        print(1)
    else:
        print(0)