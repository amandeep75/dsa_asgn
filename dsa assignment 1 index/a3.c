#include<stdio.h>
void main(){
int i=0,n,j,*min,*max;
printf("Provide the No.of entries:");
scanf("%d",&n);
int age[n],temp=0;
for(i=0;i<n;i++){
	printf("Provide Entry %d:\n",i+1);
	scanf("%d",&age[i]);
}
for(i=0;i<n;i++){
	for(j=0;j<n;j++)
    {
        if(age[i]<=age[j])
           {
            temp=age[i];
            age[i]=age[j];
            age[j]=temp;
           }
    }
}
i=1;
min=(age+1);
max=(age+n-2);
while((*min)==*(age))
{
   i++;
   min=(age+i);
}
i=1;
while((*max)==*(age+n-1))
{
   i++;
   max=(age+n-1-i);
}

printf("2nd Min No. is %d \n",*(min));
printf("2nd Max No. is %d",*(max));
}
