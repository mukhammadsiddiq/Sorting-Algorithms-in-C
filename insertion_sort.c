#include <stdio.h>

void insertion(int *a, int length);

int main()
{
    int array[] = {0,4,3,7,9,5,1,2,6,8};
    int length = sizeof(array) / sizeof(array[0]);

    insertion(array, length);

    for (int i = 0; i < length; i++)
        printf("%d", array[i]);
    return 0;
}

void insertion(int *a, int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j > 0 && a[j] > key) // will go inside of the while loop only if the value j is greater than key
        {
            a[j + 1] = a[j]; // will swap value of the j with the value of the j + 1 
            j = j - 1 ; // will move index of the j 1 time back
        }
        a[j + 1] = key; 
    }

}