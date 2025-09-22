#include <stdio.h>
#include <string.h>


int main(){
    char str1[100];
    char str2[100];

    //Ask the user to enter two strings (str1 and str2)
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    //Display the length of each string using (strlen)
    printf("\nLength of first string: %zu\n", strlen(str1));
    printf("Length of second string: %zu\n", strlen(str2));

    //Compare the two strings using (strcmp) and display whether they are equal or not
    if(strcmp(str1, str2) == 0) {
        printf("\nThe strings are equal.\n");
    } else {
        printf("\nThe strings are NOT equal.\n");
    }

    //Copy the first string into a new string using strcpy()
    char str3[100];
    strcpy(str3, str1);
    printf("Copied string: %s\n\n", str3);

    //Concatenate the two strings using strcat()
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    return 0;
}