test = int(input())
while test:
    num=int(input())
    str1=''
    for i in range(2,num+1):
        str1+=str(i)
    print(str1.count('2'))
    test-=1
