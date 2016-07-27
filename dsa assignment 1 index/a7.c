#include<stdio.h>
#define carry 999
struct weight
{
    int kg;
    int gram;
};
main()
{
    struct weight w1,w2;

    printf("Input grams for weight_1\n");
    scanf("%d",&w1.gram);
    printf("Input Kilogram for weight_1\n");
    scanf("%d",&w1.kg);
    printf("Input grams for weight_2\n");
    scanf("%d",&w2.gram);
    printf("Input Kilogram for weight_2\n");
    scanf("%d",&w2.kg);

int sum_gram = (w1.gram)+ (w2.gram);
int sum_kg = (w1.kg)+(w2.kg);
if(sum_gram > carry )
{
    sum_gram -= 1000;
    sum_kg += 1;
}
printf("Addition of w1 and w2 in KGs: %d\n",sum_kg);
printf("Addition of w1 and w2 in grams: %d",sum_gram);
}
