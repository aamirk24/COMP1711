#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    char name[100];
    char student_id[11];
    unsigned mark;
};

int main(){
    char marks[3];
    struct student new_student;
    strcpy(new_student.name, "Name Surname");
    strcpy(new_student.student_id, "13902178");
    printf("Enter Marks for Student: ");
    scanf("%s",marks);
    new_student.mark=atoi(marks);
    printf("Student Name: %s\n",new_student.name);
    printf("Student ID: %s\n",new_student.student_id);
    printf("Final Marks: %u\n",new_student.mark);
    return 0;
}

