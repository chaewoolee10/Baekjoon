#26560
n = int(input())

for i in range(n):
    a = input()
    if(a[len(a) - 1] != '.'):
        print(a, end='.')
        print()
    else:
        print(a)

