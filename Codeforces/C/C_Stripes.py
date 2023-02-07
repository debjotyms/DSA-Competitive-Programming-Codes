for t in range(int(input())):
    input()
    l = []
    for i in range(8):
        l.append(input())
    for i in l:
        # c = 0
        # for j in i:
        #     if j == "R":
        #         c+=1
        if i.count("R   ") == 8:
            print("R")
            break
    else:
        print("B")