string=input()
 
n=len(string)
 
zc=0
 
oc=0
 
for i in range(n):
 
    if string[i]=='z':
 
         zc+=1
 
    else:
 
        oc+=1
 
if 2*zc==oc:
 
    print("Yes")
 
else:
 
    print("No")
