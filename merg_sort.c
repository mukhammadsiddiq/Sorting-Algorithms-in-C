#include <stdio.h>

// prototypes for functions
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
    merge_recursion(a, 0, length - 1);
}

void merge_recursion(int a[], int l, int r)
{
    if (l < r) // in order not make a recursion infinite
    {
        int mid = l + (r - l ) / 2;

        merge_recursion(a, l, mid);
        merge_recursion(a, mid + 1, r);
        merge_sorted_list(a, l, mid, r);
    }
}

void merge_sorted_list(int a[], int l, int m, int r)
{
    int left_length = m - l + 1; // find a length of the left array
    int right_length = r - m; // find a length of the right array

    int temp_left[left_length];
    int temp_right[right_length];

    int i, j, k;

    for (int i = 0; i < left_length; i++)
        temp_left[i] = a[l + i];
    
    for (int i = 0; i < right_length; i++)
        temp_right[i] = a[m + 1 + i];

    for (i = 0, j = 0, k = l; k <= r; k++)
    {
        if ((i < left_length) &&
            ((j >= right_length) || (temp_left[i] <= temp_right[j])))
        {
            a[k] = temp_left[i];
            i++;
        }
        else
        {
            a[k] = temp_right[j]; // copying from temp_right
            j++;
        }
        
    }
}
