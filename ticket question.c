#include <stdio.h>

int main()
{
    int age;
    scanf("%d",&age);
    if(age<=5)
    {printf("free ticket");}
    else if(age<=12)
    {printf("50 rupees ticket");}
    else if(age<=60)
    {printf("100 rupees ticket");}
    else
    {printf("70 rupees ticket75");}
    return 0;
}