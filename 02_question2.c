#include <stdio.h>
#include <stdlib.h>
int main() {
    int n ;
    int *ptr ;
    printf("enter n ;\n ");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    ptr[0]=30;
    ptr[4]=45;
    printf("%d \n",ptr[0]);
    printf("%d \n",ptr[4]);

    return 0;
}