test = int(input())
while test:
    str1=input()
    strList=set()
    for i in range(len(str1)):
        for j in range(len(str1)):
            str1[j]=str1[i]
            strList.add(str1)
    sorted(strList)
    print(strList)
    test-=1