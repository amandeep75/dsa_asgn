#include<stdio.h>
#include<stdlib.h>
void main(){
int i,n,min=0,max=0;
printf("Provide the No.of entries:");
scanf("%d",&n);
if (n>0)
{
int age[n];
for(i=0;i<n;i++){
	printf("Provide Entry %d:\n",i+1);
	scanf("%d",&age[i]);
    if(age[i] > 0)
       {
        continue;
       }
    else
        {printf("Error Encountered\n Seems Age entry inappropriate");
        exit(0);}
}
	min=age[0]; max=age[0];
for(i=1;i<n;i++){
	if(min > age[i])
		min=age[i];
	if(max <age[i])
		max=age[i];
}
printf("Max age is %d \n",max);
printf("Min age is %d",min);
}
else
    printf("error Encountered");
    exit(0);
}
