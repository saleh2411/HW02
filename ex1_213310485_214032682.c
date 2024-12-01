#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// SECTION A: Recursive Palindrome Check
int is_palindrome_recursive(char* str, int start, int end) {
    // TODO: Implement the logic for recursive palindrome check
    if(!(start < end)){
        return 1;
    }
    if (/* condition */)
    {
        if (/* condition */)
        {
            /* code */
        }
        else
        {
            /* code */
        }
        
        
    }
    else if (/* condition */)
    {
        /* code */
    }
    
    
       
}  

// SECTION B: Iterative Palindrome Check
int is_palindrome_iterative(char* str) {
    int start=0,end= strlen(str) - 1;
    while (start<end) {
        while (start<end && !isalpha((unsigned char)str[start])) {
            start++;
        }
        while (start<end && !isalpha((unsigned char)str[end])) {
            end--;
        }
        if (tolower((unsigned char)str[start]) != tolower((unsigned char)str[end])) {
            return 1;
        }
        start++;
        end--;
    }
    return 0;
}

// Driver Program
int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    printf("\nResults:\n");
    printf("Recursive Palindrome Check: %s\n", is_palindrome_recursive(str, 0, strlen(str) - 1) ? "Palindrome" : "Not a Palindrome");
    printf("Iterative Palindrome Check: %s\n", is_palindrome_iterative(str) ? "Palindrome" : "Not a Palindrome");

    return 0;
}
