n,k=map(int,input().split())
c=0
l=list(map(int,input().split()))
for i in range(0,len(l)):
	if l[i]==k:
		c=c+1
print(c)
