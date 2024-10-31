#include <stdio.h>
//Bramuel 
//29/10/24
struct Student {
    char name[50];
    int marks;
};

int main() {
    struct Student students[5] = {
        {"Bramuel", 81},
        {"Sifuna", 70},
        {"Simiyu", 79},
        {"Handsome", 90},
        {"Boy", 85}
    };

    FILE *file = fopen("students.bin", "wb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), 5, file);
    fclose(file);

    struct Student read_students[5];
    file = fopen("students.bin", "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(read_students, sizeof(struct Student), 5, file);
    fclose(file);

    printf("Data read from file:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Marks: %d\n", read_students[i].name, read_students[i].marks);
    }

    return 0;
}
