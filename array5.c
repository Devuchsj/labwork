#include <stdio.h>
main()
{
    int arr1= 5, arr2= 5, arr_size, i, j;
    int a[5] = { 1, 2, 3, 4, 5 };
    int b[5] = { 6, 7, 8, 9, 10 };
    arr_size = arr1 + arr2;
    int c[arr_size];
    for (i = 0; i < arr1; i++) {
        c[i] = a[i];
    }
    for (i = 0;i < arr2; i++) 
    {
         for(j=arr1;j<arr_size;j++)
        {
            c[j] = b[i];
        }
    }
 
    // After Merging
    for (i = 0; i < arr_size; i++) {
        printf("%d ", c[i]);
    }
}
