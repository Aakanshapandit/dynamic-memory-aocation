#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6 ;
    int * ptr ;
    ptr = (int*) malloc(n*sizeof(int));
    ptr[0]=45;
    ptr[1]=30;
    ptr[2]=34;
    ptr[3]=28;
    ptr[4]=91;
    printf("%d \n",ptr[0]);
    printf("%d \n",ptr[1]);

    
    return 0;
}
    
   