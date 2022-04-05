alphList = 'a b c d e f g h i j k l m n o p q r s t u v w x y z'
alphList = list(alphList.split(' '))
pLen,rLen = map(int, input().split())
pswrd = []
for i in range(rLen):
    pswrd.append(alphList[i])
pswrd = pswrd*(pLen//rLen+1)
nPswrd = []
i=0
while i<pLen:
    nPswrd.append(pswrd[i])
    i+=1
s = ''
s = s.join(nPswrd)
print(s)