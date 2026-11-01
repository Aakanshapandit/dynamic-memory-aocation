#include <stdio.h>

int main() {
    int n ;
    int *ptr;
    scanf("%d",&n);//here n is the eements in array
    ptr = (int*)malloc(n * sizeof(int));//size of operator te how much size is taen by the operator
    return 0;//after mutipying the number of eements in the array with the size of operator give the tota number of size
}