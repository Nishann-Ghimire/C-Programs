/*Question
Write a function with arguments and no return type to add two number
*/
#include <stdio.h>
int add(int, int);
int main()
{
    int a, b, sum;
    printf("Enter two numbers : ");
    scanf("%d%d", &a, &b);
    sum = add(a, b);
    printf("Sum is : %d",sum);
    return 0;
}
//  Sum Function
int add(int x, int y)
{
    int z;
    z = x + y;
    return(z);
}