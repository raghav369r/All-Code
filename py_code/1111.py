str1="raghav"
str2="rgv"
check=n=0
l1=len(str1)
l2=len(str2)
if(l2>l1):
	check=1
else:
	for k in range(0,l2):
		for i in range(n,l1):
			if(str1[i]==str2[k]):
				n=i+1
				break
		else:
				check=1
				break
if(check==0):
	print("YES")
else:
	print("NO")
