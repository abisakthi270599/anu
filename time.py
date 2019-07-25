hr,min=map(int,input().split())
hr1,min1=map(int,input().split())
if hr1>hr or min1>min:
	h=hr1-hr
	m=min1-min
else:
	h=hr-hr1
	m=min-min1
print(int(h),m)
	
	
