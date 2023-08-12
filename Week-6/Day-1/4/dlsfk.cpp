
#include<stdio.h>
int main()
{
    int upper , lower,Lower;

    printf("enter a upper and lower case letter  : ");
    scanf("%c %c", &upper,& Lower);

    lower= tolower(upper);
    printf("lower case = %c : \n",lower);

    upper=toupper(Lower);
    printf("Upper case = %c :", upper);
    getch();
}
