#include <stdio.h>

main()
{
    int array[100], n, i, sum = 0;
    int  average;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements of the array : "); 
    for(i=0; i<n; ++i)
    {
        scanf("%d", &array[i]);
        sum =sum+array[i];
    }
    average =sum/n;
    printf("Average = %d", average);
    
}
