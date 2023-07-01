#include <stdio.h>
#include <conio.h>


void bubbleSortAscending(int data[], int n)
{
    for (int x = 0; x < n - 1; x++)
    {
        for (int y = 0; y < n - 1; y++)
        {
            if (data[y] > data[y + 1])
            {
                int tamp = data[y];
                data[y] = data[y + 1];
                data[y + 1] = tamp;
            }
        }
    }
}
void selectionShortDesc(int data[], int n)
{
    int min;
    for (int x = 0; x < n - 1; x++)
    {
        min = x;
        for (int y = x + 1; y < n; y++)
        {
            if (data[y] > data[min])
            {
                min = y;
            }
        }
        int buff = data[x];
        data[x] = data[min];
        data[min] = buff;
    }
}

void view(int arr[], int n)
{
    for (int x = 0; x < n; x++)
    {
        printf("%d ", arr[x]);
    }
}

void  main()
{
    int angka_1 = 0, angka_2 = 0, angka_3 = 0, input;
    int data_1[10], data_2[10], data_3[10];
    for (int a = 0; a < 10; a++)
    {
        printf("Input ke %d :", a + 1);
        scanf("%d", &input);
        if (input <= 0)
        {
            data_3[angka_3] = input;
            angka_3++;
        }
        else if (input % 3 == 0)
        {
            data_1[angka_1] = input;
            angka_1++;
        }
        else
        {
            data_2[angka_2] = input;
            angka_2++;
        }
    }
    printf("\n\nBUBBLE SORT ASCENDING");
    printf("\nsebelum Sorting : ");
    view(data_1, angka_1);
    printf("\nSetelah Sorting : ");
    bubbleSortAscending(data_1, angka_1);
    view(data_1, angka_1);  
    printf("\nn\n\nSELECTION SORT DESCENDING");
    printf("\nsebelum Sorting : ");
    view(data_2, angka_2);
    printf("\nsesudah Sorting : ");
    selectionShortDesc(data_2, angka_2);
    view(data_2, angka_2);
    printf("\n\nUNORMAL INPUT :");
    view(data_3, angka_3);

    getch();
}