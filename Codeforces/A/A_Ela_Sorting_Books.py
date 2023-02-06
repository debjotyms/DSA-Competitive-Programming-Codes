for i in range(int(input())):
    n,k = map(int, input().split())
    l = list(input())
    s = list(set(l))
    s.sort()
    d = {x:0 for x in s}
    for j in l:
        d[j] += 1    
    ans = ''
    for j in range(k):
        temp = []
        for bal in d:
            if d[bal] != 0:
                temp.append(bal)
                d[bal] -= 1
            if len(temp) == n//k:
                break
        if 'a' not in temp:
            ans+= 'a'
        else:
            for bara in range(len(temp)-1):
                if ord(temp[bara+1]) - ord(temp[bara]) >1:
                    ans+= chr(ord(temp[bara])+1)
                    break
            else:
                ans+= chr(ord(temp[-1])+1)
    print(ans)
    