#include<stdio.h>

int main()
{
   // int a[] = {4,6,8,3};
    int *p = (int []) {4, 3, 5, 1, 8};

//    p = &a[0];

    printf("%d\n", ++*p);
    printf("%d\n", *p);

    return (0);
}
