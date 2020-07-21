import math
#Nine Divisor Problem
def count9Divisors(n) :
    resCount = 0
    
    for k in range(n,1,-1):
        cnt = 0
        for i in range(1, (int)(math.sqrt(k)) + 1) :
            if (k % i == 0) :

                if (k / i == i) :
                    cnt = cnt + 1
                else : 
                    cnt = cnt + 2
                
        if cnt == 9:
            resCount +=1
    print(resCount)                     


n = int(input())
numbers = [int(input()) for _ in range(n)]
for k in numbers:
    count9Divisors(k)