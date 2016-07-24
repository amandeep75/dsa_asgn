#include<stdio.h>
void main(){
int i,n=0;
int a[n],sum=0;
double avg=0;
printf("Provide Length of array:");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("Provide No. %d:\n",i+1);
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
	sum += a[i];
	}
avg=sum/n;
printf("The Sum is %d\n",sum);
printf("The Average is %lf",avg);

}
