T = int(input())
for loop in range(T):
    n,m = map(int,input().split())
    s,t = input(),input()
    ans = -1
    for i in range(6):
        if t in s:
            ans = i
            break
        s+=s
    print(ans)
