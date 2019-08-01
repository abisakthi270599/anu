n9,k9=map(int,input().split())
c9=0
l9=list(map(int,input().split()))
for i in range(0,len(l9)):
	if l9[i]==k9:
		c9=c9+1
print(c9)
