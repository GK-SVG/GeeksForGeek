
def getNthFib(n):
    n1,n2=0,1
    t=n
    li=[]
    li.append(n1)
    li.append(n2)
    while n>2:
        n3=n1+n2
        n1=n2
        n2=n3
        li.append(n3)
        n-=1
    return li[t-1]



n = int(input())
print(getNthFib(n))