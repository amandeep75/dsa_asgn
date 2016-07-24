#include<stdio.h>
void main(){
int i=0,j=0,n,*age,min=0,max=0;
printf("Provide the No.of entries:");
scanf("%d",&n);
int x[n],temp=0;
age=x;
for(i;i<n;i++){
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
for(i=0;i<n;i++){
	for(j=0;j<n;j++)
    {
        if(*(age+i)<*(age+j))
           {
            temp=*(age+i);
            *(age+i)=*(age+j);
            *(age+j)=temp;
           }
    }
}
printf("2nd Min age is %d \n", *(age+1));
printf("2nd Max age is %d", *(age+n-2));
}
