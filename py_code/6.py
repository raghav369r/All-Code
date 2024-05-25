"""
*   *   *   *   *
  *   *   *   *
    *   *   *
      *   *
        *
      *   *
    *   *   *
  *   *   *   *
*   *   *   *   *

"""
n=int(input("Enter no of rows: "))
for i in range(n,0,-1):
	print(" "*(n-i),end="")
	print("* "*i)
for i in range(2,n+1):
	print(" "*(n-i),end="")
	print("* "*i)

