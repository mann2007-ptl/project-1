#include <stdio.h>
int main()
{
    float temp;
    scanf("%f",&temp);
    if(temp>=35.0)
    {printf("too hot");}
    else if(temp>=25.0)
    {printf("warm and sunny");}
    else{printf("cold");}
    return 0;
}


