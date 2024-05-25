""" 
* * * * * * * * * * *  
* * * * *   * * * * * 
* * *           * * * 
*                   * 
* * *           * * * 
* * * * *   * * * * * 
* * * * * * * * * * * 
"""
n=int(input('Enter no of rows: '))
s=0
for i in range(n,1,-1):
    l=2*i
    if(i==n): l=2*(i-1)
    for j in range(l,1,-1):
        print("* ",end="")
    for k in range(s,1,-1):
        print("  ",end="")
    if(i==n):l+=1
    for j in range(l,1,-1):
        print("* ",end="")
    print("")
    if(i==n) :s=2
    else:s+=4
s=n*4-6
for i in range(1,n+1):
    l=2*i
    if(i==n): l=2*(i-1)
    for j in range(1,l):
        print("* ",end="")
    for k in range(1,s):
        print("  ",end="")
    if(i==n):l+=1
    for j in range(1,l):
        print("* ",end="")
    print("")
    s-=4
