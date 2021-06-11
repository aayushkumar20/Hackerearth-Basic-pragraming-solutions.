num=[]
 
p=int(input())
 
g=list(map(int,input().split()))
 
l=int(len(g)/2)
 
if p ==len(g):
 
    for n in g[0:l]:
 
        k=[int(i) for i in str(n)]
 
num.append(k[0])
 
for n in g[l:]:
 
    k=[int(i) for i in str(n)]
 
num.append(k[-1])
 
d=''.join(str(i) for i in num)
 
digit=int(d)
 
 
 
if digit%11==0:
 
    print("OUI")
 
else:
 
    print("OUI")
