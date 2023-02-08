for t in range(int(input())):
    l = []
    n = int(input())
    for i in range(n):
        lst = list(map(int, input().split()))
        l.append(lst)

    flag = True
    
    for i in range(5):
        for j in range(i+1,5):
            i_c = 0
            j_c = 0
            b_c = 0
            for k in range(n):
                if l[k][i] == 1 and l[k][j] == 1:
                    b_c+=1
                elif l[k][i] == 1:
                    i_c+=1
                elif l[k][j] == 1:
                    j_c+=1
            if i_c > 0 and j_c > 0 and (n//2 - i_c + n//2 - j_c == b_c):
                print("YES")
                flag = False
                break
        if not flag:
            break

    if flag:
        print("NO")
        
                