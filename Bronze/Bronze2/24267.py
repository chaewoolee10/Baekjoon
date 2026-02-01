#24267
n = int(input())
sum = 0
for i in range(1 , n - 2 + 1):
    sum += i * (1 + i) // 2
    
print(int(sum))
print(3)