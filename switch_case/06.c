# include<stdio.h>
# include<stdlib.h>
int main(){
int num,n,fac,count;
printf("********MENU********");
printf("\n1. Odd or Even\n2.Factorial\n3.Prime number or not\n4. Exit\n");



while(1)
{
printf("choose the number : ");
scanf("%d",&num);
switch(num){
case 1:
	printf("Enter a number : ");
	scanf("%d",&n);
        if(n%2 == 0){
	printf("The number is even\n");
	}else{
	printf("The number is odd\n");
	} 
	break;
case 2:
	printf("Enter a number : ");
	scanf("%d",&n);
	fac = 1;	
	while(n){
	fac *= n;
	n -= 1;
	}
	printf("The factorial is : %d\n",fac);
	break;
case 3: 
	count = 0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(int i = 2; i < n; i++){
	if(n%i == 0){
	count++;
	}
	}
	if(count == 0){
	printf("%d is prime number\n",n);
	}else{
	printf("%d is not a prime number\n",n);
	}
	break;
default: 
	exit(0);
	break;
}
}
 return 0;
}