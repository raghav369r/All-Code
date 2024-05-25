"""
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
      * * *     6
    * * * * *   4
"""
n=int(input("Enter no of rows: "))
for i in range(1,n):
	print("  "*(n-i),end="")
	print("* "*(2*i-1))
for i in range(n,0,-1):
	print("  "*(n-i),end="")
	print("* "*(2*i-1))
j=3
for i in range(n-2,n+1,2):
	print("  "*j,end="")
	j-=1
	print("* "*i)
