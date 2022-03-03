// Exercise 1 - Calculations

 // Write a C program to input marks of two subjects. calculate and 
 // print the average of the two marks

#include<stdio.h>

int main() {
  int mark1, mark2, sum ;
  float average ;

  printf("enter mark of subject 1:");
  scanf("%d",&mark1);

  printf("enter mark of subject 2:");
  scanf("%d",&mark2);

  sum = mark1 + mark2;
  average = sum/2;

  printf("average is:%.1f" ,average);
  return 0;
}

