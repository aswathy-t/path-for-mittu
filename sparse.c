#include<stdio.h>
int main()
{
int s[10][10],i,j,t=0,l,k=0,m,v[10][3];
printf("enter the order of the matrix");
scanf("%d",&m);
printf("enter the matrix elements");
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&s[i][j]);
if(s[i][j]!=0)
{
k++;
}
}
}
while(t<k)
{
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if(s[i][j]!=0)
{
v[t][0]=i;
v[t][1]=j;
v[t][2]=s[i][j];
t++;
}
}
}
}
for(i=0;i<k;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",v[i][j]);
}
printf("\n");
}
return 0;
}

