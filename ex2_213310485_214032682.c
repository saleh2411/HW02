#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// SECTION A: Recursive Subsequences Generation
void generate_subsequences(char* str, char* current, int index) {
    // TODO: Implement the recursive logic for generating subsequences
    
    // Base case: If we've reached the end of the string
    if (str[index] == '\0') {
        printf("\"%s\"\n", current); // Print the current subsequence
        return;
    }

    // Exclude the current character and move to the next
    generate_subsequences(str, current, index + 1);

    // Include the current character and move to the next
    int length = strlen(current);    // Current length of the 'current' string
    current[length] = str[index];   // Add the current character
    current[length + 1] = '\0';     // Null-terminate the string


    generate_subsequences(str, current, index + 1);

    // Backtrack: Remove the last added character
    current[length] = '\0';

    
}

// Driver Program
int main() {
    char str[100];
    char current[100] = "";

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Subsequences:\n");
    generate_subsequences(str, current, 0);

    return 0;
}
