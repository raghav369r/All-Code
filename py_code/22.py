n=int(input())
l=[]
E1=E2=E3=0
l2=['s17','s18','s19']
for i in range(0,n):
    l3=input()
    l.append(l3)
    if len(l[i])>7:
        print("INVALID INPUT")
for i in l:
    if(i[2]=='7'):
        E3+=1
        print(i,'- E3')
    elif(i[2]=='8'):
        E2+=1
        print(i,'- E2')
    elif(i[2]=='9'):
        E1+=1
        print(i,'- E1')
    else:
        print("INVALID INPUT")
#format_float="{:.1f}".format(float)
print('E3 -',E3)
print('E2 -',E2)
print('E1 -',E1)
print('E3 -','{:.1f}'.format(E3/3))
print('E2 -',"{:.1f}".format(E2/3))
print('E1 -',"{:.1f}".format(E1/3))
