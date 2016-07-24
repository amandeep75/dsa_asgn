#include<stdio.h>
int min(int [],int n);
int max(int [],int n);
void main(){
    int i,n=0;
    int a[n],mino,maxo;
    double avg=0;
    printf("Provide Length of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("Provide No. %d:\n",i+1);
	scanf("%d",&a[i]);
    }
    mino=min(a,n);
    maxo=max(a,n);
    printf("Minimum Value is %d\n",mino);
    printf("Maximum value is %d",maxo);
}
int min(int a[],int n)
{
    int i=0,mini=a[0];
    while(i<n)
    {
        if(a[i]<mini)
            mini=a[i];
        i++;
    }
    return mini;
}
int max(int a[],int n)
{
    int i=0,maxi=a[0];
    while(i<n)
    {
        if(a[i]>maxi)
            maxi=a[i];
        i++;
    }
    return maxi;
}
