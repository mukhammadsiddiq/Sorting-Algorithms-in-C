#include <stdio.h>

void merge_sorted(int a[], int length);
void merge_recursion(int a[], int l, int r);
void merge_sorted_list(int a[], int l, int m, int r);

int main(int argc, char  **argv)
{
    int array[] = {1, 9, 7, 4, 2, 6, 8, 0, 3, 5};
    int length = sizeof(array) / sizeof(array[0]);

    merge_sorted(array, length);

    for (int i = 0; i < length; i++)
        printf("%d ", array[i]);
    return 0;
}

void merge_sorted(int a[], int length)
{
    
}
