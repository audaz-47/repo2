#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
j=1;
for(i=1;i<=n;i++){
j=j*i;
}
printf("%d",j);
}