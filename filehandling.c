// #include <stdio.h>

// int main() {
//     FILE *fp;
    
//     // Step 1: File open karo (write mode)
//     fp = fopen("student.txt", "w");
    
//     // Step 2: Check file open hua ya nahi
//     if(fp == NULL) {
//         printf("File open nahi ho paaya!\n");
//         return 1;
//     }
    
//     // Step 3: File mein likho
//     fprintf(fp, "Name: Rahul\n");
//     fprintf(fp, "Age: 20\n");
//     fprintf(fp, "Marks: 85.5\n");
    
//     // Step 4: File close karo
//     fclose(fp);
    
//     printf("File successfully likhi gayi!\n");
    
//     return 0;
// }



#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int age;
    float marks;
    
    // File open karo (read mode)
    fp = fopen("student.txt", "r");
    
    if(fp == NULL) {
        printf("File exist nahi karti!\n");
        return 1;
    }
    
    // File se padho
    fscanf(fp, "Name: %s", name);
    fscanf(fp, "Age: %d", &age);
    fscanf(fp, "Marks: %f", &marks);
    
    // Print karo
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
    
    fclose(fp);
    
    return 0;
}