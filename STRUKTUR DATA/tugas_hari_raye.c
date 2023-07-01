// //////////////// DAY 1 ///////////////

// #include <conio.h>
// #include <stdio.h>

// void bubbleascan(int data[],int n)
// {
//     int tamp;
//     for(int a=0; a<n-1; a++)
//     {
//         for(int b=0; b<n-1-a; b++)
//         {
//             if(data[b]>data[b+1])
//             {
//                 tamp = data[b];
//                 data[b]=data[b+1];
//                 data[b+1]= tamp;
//             }
//         }
//     }
// }

// void selectiondescan(int data[],int n)
// {
//     int tamp,min;
//     for(int a=0; a<n-1; a++)
//     {
//         min = a;
//         for(int b = a+1; b<n; b++){
//             if(data[b] > data[min])
//             {
//                 min=b;
//             }
//         }
//         tamp = data[a];
//         data[a] = data[min];
//         data[min] = tamp;
//     }
// }

// void view(int data[],int n)
// {
//     for(int a=0; a<n; a++)
//     {
//         printf("%d ",data[a]);
//     }
// }

// void main()
// {
//     int angka=0,angka2=0,angka3=0;
//     int data[10],data2[10],data3[10],input;

//     for(int a = 0; a < 10; a++)
//     {
//         printf("Input ke %d : ",a+1);
//         scanf("%d",&input);
//         if(input <= 0)
//         {
//             data3[angka3] = input;
//             angka3++;
//         }
//        else if(input % 3 == 0)
//        {
//             data2[angka2] = input;
//             angka2++;
//        }
//        else{
//             data[angka] = input;
//             angka++;
//        }
//     }

//         printf("\n\n BUBBLE SORT ASCANDING ");
//         printf("\n SEBELUM SORTING : ");
//         view(data,angka);
//         printf("\nSESUDAH SORTING : ");
//         bubbleascan(data,angka);
//         view(data, angka);  
//         printf("\n\n SELECTION SORT DESCANDING : ");
//         printf("\n SEBELUM SORTING : ");
//         view(data2,angka2);
//         printf("\nSESUDAH SORTING : ");
//         selectiondescan(data2,angka2);
//         view(data2,angka2);
//         printf("\n\nINPUTAN UNORMAL : ");
//         view(data3,angka3);


//     getch();
// }

///////////// DAY 2 ////////////////

// #include<conio.h>
// #include<stdio.h>

// void heapify(int arr[], int n, int i) {
//     int largest = i;
//     int left = 2*i + 1;
//     int right = 2*i + 2;

//     if (left < n && arr[left] > arr[largest])
//         largest = left;

//     if (right < n && arr[right] > arr[largest])
//         largest = right;

//     if (largest != i) {
//         int temp = arr[i];
//         arr[i] = arr[largest];
//         arr[largest] = temp;
//         heapify(arr, n, largest);
//     }
// }

// void heap_sort(int arr[], int n) {
    
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);


//     for (int i = n - 1; i >= 0; i--) {
//         int temp = arr[0];
//         arr[0] = arr[i];
//         arr[i] = temp;

//         heapify(arr, i, 0);
//     }
// }

// void insertiondescan(int data[],int n)
// {
//     int tamp,b;

//     for(int a = 1; a <n-1; a++)
//     {
//         tamp = data[a];
//         b = a-1;
//         while(b >= 0 && data[b] < tamp)
//         {
//             data[b+1] = data[b];
//             b--;
//         }
//         data[b+1] = tamp;
//     }
// }

// void view(int data[],int n)
// {
//     for(int a=0; a<n; a++)
//     {
//         printf("%d ",data[a]);
//     }
// }

// void main()
// {
//     int angka[] = {7, 10, 11, 8, 6, 17, 5, 4, 2, 3, 1};
//     int n = sizeof(angka) / sizeof(angka[0]);
    
//     printf("Sebelum Diurutkan : \n");
//     view(angka,n);

//     printf("\n\nDiurutkan Dengan Insertion Sort Descanding : \n");
//     insertiondescan(angka,n);
//     view(angka,n);

//     printf("\n\nDiurutkan Dengan Heap Sort Ascanding: \n");
//     heap_sort(angka, n);
//     view(angka,n);


//     getch();
// }



////// NO 2
// #include<conio.h>
// #include<stdio.h>

// void view(int data[], int n)
// {
//     for(int a = 0; a<n; a++)
//     {
//         printf("%d ",data[a]);
//     }
// }

// void insertionascan(int data[],int n)
// {
//     int tamp,b;

//         for(int a=1; a<=n-1; a++)
//         {
//             tamp = data[a];
//             b = a-1;
//             while(b >= 0 && data[b] > tamp)
//             {
//                 data[b+1] = data[b];
//                 b--;
//             }
//             data[b+1] = tamp;
//             printf("\nProses Pengurutan : ");
//             view(data,n);
//         }
    
// }

// void main()
// {
//     int data[5];
//     int n=5,input;

//     printf(">>> INSERTION SORT ASCANDING <<<\n\n");
//     for(int a=0; a<n;)
//     {
//         printf("Masukan angka ke - %d : ",a+1); 
//         scanf("%d",&input);
//         data[a] = input;
//         a++;
//     }

//     printf("\n>>> HASIL PENGURUTAN <<< ");
//     printf("\n\nSebelum diurutkan : ");
//     view(data,n);
//     printf("\n");
//     insertionascan(data,n);

//     printf("\n\nSetelah diurutkan : ");
//     view(data,n);

//     getch();
// }


/////////////////////// DAY 3 ///////////////////

#include<conio.h>
#include<stdio.h>

int a[50];

void merge(int low,int mid,int up){
    int h,i,j,k;
    int b[50];
    h = low;
    i = low;
    j = mid+1;  

    while((h <= mid) && (j<=up))
    {
        if(a[h] < a[j]){
            b[i] = a[h];
            h++;
        }
        else{
            b[i] = a[j];
            j++;
        }
        i++;
        
    }

    if(h > mid)
    {
        for(k=h; k<=up; k++)
        {
            b[i] = a[k];
            i++;
        }
    }
    else{
        for(k=h; k<=mid; k++)
        {
            b[i] = a[k];
            i++;
        }
            
    }

    for(k=low; k<=up; k++)
    {
        a[k] = b[k];
    }

    

}

void merge_sort(int low, int up)
{
    int mid;
    if(low < up)
    {
        mid = (low+up)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,up);
        merge(low,mid,up);
        
    }
    printf("\nProses Sorting : ");
        for(int i=0; i<up; i++)
        {
            printf("%d ",a[i+1]);
        }
    
}

void main()
{
    int jumlah;
    printf("Masukan Jumlah  : "); 
    scanf("%d",&jumlah);

    for(int i=0; i<jumlah; i++)
    {
        printf("Bilangan ke %d : ",i+1); 
        scanf("%d",&a[i+1]);
    }

    printf("Data array : \n");
    for(int i=0; i<jumlah; i++)
    {
        printf("%d ",a[i+1]);
    }

    merge_sort(1,jumlah);

    printf("\nData Sesudah diSorting : ");
    for(int i=0; i<jumlah; i++)
    {
        printf("%d ",a[i+1]);
    }


    getch();
}