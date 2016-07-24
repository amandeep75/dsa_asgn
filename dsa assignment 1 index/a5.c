#include<stdio.h>
void main(){
int i=0,n,num,k;
printf("Provide the No. of Entries:");
scanf("%d",&n);
int p[n];
for(i;i<n;i++)
{
    printf("Provide number for index %d :\n",i+1);
    scanf("%d",&p[i]);
}
printf("provide Index to delete no.:\n");
scanf("%d",&k);
for (i=k-1;i<=n-2;i++)
{
    p[i] = p[i+1];
}
p[n-1]=NULL;
for(i=0;i<n-1;i++)
{
    printf("No. at Index %d is %d\n",i+1,p[i]);
}
}

