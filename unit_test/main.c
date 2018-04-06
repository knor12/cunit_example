#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int main(int argc , char * argv[]){
    
    //using uiAdd() in production code
    uint32_t a, b , c;
    a=0xFF00FF00 ; 
    b=0x00FF00FF ;
    c= uiAdd(a,b);
    printf("a=0x%X, b=0x%X , (a+b)=0x%X \n" , a,b,c);
    
    //using ulAdd() in production code
    uint64_t A, B , C;
    A=0xFF00FF00FF00FF00 ; 
    B=0x00FF00FF00FF00FF ;
    C= ulAdd(A,B);
    printf("A=0x%lX, B=0x%lX , (A+B)=0x%lX \n" , A,B,C);  

    return 0;
}
