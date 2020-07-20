test=int(input())
while test:
    n = int(input())
    c = list(map(int, input().rstrip().split()))
    count=0
    for i in range(n):
        for j in range(i+1,n):
            if c[i]!=c[j]:
                count+=1
            
    print(count)
    test-=1    

    
