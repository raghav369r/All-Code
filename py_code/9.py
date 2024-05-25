'''
* * * * * * * * * * * * * * * * * 
  * * * * * * *   * * * * * * * 
    * * * * *       * * * * * 
      * * *           * * * 
        * * * * * * * * * 
          * * * * * * * 
            * * * * * 
              * * * 
                * 
'''
n=int(input("Enter no of rows: "))
st=n-2
s=1
for i in range(n,0,-1):
    print("  "*(n-i),end="")
    if(i>n/2+1 and i!=n):
        print("* "*st,end="")
        print("  "*s,end="")
        print("* "*st)
        #print(st,s)
        st-=2
        s+=2
    else:
        print("* "*(2*i-1))
