'''
  2           8 10            16  18            24          
* * * * * * * * * * * * * * * * * * * * * * * * *
  *           *   *           *   *           *
    *       *       *       *       *       *
      *   *           *   *           *   *
        *               *               *
      *   *           *   *           *   *
    *       *       *       *       *       *
  *           *   *           *   *           *
* * * * * * * * * * * * * * * * * * * * * * * * *
'''
#n=int(input("Enter no of rows: "))
n=9
k=9
l=17
m=8
n=16
o=24
for i in range(1,n+1):
	if(i==1 or i==n):print("* "*(9*3-2),end="")
	else:
		print("  "*(i-1),end="")
		print("* ",end="")
		for j in range(i,(9*3-1)):
			if(j==k or j==l or j==m or j==n or j==o):print("* ",end="")
			else:print("  ",end="")
		k+=1
		l+=1
		m-=1
		n-=1
		o-=1
	print("")
