line, iceStart = map(int, input().split())
distressed = 0
for i in range(line):
    symbAmt = input().split(' ')
    if symbAmt[0] == '+':
        iceStart+=int(symbAmt[1])
    elif symbAmt[0] == '-':
        if(iceStart>=int(symbAmt[1])):
            iceStart-=int(symbAmt[1])
        else:
            distressed+=1
print(iceStart,distressed)