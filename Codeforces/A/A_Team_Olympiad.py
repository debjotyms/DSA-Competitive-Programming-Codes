totalPlayer = int(input())
totalPlayerDiff = input().split(' ')
mMan, pMan, phMan = [],[],[]
for i in range(totalPlayer):
    if totalPlayerDiff[i]=='1':
        mMan.append(i)
    elif totalPlayerDiff[i]=='2':
        pMan.append(i)
    elif totalPlayerDiff[i]=='3':
        phMan.append(i)
Len = []
Len.append(len(mMan))
Len.append(len(pMan))
Len.append(len(phMan))
Len.sort()
print(Len[0])
for i in range(Len[0]):
    print(mMan[i]+1,pMan[i]+1,phMan[i]+1)