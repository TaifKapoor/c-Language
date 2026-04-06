#include <stdio.h>

////////////////////////             Array            ///////////////////

////  Defination =>     Array ek collection hai jisme same type ke multiple values (jaise int, float, char) ko ek hi naam ke saath store kar sakte ho.

//// Without Array:

// int a = 10;
// int b = 20;
// int c = 30;

// With Array:

// int arr[3] = {10, 20, 30};              // Yaha arr ek array hai jisme 3 values store hain.
// float marks[3] = {85.5, 90.0, 78.75};

//   Array me Indexing 0 se start hoti h

// printf("%d", arr[0]);                       // Access krne ka trika Output 10

///   Array Ke Elements Access Karna

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};             

//     printf("Pehla element: %d\n", arr[0]);             // 10
//     printf("dusra element: %d\n", arr[1]);             // 10
//     printf("Teesra element: %d\n", arr[2]);          // 30
//     printf("fourth element: %d\n", arr[3]);          // 30

//     arr[0] = 100;                                     // 4th position pe value change kar di
//     printf("Naya 4th element: %d\n", arr[0]);

//     return 0;
// }



/////////////    Array ko  declare karne ke trike


//  (1) Simple Declaration
// int arr[5];                   /// sirf memory allocate hui, value nahi di

//     (2) Declaration + Initialization
// int arr[5] = {10, 20, 30, 40, 50};

///    (3) Size auto detect
// int arr[] = {10, 20, 30};                   // compiler khud size = 3 le lega

///    (4) Partial Initialization
// int arr[5] = {10, 20};                    // baaki values automatically 0 ho jayengi  Output: 10 20 0 0 0

//     (5) Individual assignment
// int arr[3];                              // size bta do or bad me value dal do

// arr[0] = 10;
// arr[1] = 20;
// arr[2] = 30;


/////       Array Ke Saath Loop

// int main()
// {
//     int arr[3] = {10, 20, 30};

//     for (int i = 0; i < 3; i++){
//         printf("%d ", arr[i]);
//     }
// }




///        Types of Arrays in C

/////  (1) 1D Array (Most common)
// int arr[5];

///     (2) 2D Array (Matrix)
// int arr[2][3] = {
//     {1, 2, 3},
//     {4, 5, 6}
// };

//      (3) Multi-Dimensional Array
// int arr[2][2][2];





// int main() {
//     // 1. Declaration and initialization
//     int marks[5] = {85, 90, 78, 92, 88};
    
//     // 2. Accessing elements
//     printf("First marks: %d\n", marks[0]);               // 85
//     printf("Third marks: %d\n", marks[2]);            // 78
    
//     // 3. Changing value
//     marks[1] = 95;   // second element ab 95 ho gaya
//     printf("Updated second marks: %d\n", marks[1]);
    
//     // 4. Loop se saare elements print karna
//     printf("\nAll marks:\n");
//     for(int i = 0; i < 5; i++) {
//         printf("marks[%d] = %d\n", i, marks[i]);
//     }
    
//     // 5. User se input lena
//     int scores[3];
//     printf("\nEnter 3 scores:\n");
//     for(int i = 0; i < 3; i++) {
//         scanf("%d", &scores[i]);
//     }
    
//     return 0;
// }