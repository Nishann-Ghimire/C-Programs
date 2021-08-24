/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
*/
# include<stdio.h>
# include<math.h>
 int main(){
//Declaring variable and taking inputs
    int sum,num,a;
    for (int i = 2; i < 500; i++)
    {
        a = i;
        sum = 0;
        while(a > 0){ //true
            num = a%10;
           
            sum += pow(num,3);
            if(sum == i){
                printf("%d\n",sum);
            }
            // printf("%d\n",sum);
             a = a/10;
        }
    }
    
 //main code  
 return 0; 
 }