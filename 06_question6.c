#include <stdio.h>//whenever we are doing string operations we need to use this header fie
#include <stdlib.h>

int main() {
    
    int *ptr ;
    ptr = (int *)malloc(10 *sizeof(int));
    for(int i = 0 ; i < 10 ; i++){
        printf("5 X %d = %d \n",i+1,5*(i+1));
    } 
    
    printf("\n");

    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for(int i = 0 ; i < 15 ; i++){
        printf("7 X %d = %d \n",i+1,7*(i+1));
    } 
    return 0;
}
    
   