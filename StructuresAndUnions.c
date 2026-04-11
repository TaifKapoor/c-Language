#include <stdio.h>
#include <string.h>

///////////                 Structures & Unions                  ///////////

// Structure => Structure (struct) ek aisa user-defined data type hai jisme hum different data types ko ek hi group me store kar sakte hain

// Har member ka separate memory location hota hai

//  difference between Array & Structure
// Normal array → same type ke multiple values
// Structure → different types ke multiple values (jaise ek student ka naam, age, marks)

/////////////////////            Structure ka syntax              ///////////////


// struct Student{
//     int roll;
//     char name[20];
//     float marks;
// };
// Note : Ye sirf structure ka blueprint hai (memory abhi allocate nahi hui)

int main(){
    struct Student s1;        // Ab memory allocate ho gayi

    // Structure me value assign karna
    // Method 1: Dot operator se

    s1.roll = 101;
    strcpy(s1.name, "Nitesh");
    s1.marks = 85.5;

    // Method 2: Initialization ke time

    struct Student s1 = {101, "Nitesh", 85.5};

    printf("%d\n", s1.roll);
    printf("%s\n", s1.name);
    printf("%.2f\n", s1.marks);

    return 0;
}

////////////////////      Union  ////////////

// Union  => Union bhi structure ki tarah hota hai, lekin uske saare members same memory location share karte hain. Ek time par sirf ek member active ho sakta hai.

// union Data{
//     int i;
//     float f;
// };

// int main(){
//     union Data d;

//     d.i = 10;
//     printf("%d\n", d.i);

//     d.f = 5.5;
//     printf("%.2f\n", d.f);

//     return 0;
// }

// //     Structure vs Union Memory Difference
//   typedef struct {
//     int id;           // 4 bytes
//     char grade;       // 4 bytes
//     float marks;      // 4 bytes
// } StudentStruct;

// typedef union {
//     int id;
//     char grade;
//     float marks;
// } StudentUnion;

// int main() {
//     StudentStruct s;
//     StudentUnion u;

//     printf("Size of Structure: %lu bytes\n", sizeof(s));            // Typically 12 (with padding) %lu => unsigned long integer
//     printf("Size of Union: %lu bytes\n", sizeof(u));                   // 4 bytes (largest: float)

//     // Note : %lu ek placeholder (khali jagah) hai. Matlab printf ko batana ki yahan par koi number daalna hai.
//     // l = long (bada number)
//     // u = unsigned (positive number only, negative nahi)

//     // Structure mein saare members access kar sakte hain
//     s.id = 101;
//     s.grade = 'A';
//     s.marks = 85.5;
//     printf("Structure: id=%d, grade=%c, marks=%.1f\n", s.id, s.grade, s.marks);

//     // Union mein ek time par ek hi
//     u.id = 101;
//     printf("Union id: %d\n", u.id);
//     u.marks = 85.5;
//     printf("Union marks: %.1f (id corrupted: %d)\n", u.marks, u.id);

//     return 0;
// }