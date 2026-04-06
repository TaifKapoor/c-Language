#include <stdio.h>

////////////////////////      Pointer         ///////////////

///     Memory Address Ka Basic Concept

int main()
{
     int age = 25;

     printf("Variable age ki value: %d\n", age);
     printf("Variable age ka memory address: %p\n", &age); //// & operator se hum kisi bhi variable ka address nikaal sakte hain

     return 0;
}

// int main(){

// ////  Pointer ek variable hota hai jo kisi dusre variable ka address store karta hai
// // Pointer ek aisa variable hai jo value nahi,memory address store karta hai Isliye pointer ko "address holder" bhi bolte hain

// // Normal variable → value store karta hai
// // Pointer → memory address store karta hai
// // & (Address-of operator) → kisi variable ka address lene ke liye
// // * (Dereference / Value-at operator) → address se actual value nikalne ke liye

// ////////////////////////      Pointer ka syntax         ///////////////

// // int *p;                    // p naam ka pointer jo integer type ke variable ka address store karega
// // float *q;                  // q float type ke liye
// // char *ch;                  // ch character ke liye

//     int a = 10;            // Normal variable
//     int *p;               // p ek pointer hai jo int type ke variable ka address store karega
//     p = &a;              // Address operator (&) => Pointer me address store karna

//     printf("Value of a = %d\n", a);
//     printf("Address of a = %p\n", &a);

//     printf("Pointer p stores address = %p\n", p);
//     printf("Value using pointer = %d\n", *p);

//     return 0;
// }

//////////////           Pointer se value change karna           ///////

// int main() {
//     int a = 10;
//     int *p = &a;

//     *p = 50;

//     printf("a = %d", a);

//     return 0;
// }

///////////////////////         Swap two numbers               /////////////////

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main()
// {
//     int x = 10, y = 20;
//     printf("Pehle: x=%d, y=%d\n", x, y);

//     swap(&x, &y);
//     printf("Baad: x=%d, y=%d\n", x, y);                          // x=20, y=10
//     return 0;
// }

// int main(){
// int a = 58 ;
// int *p ;
// p  = &a;

// printf("fdgh fdtgy %d\n ", a);
// printf(" fghfg hfgh %p\n ", &a);

// printf("hgjghyjgyju %p\n ", p);
// printf(" fghgfh %d\n ", *p);
// }

// int main(){
//     int h = 30 ;
//     int *p ;
//     p = &h ;

//     printf(" me yaha integer value print kar raha hu tiniig =>   %d\n", h);
//     printf("  me yaha pointer ka adders print kar raha hu Normal variable =>  %p\n", &h);

//     printf("me yaha p ka addres print kar raha hu pointer se  =>  %p\n", p);
//     printf(" me yaha p se integer value print kar raha hu tiniig =>  %d\n", *p);

//     return 0 ;
// }

// int main(){
//      int a = 47  ;
//      int *p ;
//      p = &a ;

//      *p = 991  ;

//      printf(" a= %d\n ", a) ;

//      return 0 ;
// }
