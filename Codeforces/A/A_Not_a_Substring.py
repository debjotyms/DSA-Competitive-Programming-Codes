n = int(input())
for i in range(n):
    s = input()
    n = len(s)

    a = '('*n + ')'*n
    b = '()'*n

    if s not in a:
        print("YES")
        print(a)
    elif s not in b:
        print("YES")
        print(b)
    else:
        print("NO")