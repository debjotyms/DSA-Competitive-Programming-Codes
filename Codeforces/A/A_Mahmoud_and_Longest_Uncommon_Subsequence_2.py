a = input()
b = input()
sa = len(a)
sb = len(b)
if sa>sb:
    c = a.split(b,1)
    if len(c)==1:
        c.append('')
    d = max(len(a),len(c[0]),len(c[1]))
    if(a==b):
        print(-1)
    else:
        print(d)
else:
    c = b.split(a,1)
    if len(c)==1:
        c.append('')
    d = max(len(b),len(c[0]),len(c[1]))
    if(a==b):
        print(-1)
    else:
        print(d)