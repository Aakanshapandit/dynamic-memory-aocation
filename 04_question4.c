#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 6 ;
    int *ptr ;
    int i ;
    ptr = (int *)calloc(n , sizeof(int));
    
    for( i = 0 ; i < n ; i++ ){
        scanf("%d \n",&ptr[i]);

    }
    for( i = 0 ; i < n ; i++ ){
        printf("%d\n",ptr[i]);

    }
    
    return 0;
}