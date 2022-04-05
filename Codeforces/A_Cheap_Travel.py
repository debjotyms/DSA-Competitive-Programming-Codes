from math import ceil, floor
v = [int(x) for x in input().split(' ')]
if v[0]%v[1]==0:
    one = (v[0]/v[1])*v[3]
    two = v[0]*v[2]
    print(int(min(one,two)))
else:
    one = (floor(v[0]/v[1])*v[3])+((v[0]%v[1])*v[2])
    two = v[0]*v[2]
    three = (ceil(v[0]/v[1])*v[3])
    print(int(min(one,two,three)))