z=int(input())
y=1
x=1
w=0
print()
while z!=0:
	y=x
	x=w
	w=y+x
	print(w,end=' ')
	z=z-1
