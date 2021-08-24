/* 
Write a menu-driven program using Switch case to calculate the following:
a) Area of circle
b) Area of rectangle
c) Perimeter of rectangle
d) volume of sphere
e) Exit
*/
# include<stdio.h>
# include<stdlib.h>
# include<conio.h>
 int main(){
int choice,k;
float a,b;
char confirm;
const float pi = 3.14;
while (1)
{
    system("cls");
printf("\tWelcome to Complex Calculator\n");    
printf("\t\tMain Menu\n");
printf("What do you want to calculate ?\n");
printf("1) Area of circle\n2) Area of rectangle\n3) Perimeter of rectangle\n4) Volume of sphere\n5) Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);    
switch (choice)
{
case 1:
    printf("Enter radius: ");
    scanf("%f",&a);
    printf("Answer : %f meter square\n",pi*a*a);
    printf("Press any key to continue ...");
    getch();
    break;
case 2:
    printf("Enter length : ");
    scanf("%f",&a);
    printf("Enter breadth : ");
    scanf("%f",&b);
    printf("Answer : %f meter square\n",a*b);
    printf("Press any key to continue ...");
    getch();
    break;
case 3:
    printf("Enter length: ");
    scanf("%f",&a);
    printf("Enter breadth: ");
    scanf("%f",&b);
    printf("Answer : %f meter \n",2*(a+b));
    printf("Press any key to continue ...");
    getch();
    break;
case 4:
    printf("Enter radius : ");
    scanf("%f",&a);
    printf("Answer : %f cubic meter \n",(4/3)*pi*a*a*a);
    printf("Press any key to continue...");
    getch();
    break;
case 5:
    printf("Are you sure you want to quit ?(y/n) : ");
    fflush(stdin);
    scanf("%c",&confirm);
    if(confirm == 'n' || confirm == 'N'){ 
    break;
    }
    else{
    exit(0);
    }

default:
    printf("Please enter valid choice\n");
    printf("Press any key to continue...");
    getch();
    break;
}
}   
 return 0; 
 }    
