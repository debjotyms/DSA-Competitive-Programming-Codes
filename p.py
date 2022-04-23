a = 'aaaaabbbaabbbabbba'
for i in range(len(a)):
    if a[i]!=a[i+1]:
        a = a[:i+1]+','+a[i+1:]
        i+=1
print(a)