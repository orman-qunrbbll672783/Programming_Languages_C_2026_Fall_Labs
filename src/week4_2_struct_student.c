
/*
 * week4_2_struct_student.c
 * Author: Orman Gurbanli
 * Student ID: 251ADB255
 * Description: Defines and prints two student records.
 */

#include <stdio.h>
#include <string.h>

struct Student {
  char name[50];
  int id;
  float grade;
};

int main(void) {
  struct Student student1 = {"Alice Johnson", 1001, 9.1f};
  struct Student student2 = {"Bob Smith", 1002, 8.7f};

  printf("Student 1: %s, ID: %d, Grade: %.1f\n", student1.name, student1.id,
         student1.grade);

  printf("Student 2: %s, ID: %d, Grade: %.1f\n", student2.name, student2.id,
         student2.grade);

  return 0;
}
