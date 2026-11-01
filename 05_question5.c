#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *ptr ;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[3]=45;
    printf("%d \n",ptr[3]);
    
    ptr = (int *)realloc(ptr , 10 * sizeof(int));
    printf("%d \n",ptr[3]);
    
    
    return 0;
}