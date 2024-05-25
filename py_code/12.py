'''
*                   * 
* *               * * 
* * *           * * * 
* * * *       * * * * 
* * * * *   * * * * * 
* * * * * * * * * * * 
* * * * * * * * * * * 
* * * * *   * * * * * 
* * * *       * * * * 
* * *           * * * 
* *               * * 
'''
n=int(input('Enter no of rows: '))
s=n*2-2
for i in range(1,n+1):
    for j in range(1,i+1):
        print("* ",end="")
    for k in range(1,s):
        print("  ",end="")
    na=i+1
    if(i==n): na-=1
    for j in range(1,na):
        print("* ",end="")
    print("")
    s-=2
s=0
for i in range(n,1,-1):
    na=i
    if(i==n): na-=1
    for j in range(na,0,-1):
        print("* ",end="")
    for k in range(s,1,-1):
        print("  ",end="")
    for j in range(i,0,-1):
        print("* ",end="")
    print("")
    s+=2

