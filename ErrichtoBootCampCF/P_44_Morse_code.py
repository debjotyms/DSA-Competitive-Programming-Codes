n=int(input())
lst=[0,1,2,3]
for i in range(4,41):
    lst.append(lst[i-1]+lst[i-2])
print(lst)