#include <stdio.h>

int main(int argc, char **argv)
{
    int item[] = {1, 4, 6, 3, 2 ,  1, 1, 3, 7, 8, 9};
    int length = sizeof(item) / sizeof(item[0]);

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
        {
            if (item[j] > item[j + 1])
            {
                int temp = item[j];
                item[j] = item[j + 1];
                item[j + 1] = temp;
            }

        }
    }
    for (int i = 0; i < length; i++)
    {
        printf("%d", item[i]);
    }
}