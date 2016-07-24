#include<stdio.h>
void main(){
int i=0,*a,n=0,k=0,num=0;
printf("Provide No. of entries:");
scanf("%d",&n);
int x[n+1];
a=x;
for(i;i<n;i++){
printf("Provide No %d:",i+1);
	scanf("%d",(a+i));
}
printf("Provide index to add element:");
scanf("%d",&k);
printf("Provide element:");
scanf("%d",&num);

for(i=n ; i >= k ; i--){
	*(a+i) = *(a+i-1);
}
*(a+k-1)=num ;
for(i=0;i<n;i++){
    printf("%d\n", *(a+i));
}
}
