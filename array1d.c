#include<stdio.h>
int main() {

  int marks[5],i;

  for ( i = 0; i < 5; i++)
  {
    printf("Please enter the marks of student %d = ", i+1);
    scanf("%d", &marks[i] );
  
  }
  for ( i = 0; i < 5; i++)
  {
    printf("\nMarks of student %d = %d", i+1, marks[i]);
  }
  return 0;
}