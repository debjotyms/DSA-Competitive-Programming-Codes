def binary(num):
  return int(bin(num).split('0b')[1])
if __name__ == "__main__":
  x=int(input())
  binary_x = binary(x)
  s=str(binary_x)
  for i in s:
    if(i=='1'):
      i = 2
      print(i,end="")
    else:
      i = 0
      print(i,end="")