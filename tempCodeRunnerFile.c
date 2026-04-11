#include<stdio.h>
#include<string.h>


struct boy{

    int marks ;
    char alpha[23];
    float percent ;
};


int main(){


    struct boy b1 = {73,"abcde",39.032};

    printf("int value =>%d\n", b1.marks);
    printf("float value =>%f\n", b1.percent);
    printf("char value =>%s\n", b1.alpha);

    return 0 ;
}