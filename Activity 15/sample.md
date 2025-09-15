/*create a structure by using the struct keyword and declare each of its memebers inside curly braces
its basically a container

to access we use a dot operator
struct student {
    char name[6];
    int age;
    float grade;
};

struct student {
    char *name;
    int age;
    float grade;
};

int main () {
    struct student A;
    strcpy(A.name, "Nathalie");
    A.age = 20;
    A.grade = 85.5;

    printf("Name: %s\n", A.name);
    printf("Age: %d\n", A.age);
    printf("Grade: %.2f\n", A.grade);
    return 0;
}
*/