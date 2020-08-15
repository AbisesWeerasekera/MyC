#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.

  if(gender != 'b'){
      int sum=0,i;
      for(i=1;i<number_of_students;i++){
sum = sum + *(marks+i);
 i = i+1;
      }
      return sum;
  }else{
      int sum=0,j;
      for(j=0;j<number_of_students;j++){
          sum=sum + *(marks+j);
          j=j+1;
      }
      return sum;
  }
}

int main() {
    int number_of_students;
    char gender;
    int sum,student;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
