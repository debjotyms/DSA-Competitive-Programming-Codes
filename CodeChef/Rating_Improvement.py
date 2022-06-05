a=int(input())
for i in range(a):
    lst=[int(x) for x in input().split(' ')]
    if lst[0]<=lst[1]<=lst[0]+200:
        print("YES")
    else:
        print("NO")