t = int(input())
for i in range(t):
    s = input()
    sl = len(s)
    if(sl%2==0):
        ansi = 0
        for j in s:
            ansi+=(ord(j)-ord('a')+1)
        print(f'Alice {ansi}')
    else:
        sa1 = s[:(sl-1)]
        sb1 = s[(sl-1):sl]
        sa2 = s[1:sl]
        sb2 = s[:1]
        total_sa1 = 0
        total_sa2 = 0
        for ii in sa1:
            total_sa1+=(ord(ii)-ord('a')+1)
        for ii in sa2:
            total_sa2+=(ord(ii)-ord('a')+1)
        if(total_sa1>total_sa2):
            sa = sa1
            sb = sb1
        else:
            sa = sa2
            sb = sb2
        ansa = 0
        ansb = 0
        for j in sa:
            ansa+=(ord(j)-ord('a')+1)
        for j in sb:
            ansb+=(ord(j)-ord('a')+1)
        if(ansa>ansb):
            print(f'Alice {ansa-ansb}')
        else:
            print(f'Bob {ansb-ansa}')