#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
j=30;
for(i=2;i<=n;i++){
j=j*i;
}
printf("%d changed",j);
}
