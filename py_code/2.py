'''
*           * 1  5  1
* *       * * 2  3  2
* * *   * * * 3  1  3
* * * * * * * 4  0  3
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
