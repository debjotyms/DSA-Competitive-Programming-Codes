n = int(input())
lst = [int(x) for x in input().split(' ')]
lst.remove(lst[0])
lst2 = [int(x) for x in input().split(' ')]
lst2.remove(lst2[0])
lst3 = set(lst + lst2)
if(n==len(lst3)):
    print('I become the guy.')
else:
    print('Oh, my keyboard!')