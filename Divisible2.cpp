#include<stdio.h>
int Rev_Num(int num)
{
int x,sum=0;
while(num>0)
{
  x=num%10;
  sum=sum*10+x;
  num=num/10;
}
return(sum);
}
int main()
{
int N,sum_even,sum_odd,r;
scanf("%d",&N);
  if(N%2!=0&&N>100000)
return 0;
int A[N];
for(int i=0;i<N;i++)
scanf("%d",&A[i]);
for(int i=0;i<(N/2);i++)
{
  A[i]=Rev_Num(A[i]);
}
sum_even=0;
sum_odd=0;
for(int i=0;i<N;i++)
{
  if(i%2==0)
  sum_odd+=(A[i]%10);
  else
  sum_even+=(A[i]%10);
}
r=sum_odd-sum_even;
//printf("\n%d\n ",r);
if(r%11==0||r==0)
printf("OUI\n");
else
printf("NON\n");
 
return 0;
}
