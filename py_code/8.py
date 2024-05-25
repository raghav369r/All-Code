"""
*		0 1 	
  * *		1 2
    * * *	2 3
      * * * *	3 4
    * * *	2 3
  * *		1 2
*		0 1 
"""
n=int(input("Enter no of rows: "))
for i in range(1,n+1):
	print("  "*(i-1),end="")
	print("* "*i)
for i in range(n-1,0,-1):
	print("  "*(i-1),end="")
	print("* "*i)
