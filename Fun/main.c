#include <stdio.h>
#include <string.h>


int main(){
    char str1[100] = "Kalipay ";
    char str2[100] = "Kaguol ";
    char str3[100] = "Kasakit ";
    char str4[100] = "Kaduka ";
    char str5[100] = "pero mo uli kay matug ko";

    printf("\nLength of first string: %zu\n", strlen(str1));
    printf("Length of second string: %zu\n", strlen(str2));
    printf("Length of third string: %zu\n", strlen(str3));
    printf("Length of fourth string: %zu\n", strlen(str4));
    printf("Length of fifth string: %zu\n", strlen(str5));

    //Display strings
    printf("\n%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);
    printf("%s\n", str4);
    printf("%s\n", str5);
    
    //Concatenate the two strings using strcat()
    strcat(str1, str2);
    strcat(str1, str3);
    strcat(str1, str4);
    strcat(str1, str5);


    printf("\nConcatenated string: %s\n", str1);
    return 0;
}