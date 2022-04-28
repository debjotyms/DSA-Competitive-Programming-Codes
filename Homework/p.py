lst = [["Alan",95,87,91],["Turing",92,90,83],["Elon",87,92,80],["Musk",85,94,90]]
crs = input()
my_list = []
def srter(my_list):
  for i in range(len(my_list)-1):
      for j in range(len(my_list)-1-i):
        if(my_list[j][1]<my_list[j+1][1]):
          temp = my_list[j]
          my_list[j] = my_list[j+1]
          my_list[j+1] = temp
  return my_list
if crs=='CSE110':
  for i in range(4):
    a = []
    a.append(lst[i][0])
    a.append(lst[i][1])
    my_list.append(a)
    my_list = srter(my_list)
elif crs=='PHY111':
  for i in range(4):
    a = []
    a.append(lst[i][0])
    a.append(lst[i][2])
    my_list.append(a)
    my_list = srter(my_list)
elif crs=='MAT110':
  for i in range(4):
    a = []
    a.append(lst[i][0])
    a.append(lst[i][3])
    my_list.append(a)
    my_list = srter(my_list)
for i in range(4):
  print(my_list[i][0])