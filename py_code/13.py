'''
        * * * * * * * * * * * 
      * *   * * * * * * *   * * 
    * * *     * * * * *     * * * 
  * * * *       * * *       * * * * 
* * * * *         *         * * * * * 
  * * * *       * * *       * * * * 
    * * *     * * * * *     * * * 
      * *   * * * * * * *   * * 
        * * * * * * * * * * * 
'''
n=int(input("Enter no of rows: "))
for i in range(1,n):
	if i==1:
		print("  "*(n-i),end="")
		print("* "*(2*n+1))
	else:
		print("  "*(n-i),end="")
		print("* "*i,end="")
		print("  "*(i-1),end="")
		print("* "*(2*(n-i)+1),end="")
		print("  "*(i-1),end="")
		print("* "*i)
for i in range(n,0,-1):
	if i==0:
		print("  "*(n-i),end="")
		print("* "*(2*n+1))
	else:
		print("  "*(n-i),end="")
		print("* "*i,end="")
		print("  "*(i-1),end="")
		print("* "*(2*(n-i)+1),end="")
		print("  "*(i-1),end="")
		print("* "*i)		
	
