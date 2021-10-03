/* Question
Reverse the number
 */
int reverse(int n){
    int rem;
    int rev = 0;
    while (n)
    {
        rem = n%10;
        rev = rev*10 + rem;
        n /= 10;
    }
    return rev;

}
#include<stdio.h>
int main(){
    int t; //Test case
    int n[t];
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    scanf("%d",&n[i]);

    for (int j = 0; j < t; j++)
    {
        printf("%d\n",reverse(n[j]));
    }
  
}