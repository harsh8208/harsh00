#include<stdio.h>
int main(){

  int marks[2][2];

  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      
         printf("Enter the marks of Student: %d, Subject: %d:", row+1, col+1);
      scanf("%d", &marks[row][col]);
      
      
    }
    
  }

  for (int row = 0; row < 2; row++)
  {
    for (int col = 0; col < 2; col++)
    {
      
         printf("\nMarks of Student %d, Subject: %d: %d", row+1, col+1, marks[row][col]);
        
    }
    
  }
  return 0;
}