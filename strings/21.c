/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question
Sort the name using slection sort
*/
#include <stdio.h>
#include <string.h>
int main()
{

  // Defining variables and array
  char names[5][10] = {
      "Nishan",
      "Ram",
      "Hari",
      "Anish",
      "pratik"
      };
  char temp[10];

  int a, i, j, n = 5;
  int minValindex;



printf("Given String : \n");
  for (i = 0; i < 5; i++)
  {
    printf("%s\n", names[i]);
  }


// Converting all first letter to lowercase 
  for (j = 0; j < 5; j++)
     strlwr(names[j]);   
  

  for (a = 0; a < n; a++)
  {
    // sorting algorithm
    minValindex = a; //for tracking min value position
    for (j = a + 1; j < n; j++)
    {
      if (names[j][0] < names[minValindex][0])
      {
        minValindex = j;
      }
    }

// swapping 
      strcpy(temp,names[a]);
       strcpy(names[a],names[minValindex]);
       strcpy(names[minValindex],temp);

 
  // Capitalize first letter of every names
  for (j = 0; j < 5; j++)
  {
    if (names[j][0] <= 'z' && names[j][0] >= 'a')
      names[j][0] = names[j][0] - 32;
  }

  printf("\n\nSorted List : ");
  for (i = 0; i < 5; i++)
  {
    printf("\n%s", names[i]);
  }

  return 0;
}