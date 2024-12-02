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
    //legal char
    if ( isalpha((unsigned char)str[start]) && isalpha((unsigned char)str[end]) )
    {
        if (tolower((unsigned char)str[start]) == tolower((unsigned char)str[end])) {//keep going
            return 1 * is_palindrome_recursive(str,  start+1,  end-1 );
        }
        else {//exit
            return 0;
        }
        
    }
    else if (!isalpha((unsigned char)str[start])) // start = " "
    {
        return is_palindrome_recursive(str,  start+1,  end );
    }
    // end = " "
    return is_palindrome_recursive(str,  start,  end-1 );
       
}  

// SECTION B: Iterative Palindrome Check
int is_palindrome_iterative(char* str) {
    int start=0,end= strlen(str) - 1;
    if (str == NULL || strlen(str) == 0) {
        return 0;
    }
    while (start<end) {
        while (start<end && !isalpha(str[start])) {
            start++;
        }
        while (start<end && !isalpha(str[end])) {
            end--;
        }
        if (tolower(str[start]) != tolower(str[end])) {
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




