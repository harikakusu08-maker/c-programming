
#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, found = 0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements in sorted order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    p = a;
    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(*(p + mid) == key)
        {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(*(p + mid) < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
