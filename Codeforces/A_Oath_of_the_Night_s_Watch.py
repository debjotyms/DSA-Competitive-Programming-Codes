n=int(input())
lst=[int(x) for x in input().split(' ')]
ans=0
lst.sort()
if n<3:
    print(0)
else:
    for i in range(1,n-1):
        if(lst[0]<lst[i]<lst[n-1]):
            ans+=1
    print(ans)