#include<stdio.h>
void main(){
int x,*age = &x,i,n,min=0,max=0;
printf("Provide the No.of entries:");
scanf("%d",&n);
age = (int *) malloc(n*sizeof(int));
for(i=0;i<n;i++){
	printf("Provide Entry %d:\n",i+1);
	scanf("%d",(age+i));
	    if(age[i] > 0)
       {
        continue;
       }
    else
        {printf("Error Encountered\n");
        exit(0);}
}
	min= *age; max=*age;
for(i=1;i<n;i++){
	if(min > *(age+i))
		min= *(age+i);
	if(max < *(age+i))
		max= *(age+i);
}
printf("Max age is %d \n",max);
printf("Min age is %d",min);
}
