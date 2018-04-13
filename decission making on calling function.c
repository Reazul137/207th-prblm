#include<stdio.h>
int main()
{
    int num1, num2, sum, sub1, a;

    printf("Enter 1 for addition and 2 for Substraction : ");
    scanf("%d", &a);

    printf("Enter the two value : ");
    scanf("%d %d", &num1,&num2);

    if( a == 1)
    {
        sum = add (num1, num2);
        printf("addition = %d",sum);
    }
    else if ( a > 2)
    {
        printf("Enter the number is not specifi range!");
        return 0;
    }
}
int add (int a, int b)
{
    int result;
    result = a+ b;
    return result;
}
int sub (int a, int b)
{
    int result;
    result = a-b;
    return result;
}


