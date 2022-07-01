a = input()
b = ''
l1 = a[0]
l2 = a[1:]
temp = 9-int(l1[0])
if(temp==0):
    temp = l1[0]
else:
    old = int(temp)
    new = 9-int(temp)
    if(old>new):
        temp=str(new)
    else:
        temp=str(old)
for i in l2:
    old = int(i)
    new = 9-int(i)
    if(old>new):
        b+=str(new)
    else:
        b+=str(old)
print(str(temp)+b)