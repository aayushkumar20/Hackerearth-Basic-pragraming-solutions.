str1 = ''
 
N = int(input())
 
data = [int(x) for x in input().split()]
 
for no in data:
 
     str1 = str1 + str(no%10)
 
if int(str1) % 10 == 0:
 
     ans = 'Yes'
 
else:
 
     ans = 'No'
 
print(ans)
