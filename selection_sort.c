#include <stdio.h>

int main (void)
{
    int  a[] = { 0, 1, 2, 3, 9, 10, 11, 6, 4, 5, 7, 8};
    int length = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < length - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < length; j++)
        {
            if (a[j] < a[min_pos]) min_pos = j;
        }
        if (min_pos != i)
        {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
    }
    for (int i = 0; i < length; i++)
        printf("%d ", a[i]);

}