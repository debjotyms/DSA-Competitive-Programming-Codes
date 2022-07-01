n = int(input())
s = input()
s = s.upper()
lst = []
for i in s:
    if i not in lst:
        lst.append(i)
if(len(lst)==26):
    print('YES')
else:
    print('NO')