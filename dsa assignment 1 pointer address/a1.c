#include<stdio.h>
void main(){
float avg=0,sum=0,x,*a = &x;
int i,n=0;
printf("Provide Length of array:");
scanf("%d",&n);
a = (float *) malloc (n *sizeof(float));
for(i=0;i<n;i++){
	printf("Provide No. %d:\n",i+1);
	scanf("%f",(a+i));
}
for(i=0;i<n;i++){
	sum += *(a+i);
	}
avg=(sum)/n;
printf("The Sum is %1.02f\n",sum);
printf("The Average is %1.4f", avg);
}
