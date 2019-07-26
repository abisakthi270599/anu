abi=input()
count=0
for i in abi:
	if(i.isalpha() or i.isdigit()):
		count=count
	else:
		count+=1
print(count)
