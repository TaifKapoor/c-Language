#include<stdio.h>

//  fn ko 4 type se declare kr skte h 

////////////////////    1=>   No Argument , No Return          /////////////

// int say(){
//     printf("Hello Taufik kes ho\n");
//     printf("C langusge");
// }

// int main(){
//     say();                                    /// fn ko call krna 

//     return 0 ;
// }









////////////////////     2=>   Argument , No Return          /////////////

// ///   function   Defination //

// void Adesh(char name[]);

//     // Function  Declare
// void Adesh(char name[]){
//     printf("Hello %s\n", name);
// }

// int main(){
//     Adesh("Taufik");            
//     Adesh("Adesh");            
//     Adesh("monu");
                 
//     return 0;
// }





////////////////////   3=>    No Argument ,  Return          /////////////
///// function   Defination////

// int getNumber();

// int getNumber(){
//     return 100*20;
// }

// int main(){
//     int num = getNumber();
//     printf("Number = %d\n", num);


//     return 0;
// }





//////////////////      4=>  Argument ,  Return          /////////////


int add(int a, int b){                          ///     yha a or b Parameter
    int sum = a + b;
    return sum;
}

int main(){
    int reult = add(5, 6);                     ///     yha a or b Arguments
    int reult1 = add(15, 16);
    int reult2 = add(9, 6);
    int reult3 = add(4, 6);
    printf("Result = %d\n", reult);
    printf("Result = %d\n", reult1);
    printf("Result = %d\n", reult2);
    printf("Result = %d\n", reult3);

    return 0 ;
}


int square(int num);

int square(int num){
    return num * num;
}

int main(){
    int n;
    printf("Enter a No. : ");
    scanf("%d", &n);

    int result = square(n);

    printf("Square = %d\n", result);
    return 0;

}

















