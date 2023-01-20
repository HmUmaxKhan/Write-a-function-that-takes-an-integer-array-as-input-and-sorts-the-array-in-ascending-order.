#include <stdio.h>

void asscending_order(int num, int arr[num]) // It is the function which is called.
{
    int temp;

    printf("Enter the integers : ");

    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]); // It takes the integers
    }

    for (int i = 0; i < num; i++) // It stores the array in asscending order.
    {
        for (int j = 0; j < num; j++)
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }

    printf("The ascending order is : \n");

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]); // It shows the assecending order array.
    }
}

int main() // It is calling function.
{
    int num;
    printf("Enter the number of integers you want to enter : ");
    scanf("%d", &num); // It takes the length of array.
    int arr[num];

    asscending_order(num, arr);
    return 0;
}
