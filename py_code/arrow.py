n=int(input("Enter no of stars: "))
def rarrow(n):
	for i in range(1,n+1):
		print("  "*n,end='')
		for j in range(1,n+1):
			if(i==j):print("* ",end='')
			else:print("  ",end='')
		print('')
	print("* "*(2*n+1))
	for i in range(n,0,-1):
		print("  "*n,end='')
		for j in range(n,0,-1):
			if(i+j==n+1):print("* ",end='')
			else:print("  ",end='')
		print('')
	print("="*60)
def larrow(n):
	for i in range(n,0,-1):
		for j in range(n,0,-1):
			if((i+1)+j==n+1):print("* ",end='')
			else:print("  ",end='')
		print("")
	print("* "*(2*n+1))
	for i in range(1,n+1):
		for j in range(1,n+1):
			if(i+1==j):print("* ",end='')
			else:print("  ",end='')
		print('')
	print("="*60)
	
rarrow(n)
larrow(n)
