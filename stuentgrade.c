#include<stdio.h>
int main()
{
    int m;
    printf("enter the marks of the student");
    scanf("%d",&m);
    if(m<0 || m>100)
    printf("wrong input. enter between 1-100");
    else if (m<40)
    printf(" GRADE F");
    else if(m>=40 && m<=54)
    printf("GRADE D");
    else if(m>=55 && m<=69)
    printf("GRADE C");
    else if(m>=70 && m<=84)
    printf("GRADE B");
    else if(m>=80 && m<=100)
    printf("GRADE A");
    else
    printf("wrong input");
return 0;
}
