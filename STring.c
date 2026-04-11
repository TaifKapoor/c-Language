#include<stdio.h>
#include<string.h>


// /////////////////////    String       ///////////

// //  Defination => C language mein String ek character array hota hai. Matlab, characters (jaise 'A', 'B', '1', etc.) ko ek saath line mein rakh kar store karte hain.

// //  Note : Har string ke end mein ek special character hota hai – '\0' (null character). Isko null terminator kehte hain. Ye batata hai ki string yahin khatam ho gaya hai



// int main(){
//     char str[] = "Hello";

//     //////////   Str ko declare krne ke trike         /////////

//      (1) Character Array (Manual)
//     char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};        // sab manually likhna padta hai


//      (2) String Literal (Most common)
//     char str[] = "Hello";                        // compiler khud \0 add kar deta hai


//      (3) Fixed Size + String
//     char str[10] = "Hello";                           //  extra space empty rahega


//     (4) Pointer se String
//     char *str = "Hello";
//       Note : ye read-only hota hai (modify nahi kar sakte safely)





// }





// int main() {

//     // Different tarike se string declare karna
//     char str1[6] = {'H', 'e', 'l','\0', 'l', 'o'};  // Method 1     ////  \0 => ye string ko wahi rok deta hai
//     char str2[] = "World";                            // Method 2 (common)
//     char *str3 = "C Programming";                     // Method 3 (pointer)
    
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);
//     printf("str3: %s\n", str3);

//     printf("str1: %c\n", str1[1]);
//     printf("str2: %c\n", str2[2]);          ///////// %s lihkne per puri string print hoti hai or 
//     printf("str3: %c\n", str3[0]);          ///////// %c lihkne per only ek element print hota hai
    
//     // Access individual characters
//     printf("First character of str1: %c\n", str1[0]);
//     printf("Third character of str2: %c\n", str2[2]);
    
//     // Modify character (only if array, not pointer literal)
//     str1[0] = 'h';   // Allowed
//     printf("After modification str1: %s\n", str1);
    
//     str3[0] = 'c';                          // ERROR! String literal pointer se change nahi kar sakte
   
    
//     return 0;
// }



// strcpy  full form "string copy"  yh ek str ko dusri str me copy krta h 

// syntax 
// strcpy(destination, source)  
// source => jha se copy krna h , destination => jha paste krna h 

int main(){
    char str1[10] = "hello";
    char str2[10];

    strcpy(str2, str1);
    printf("%s", str2);
}


