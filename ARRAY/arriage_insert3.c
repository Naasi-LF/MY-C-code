#include <stdio.h>

#define N 10

// Inserts the element at the end of the array in the correct position
// to maintain the array in sorted order.
void insert(int a[])
{
    int protect = a[N];

    if (a[N] < a[0])
    {
        // Shift all elements to the right by one position
        for (int i = N; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        // Insert the element in the first position
        a[0] = protect;
    }
    else if (a[N] > a[N - 1])
    {
        // The element is already in the correct position, do nothing
        return;
    }
    else
    {
        // Find the correct position to insert the element
        for (int i = N - 1; i >= 0; i--)
        {
            if (a[N] < a[i])
            {
                // Shift all elements to the right by one position
                for (int j = N; j > i; j--)
                {
                    a[j] = a[j - 1];
                }

                // Insert the element in the correct position
                a[i + 1] = protect;
                break;
            }
        }
    }
}

int main()
{
    int a[N + 1] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    scanf("%d", &a[N]);
    insert(a);

    for (int i = 0; i <= N; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
