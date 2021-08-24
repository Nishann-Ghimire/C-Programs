/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)

*/
# include<stdio.h>
# include<stdlib.h>
 int main(){
int choice,k;
float a,b;

while (1)
{
    system("cls");
printf("\t\tMain Menu\n");
printf("1. Addition(+)\n2. Subtraction(-)\n3. Multiplication(*)\n4. Division(/)\n5. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);    
switch (choice)
{
case 1:
case '+':
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);
    printf("Answer : %f\n",a+b);
    break;
case 2:
case '-':
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);
    printf("Answer : %f\n",a-b);
    break;
case 3:
case '*':
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);
    printf("Answer : %f\n",a*b);
    break;
case 4:
case '/':
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("Enter second number : ");
    scanf("%f",&b);
    printf("Answer : %f\n",a/b);
    break;
case 5:
    exit(0);
    break;
default:
    printf("Please enter valid choice\n");
    break;
}
}   
 return 0; 
 }