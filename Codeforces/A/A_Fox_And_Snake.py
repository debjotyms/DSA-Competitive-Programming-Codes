v = [int(x) for x in input().split(' ')]
for i in range(1,v[0]+1):
	if i%2==1:
		for j in range(v[1]):
			print('#',end='')
		print()
	else:
		if i%2==0:
			if i%4==0:
				print('#',end='')
				for j in range(v[1]-1):
					print('.',end='')
				print()
			else:
				for j in range(v[1]-1):
					print('.',end='')
				print('#')
					