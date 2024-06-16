/* Program 2 : 1-D Array for Sorting*/
#include <stdio.h>  int main( )
{
    int i, j, temp, n, a[10];
    printf(“Enter the Number of Elements :”);
    scanf(“% d”, &n);
    printf(“Enter the Elements to be Sorted\n”);
    for (i = 0; i < n; i++)
    {
        scanf(“% d\n”, &a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                //swap a[i] and a[j] ;
                
                temp = a[i]; // temp = 9
                a[i] = a[j]; // a[i] = 8 , a[j] = 8 
                a[j] = temp; // a[j] = 9 
            
            }
        }
    }
    
    print(“The Sorted Elements are : \n”);
    for (i = 0; i < n; i++)
    {
        printf(“% d\n”, a[i]);
    }
    return 0;
}

// 8 9 7 1 2 4 6 3 0 10 


// a[i] = 9
// a[j] = 8 

// a[i] = a[j] // a[i] ki value change karke a[j] kardo a[i] = 8 ,a[j] = 8
