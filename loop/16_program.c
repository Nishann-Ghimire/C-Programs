/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question

*/
# include<stdio.h>
 int main(){
//Declaring variable and taking inputs
int sum = 0,num,a,b,i = 1; 
printf("Enter a number : ");
scanf("%d",&num);
a = num;
//main code  
while (i < num);
{
    if(num%i == 0){
        sum += i;
    }
    i++;
}
    // printf("%d\n%d\n",sum,a);
if(sum == a){
    printf("The number is a perfect number");
}else{
    printf("The number is not a perfect number");
}

 return 0; 
 }