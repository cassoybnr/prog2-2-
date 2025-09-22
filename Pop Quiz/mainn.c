#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isDuplicate(char **prefixes, int count, const char *prefix) {
// Function to check if a prefix already exists in the results
for (int i = 0; i < count; i++) {
        if (strcmp(prefixes[i], prefix) == 0) {
            return 1; // Exists
        }
    }
    return 0; // Does not exist
}

char **findCommonPrefixes(char **list1, int n1, char **list2, int n2, int *resultCount) {
    // Function to find unique common prefixes of length >= 3
    int maxPrefixes = n1 * n2;
    char **prefixes = malloc(maxPrefixes * sizeof(char *));
    *resultCount = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            int k = 0;
            // find length of common prefix
            while (list1[i][k] && list2[j][k] && list1[i][k] == list2[j][k]) {
                k++;
            }
            if (k >= 3) {
                // temp store the prefix
                char tempPrefix[101];
                strncpy(tempPrefix, list1[i], k);
                tempPrefix[k] = '\0';
                if (!isDuplicate(prefixes, *resultCount, tempPrefix)) {
                    prefixes[*resultCount] = malloc((k + 1) * sizeof(char));
                    strcpy(prefixes[*resultCount], tempPrefix);
                    (*resultCount)++;
                }
            }
        }
    }
    return prefixes;
}


int main() {
int n1, n2;
printf("Enter number of words in List 1: ");
scanf("%d", &n1);

char **list1 = malloc(n1 * sizeof(char *));
for (int i = 0; i < n1; i++) {
list1[i] = malloc(100 * sizeof(char));
printf("Enter word %d for List 1: ", i + 1);
scanf("%s", list1[i]);
}

printf("Enter number of words in List 2: ");
scanf("%d", &n2);

char **list2 = malloc(n2 * sizeof(char *));
for (int i = 0; i < n2; i++) {
    list2[i] = malloc(100 * sizeof(char));
    printf("Enter word %d for List 2: ", i + 1);
    scanf("%s", list2[i]);
}


// Dynamic array for List 2

int resultCount;
char **commonPrefixes = findCommonPrefixes(list1, n1, list2, n2, &resultCount);

if (resultCount == 0) {
printf("No common prefixes of length >= 3 found.\n");
} else {
printf("Common prefixes found:\n");
for (int i = 0; i < resultCount; i++) {
printf("%s\n", commonPrefixes[i]);
free(commonPrefixes[i]);
}
}

free(commonPrefixes);

for (int i = 0; i < n1; i++) free(list1[i]);
for (int i = 0; i < n2; i++) free(list2[i]);
free(list1);
free(list2);

return 0;
}


