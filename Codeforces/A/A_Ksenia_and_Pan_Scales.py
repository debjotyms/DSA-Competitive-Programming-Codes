s = input()
t = input()
flag = 0
l = ''
r = ''
for i in s:
    if(i=='|'):
        flag+=1
        continue
    if(flag==0):
        l+=i
    else:
        r+=i
ll = len(l)
lr = len(r)
lt = len(t)
for i in t:
    if(len(l)<=len(r)):
        l+=i
    else:
        r+=i
if(len(l)==len(r)):
    print(l+'|'+r)
else:
    print('Impossible')