/* Author: Nishan Ghimire 
Roll no : 210316(BE/D)
Question

/* WAP to input a string and count number of vowels, comma, semicolon,digits, space and consonants in it.*/
#include<stdio.h>
int main()
{
int i,vowels=0,comma=0,semicolon=0,digits=0,consonants=0,space=0;
char name[100];
printf("Enter the string.\n");
gets(name);
for(i=0;name[i]!='\0';i++)
{
//for counting vowels
if(name[i]=='a'||name[i]=='A'||
name[i]=='e'||name[i]=='E'||
name[i]=='i'||name[i]=='I'||
name[i]=='o'||name[i]=='O'||
name[i]=='u'||name[i]=='U')
vowels++;
else if(name[i]==',')
comma++;
else if(name[i]==';')
semicolon++;
else if(name[i]==' ')
space++;
else if(name[i]>='0'&&name[i]<='9')
digits++;
else
consonants++;
}
printf("Vowel: %d\n",vowels);
printf("Comma:%d\n",comma);
printf("semicolon: %d\n",semicolon);
printf("space:%d\n",space);
printf("digits: %d\n",digits);
printf("Consonants:%d\n",consonants);
return 0;
}