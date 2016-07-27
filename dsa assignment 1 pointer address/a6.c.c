#include<stdio.h>
#include<stdlib.h>
void func(int*,int*,int*,int);
void main()
{
int i,n,j=0,temp,x,*p,min,max;
printf("Provide length of array:");
scanf("%d",&n);
p=&x;
p=(int *) malloc (n*2);
for(i=0;i<n;i++)
{
printf("Provide NOs. %d:\n",i+1);
scanf("%d",(p+i));
}
func(p,&min,&max,n);
printf("MIN value is %d\n",(min));
printf("MAX value is %d",(max));
}
void func(int *p,int *min,int *max, int n)
{
int i,j,temp;
temp = *p;
for (i=0;i<n;i++)
{
      for(j=0;j<n;j++)
        if(*(p+i)<*(p+j))
    {
        temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
    }
}
*min=*(p);
*max=*(p+n-1);
}
