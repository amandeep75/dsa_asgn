#include<stdio.h>
int min(int*, int);
int max(int*, int);
void main()
{
int i,n,j=0,temp,x,*p,mino,maxo;
printf("Provide length of array:");
scanf("%d",&n);
p=&x;
p=(int *) malloc (n*2);
for(i=0;i<n;i++)
{
printf("Provide NOs. %d:\n",i+1);
scanf("%d",(p+i));
}

mino=min(p,n);
maxo=max(p,n);
printf("MIN value is %d\n",(mino));
printf("MAX value is %d",(maxo));
}
int min(int *p, int n)
{
int i=0,temp;
temp = *p;
for (i;i<n;i++)
    {
    if (temp > *(p+i))
        temp = *(p+i);
    }
return temp;
}

int max(int *p, int n)
{
int i=0,temp;
temp=*p;
for (i;i<n;i++)
    {
    if (temp < *(p+i))
        temp = *(p+i);
    }
return temp;
}
