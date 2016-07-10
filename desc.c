#include<stdio.h>
void main()
{
int a,b,d[50],c[50],n,t;
for(a=0;a<n;a++)
{
scanf("%d",&d[a]);
d[a]=c[b];
}
for(b=0;b<n;b++)
{
scanf("%d",&d[b]);
}
for(a=0;a<n;a++)
{
for(b=0;b<n;b++)
{
if(c[a]>d[b])
{
t=d[a];
d[a]=d[b];
d[b]=t;
t=c[a];
d[a]=c[b];
c[b]=t;
}
else if(c[a]==c[a+1])
{
if(d[a]>d[b])
{
t=d[a];
d[a]=d[b];
d[b]=t;
}
}
}

}
for(a=0;a<n;a++)
{
printf("%d",d[a]);
}
}
