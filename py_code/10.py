'''
      *
    * * *
  * * * * *
* * * * * * *
*           *
* *       * *
* * *   * * *
* * * * * * *
* * *   * * *
* *       * *
*           *
* * * * * * *
  * * * * *
    * * *
      *
'''
n=int(input("Enter no of rows: "))
for i in range(1,n+1):
	print("  "*(n-i),end="")
	print("* "*(2*i-1))
for i in range(1,n):
	print("* "*i,end="")
	print("  "*(2*n-2*i-1),end="")
	print("* "*i)
	
for i in range(n,0,-1):
	print("* "*i,end="")
	print("  "*(2*n-2*i-1),end="")
	if i==n:print("* "*(i-1))
	else:print("* "*i)
for i in range(n,0,-1):
	print("  "*(n-i),end="")
	print("* "*(2*i-1))
