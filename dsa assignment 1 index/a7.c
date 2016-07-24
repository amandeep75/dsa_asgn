#include<stdio.h>

struct weight
{
    int kg;
    int gram;
};
main()
{
    struct weight w1,w2;

    printf("Input grams and Kgs for weight_1\n");
    scanf("%d %d",&w1.gram,&w1.kg );
    printf("Input grams and Kgs for weight_2\n");
    scanf("%d %d",&w2.gram,&w2.kg );

int i,j,k;
double sum=0.000;
i=(w1.kg)*1000 + (w1.gram);
j=(w2.kg)*1000 + (w2.gram);
sum=(double)(i+j)/1000;
printf("Addition of w1 and w2 is in KGs: %1.3lf",sum);
}
