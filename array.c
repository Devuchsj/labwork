#include<stdio.h>

 main()
{
    int array[100], n, i;

    printf("Enter number of elements in array\n");
    scanf("%d",&n);

    printf("Enter %d elements\n", n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("The elements in the array are: \n");
    for (i=0; i<n; i++)
    {
        printf("%d\n", array[i]);
    }
   
}
