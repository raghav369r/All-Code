'''s="baabbccc"
dic={}
for i in s:
	if i in dic:dic[i]+=1
	else:dic[i]=1
print(dic)
def rec(a):
	if(a>0):
		print(a)
		rec(a-1)
	else: print("KING")
def rec1(a):
	if(a>0):
		rec(a-1)
		print(a)
	else: print("KING")
rec(10)
rec1(10)
alien_0 = {'color': 'green', 'speed': 'slow' ,'points' : 1}
point_value = alien_0.get('points', 'No point value assigned.')
print(point_value)'''
alien_0 = {'color': 'green', 'speed': 'slow' ,'points' : 1}

