n1,n2,n3=input().split()
n1=int(n1)
n2=int(n2)
n3=int(n3)
sum=0
i=0
while i<n1:
	sum=sum+n2
	n2=n2+n3
	i=i+1
print(sum)
