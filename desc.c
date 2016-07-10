#include<stdio.h>
void main()
{
int a,b,c[50],d[50],n,t;
for(a=0;a<n;a++)
{
scanf("%d",&c[a]);
c[a]=d[b];
}
for(b=0;b<n;b++)
{
scanf("%d",&c[b]);
}
for(a=0;a<n;a++)
{
for(b=0;b<n;b++)
{
if(d[a]>c[b])
{
t=c[a];
c[a]=c[b];
c[b]=t;
t=d[a];
c[a]=d[b];
d[b]=t;
}
else if(d[a]==d[a+1])
{
if(c[a]>c[b])
{
t=c[a];
c[a]=c[b];
c[b]=t;
}
}
}

}
for(a=0;a<n;a++)
{
printf("%d",c[a]);
}
}
