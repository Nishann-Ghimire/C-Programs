/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
WAP a simple 2D Array for storing roll no and marks of three subject of each subject
*/
# include<stdio.h>
 int main(){
   int marks[4][3];
   for (int i = 0; i < 4; i++)
   {
           printf("For roll no : %d Enter marks in science : ",i+1);
           scanf("%d",&marks[i][0]);
           printf("For roll no : %d Enter marks in Maths : ",i+1);
           scanf("%d",&marks[i][1]);
           printf("For roll no : %d Enter marks in Computer : ",i+1);
           scanf("%d",&marks[i][2]);
      
   }
   
   for (int j = 0; j < 4; j++)
   {
        printf("\nFor roll no : %d Enter marks in science : %d\n",j+1,marks[j][0]);
        printf("For roll no : %d Enter marks in Maths : %d\n",j+1,marks[j][1]);
        printf("For roll no : %d Enter marks in Computer : %d\n",j+1,marks[j][2]);
   }
   
 return 0; 
 }