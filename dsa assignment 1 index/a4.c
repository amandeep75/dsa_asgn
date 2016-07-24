#include<stdio.h>
void main(){
int i=0,n=0;
printf("Provide No. of entries:");
scanf("%d",&n);
int a[n+1],k=0,num=0;
for(i=0;i<n;i++){
printf("Provide No %d:",i+1);
	scanf("%d",&a[i]);
}
a[n]=NULL;
printf("Provide index to add element:");
scanf("%d",&k);
printf("Provide element:");
scanf("%d",&num);
for(i=n;i>k-1;i--){
	a[i]=a[i-1];
}
a[k-1]=num;
for(i=0;i<=n;i++){
	printf("%d\n",a[i]);
}
}
