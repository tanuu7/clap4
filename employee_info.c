#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int rollno;
  float salary;
} person1;

int main() {

  // assign value to name of person1
  strcpy(person1.name, "Tanu chauhan");

  // assign values to other person1 variables
  person1.rollno = 1984;
  person1. salary = 2500;

  // print struct variables
  printf("Name: %s\n", person1.name);
  printf("Roll no.: %d\n", person1.rollno);
  printf("Salary: %.2f", person1.salary);

  return 0;
}
