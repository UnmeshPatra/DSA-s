#include <stdio.h>

void createArray(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &array[i]);
    }
}

void insertElement(int array[], int *size, int element, int position)
{
    if (position < 0 || position > *size)
    {
        printf("Invalid position.\n");
        return;
    }

    for (int i = *size; i > position; i--)
    {
        array[i] = array[i - 1];
    }

    array[position] = element;
    (*size)++;
    printf("Element inserted successfully.\n");
}

void deleteElement(int array[], int *size, int position)
{
    if (position < 0 || position >= *size)
    {
        printf("Invalid position.\n");
        return;
    }

    int deletedElement = array[position];
    for (int i = position; i < *size - 1; i++)
    {
        array[i] = array[i + 1];
    }

    (*size)--;
    printf("Element %d deleted successfully.\n", deletedElement);
}

int linearSearch(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void traverseArray(int array[], int size)
{
    printf("Array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    createArray(arr, n);
    int size = n;

    while (1)
    {
        printf("\nMenu:\n");
        printf("a. Insert an element\n");
        printf("b. Delete an element\n");
        printf("c. Linear search\n");
        printf("d. Traverse the array\n");
        printf("e. Exit\n");

        char choice;
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == 'a')
        {
            int element, position;
            printf("Enter the element to insert: ");
            scanf("%d", &element);
            printf("Enter the position to insert at: ");
            scanf("%d", &position);
            insertElement(arr, &size, element, position);
        }
        else if (choice == 'b')
        {
            int position;
            printf("Enter the position to delete from: ");
            scanf("%d", &position);
            deleteElement(arr, &size, position);
        }
        else if (choice == 'c')
        {
            int target;
            printf("Enter the element to search: ");
            scanf("%d", &target);
            int index = linearSearch(arr, size, target);
            if (index != -1)
            {
                printf("Element found at index %d.\n", index);
            }
            else
            {
                printf("Element not found.\n");
            }
        }
        else if (choice == 'd')
        {
            traverseArray(arr, size);
        }
        else if (choice == 'e')
        {
            printf("Exiting the program.\n");
            
            break;
        }
        else
        {
            printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}
