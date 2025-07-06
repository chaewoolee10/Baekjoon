#15829
l = int(input())
str = input()
list = []

for a in str:
    list.append(a)

res = int(0)

for i in range(0, l):
    a = 0
    if(list[i] == 'a'):
        a = 1
    elif(list[i] == 'b'):
        a = 2
    elif(list[i] == 'c'):
        a = 3
    elif(list[i] == 'd'):
        a = 4
    elif(list[i] == 'e'):
        a = 5
    elif(list[i] == 'f'):
        a = 6
    elif(list[i] == 'g'):
        a = 7
    elif(list[i] == 'h'):
        a = 8
    elif(list[i] == 'i'):
        a = 9
    elif(list[i] == 'j'):
        a = 10
    elif(list[i] == 'k'):
        a = 11
    elif(list[i] == 'l'):
        a = 12
    elif(list[i] == 'm'):
        a = 13
    elif(list[i] == 'n'):
        a = 14
    elif(list[i] == 'o'):
        a = 15
    elif(list[i] == 'p'):
        a = 16
    elif(list[i] == 'q'):
        a = 17
    elif(list[i] == 'r'):
        a = 18
    elif(list[i] == 's'):
        a = 19
    elif(list[i] == 't'):
        a = 20
    elif(list[i] == 'u'):
        a = 21
    elif(list[i] == 'v'):
        a = 22
    elif(list[i] == 'w'):
        a = 23
    elif(list[i] == 'x'):
        a = 24
    elif(list[i] == 'y'):
        a = 25
    elif(list[i] == 'z'):
        a = 26
        
    #print(a * (31 ** i))
    res += a * (31 ** i)
    
print(res % 1234567891)