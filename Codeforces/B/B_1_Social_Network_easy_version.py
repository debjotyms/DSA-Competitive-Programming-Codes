n,k = map(int,input().split())
lst = list(map(int,input().split()))

ans = []
for x in lst:
    if x not in ans:
        ans.insert(0,x)
    if len(ans)>k:
        ans.pop()

print(len(ans))
print(*ans,sep=' ')
    