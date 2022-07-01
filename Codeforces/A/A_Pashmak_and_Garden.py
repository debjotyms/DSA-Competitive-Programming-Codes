cds = [int(x) for x in input().split(' ')]
x1,y1,x2,y2=cds[0],cds[1],cds[2],cds[3]
if(x1==x2):
    x3,y3,x4,y4=x1+abs(y1-y2),y1,x2+abs(y1-y2),y2
    print(f'{x3} {y3} {x4} {y4}')
elif(y1==y2):
    x3,y3,x4,y4=x1,abs(x1-x2)+y1,x2,abs(x1-x2)+y2
    print(f'{x3} {y3} {x4} {y4}')
elif(abs(x1-x2)==abs(y1-y2)) and x2>x1:
    x3,y3,x4,y4=x1+abs(y1-y2),y1,x2-abs(y1-y2),y2
    print(f'{x4} {y4} {x3} {y3}')
elif(abs(x1-x2)==abs(y1-y2)) and x2<x1:
    x3,y3,x4,y4=x1-abs(y1-y2),y1,x2+abs(y1-y2),y2
    print(f'{x4} {y4} {x3} {y3}')
else:
    print(-1)