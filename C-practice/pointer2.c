#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sum = 0, i=0;
  for(int i = 0; i < number_of_students;)
  {
      if(gender == 'b'){
        sum = sum + marks[i];
      }
      if(gender == 'g'){
        if (i == 0)
            i = 1; 
        sum = sum + marks[i];  
      }
      i+=2;
  }
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    // number_of_students = 3;
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
  
    scanf(" %c", &gender);
 //   gender = 'b';
    sum = marks_summation(marks, number_of_students, gender);
    printf("\n%d\n", sum);
    free(marks);
 
    return 0;
}