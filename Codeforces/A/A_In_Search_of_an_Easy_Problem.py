class Easy:
    def __init__(self):
        n = int(input())
        lst = [int(x) for x in input().split(' ')]
        flag = 0
        for i in lst:
            if i==1:
                print('HARD')
                flag = 1
                break
        if flag==0:
            print('EASY')
a = Easy()
def bubble