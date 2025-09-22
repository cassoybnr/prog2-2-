#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

int main(){
    struct Student students[5] = {
        {"Alice", 20, 85.5},
        {"Bob", 21, 72.3},
        {"Alice", 22, 91.0},
        {"Charlie", 19, 66.8},
        {"Alice", 23, 78.9}
    };

    char searchName[50];
    int found = 0;
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    printf("Students with the name '%s':\n", searchName);
    for (int i = 0; i < 5; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Name: %s | Age: %d | Grade: %.2f\n",
                   students[i].name, students[i].age, students[i].grade);
                   found++;
        }
    }

    if (found == 0) {
        printf("Student not found.\n");
    }

 
    return 0;
}