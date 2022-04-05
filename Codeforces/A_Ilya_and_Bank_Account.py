state = input()
a = int(state)
b = int(state[0:-1])
c = ''
for i in range(len(state)):
    if i==len(state)-2:
        continue
    c+=state[i]
print(max(a,b,int(c)))