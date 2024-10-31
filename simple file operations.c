#include <stdio.h>

// Bramuel 
//29/10/24

#include <stdlib.h>

// Function to write a sentence to a file

void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        
        return;
    }

    char sentence[100];
    
    printf("Enter a sentence : ");
    fgets(sentence, sizeof(sentence), stdin);
    

    fprintf(file, "%s", sentence);
    
    fclose(file);
    printf("Sentence written to file successfully.\n");
}

// Function to read and display the content of the file

void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
    
        printf("Error opening file for reading.\n");
        return;
    }

    char ch;
    printf("File content:\n");
    
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

// Function to append a sentence to the file

void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
    
        printf("Error opening file for appending.\n");
        return;
    }

    char sentence[100];
    
    printf("Enter a sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    fprintf(file, "%s", sentence);
    fclose(file);
    
    printf("Sentence appended to file successfully.\n");
}

int main() {
    int choice;
    do {
        printf("\nMenu:\n");
        
        printf("1. Write to file\n");
        
        printf("2. Read from file\n");
        
        printf("3. Append to file\n");
        
        printf("4. Exit\n");
        
        printf("Enter your choice: ");
        
        scanf("%d", &choice);
        
        getchar(); // To consume the newline character left by scanf

        switch (choice) {
            case 1:
                writeToFile();
                break;
            case 2:
                readFromFile();
                break;
            case 3:
                appendToFile();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
