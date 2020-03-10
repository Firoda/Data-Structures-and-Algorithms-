#include <stdio.h>
#include <stdlib.h>
void send()

{

int a[20],b[20],c[20],d[20],i,k,m,f,n,j,r,p,x,y,z,ch,key,q,v,sum=0,ed;

printf("Senders side:-\n");
printf("Enter the length of the data : ");
scanf("%d",&k);

printf("\nEnter the data word \n");
for(i=1;i<=k;i++)

{
printf("\t%d : ",i);
scanf("%d",&a[i]);
}
m=1;

while((k+m+1)>=pow(2,m))
{  m++;
}

printf("\nValue of m is : %d",m); n=k+m;

j=1; r=0; for(i=1;i<=n;i++)
{
p=pow(2,r);
if(i==p)
{
b[i]=0;
r++;
}
else
{
b[i]=a[j];
j++;
}
}
p=0;
for(i=1;i<=m;i++)

{
x=pow(2,p);r=1;
for(j=x;j<=n;j=j+(x*2))
{
for(y=j;y<(j+x);y++)
{
c[r]=b[y];
r++;
}
}

z=0; for(y=1;y<=(r-1);y++)

{
if(c[y]==1)
z++;
}


if(z%2==0)

b[x]=0;
else

b[x]=1;
for(y=1;y<=20;y++)
c[y]=0;
p++;
}

printf("\nThe hamming code is : ");
for(i=1;i<=n;i++)
printf("%d ",b[i]);
}
void reci()

{
int n,b[20],c[20],d[20],m,p,q,v,i,j,x,r,y,z,sum,ed;

printf("\nReciver side:-\n");

printf("Enter the number of digits in the hamming code : ");

scanf("%d",&n);

m=0;
printf("Enter the data word\n");
for(i=1;i<=n;i++)
{
printf("\t%d : ",i);

scanf("%d",&b[i]);
}
while(!(pow(2,m-1)<n && pow(2,m)>n))
{

m++;
}
p=0;

q=0;
sum=0;
for(i=1;i<=m;i++)
{
x=pow(2,p); r=1;

for(j=x;j<=n;j=j+(x*2))
{
for(y=j;y<(j+x);y++)
{
c[r]=b[y];

r++;
}
}
z=0;
for(y=1;y<=(r-1);y++)

{
if(c[y]==1)
z++;
}
v=z%2;

d[q]=v;
sum=sum+(v*pow(2,q));
q++;
for(y=1;y<=20;y++)

c[y]=0;
p++;
}


if(sum<=0)

printf("\n\n NO ERROR FOUND \n\n");
else

printf("\n\n ERROR AT POSITION %d",sum);

}

int main()
{
send();
reci();
}
