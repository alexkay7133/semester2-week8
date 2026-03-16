/**
 * Implementation of a student record management system using structures
 * 
 * This program demonstrates the use of structures in C to manage student data
 * including personal information and module marks.
 */

#include <stdio.h>
#include <string.h>

#include "student_record.h"

/**
 * Calculate the average mark for a student
 * 
 * param student The student whose average mark is to be calculated
 * return float The average mark
 */
float calculate_average(Student student) {
    float sum = 0;
    for (int i = 0; i < NUM_MODULES; i++) {
        sum += student.marks[i] / NUM_MODULES;
    }
    
    return sum;
}

/**
 * Display student information including name, ID, marks, and average
 * 
 * student The student whose information is to be displayed
 */
void display_student(Student student) {
    // TODO: Implement this function to display student information
    // Format: Name, ID, individual marks, and average mark
    printf("Name = %s\n", student.name);
    printf("ID = %d\n", student.id);
    printf("Individual marks = %.1f, %.1f, %.1f\n", student.marks[0], student.marks[1], student.marks[2]);
    printf("Average mark = %.2f\n", calculate_average(student));
}

/*
 * main
 */
int main( void ) {
    Student student = {
        .name = "John Smith",
        .id =  12345,
        .marks =  {75.0, 68.5, 81.0}
    };

    
    // TODO: display the student data and average mark
    display_student(student);
    
    return 0;
}