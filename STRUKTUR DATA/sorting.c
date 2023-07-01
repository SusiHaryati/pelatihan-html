#include<conio.h>
#include<stdio.h>

void bubbleascan(int data[],int n)
{
    int tamp;
    for(int a=0; a<n-1; a++)
    {
        for(int b=0; b<n-1-a; b++)
        {
            if(data[b]>data[b+1])
            {
                tamp = data[b];
                data[b]=data[b+1];
                data[b+1]= tamp;
            }
        }
    }
}


void selectionascan(int data[],int n)
{
    int min=0,tamp;
    for(int a=0; a<n-1; a++)
    {
        min = a;
        for(int b=a+1; b<n; b++)
        {
            if(data[b] < data[min])
            {
                min = b;
            }
        }
        tamp = data[a];
        data[a] = data[min];
        data[min] = tamp;
    }
}

void selectiondescan(int data[], int n)
{
    int tamp,min=0;
    for(int a = 0; a<n-1; a++)
    {
        min = a;
        for(int b= a+1; b<n; b++)
        {
            if(data[b] > data[min])
            {
                min = b;
            }
        }
        tamp = data[a];
        data[a] = data[min];
        data[min] = tamp;
    }
}

void insertionascan(int data[], int n)
{
    int tamp,b;
    for(int a=1; a<=n-1; a++)
    {
        tamp = data[a];
        b = a-1;
        while(b >= 0 && data[b] > tamp)
        {
            data[b+1] = data[b];
            b--;
        }
        data[b+1] = tamp;
    }
}

void heapascan(int data[],int n)
{
    
}

void cetak(int arr[], int n){
    for(int a=0; a<n; a++)
    {
        printf(" %d ",arr[a]);
    }
    printf("\n");
}

void main()
{
    int angka[6]; //[6] = {1,-1,0,2,-2,3}; [6] = {5,4,3,2,3,4};
    int n = 6,pilih;
    int input;

    for(int a=0; a<n;)
    {
        printf("Masukan Angka : "); scanf("%d",&input);
        angka[a] = input;
        a++;
    }

    printf("\nSebelum Sort : ");
    cetak(angka,n);
    printf("1. Bubble Ascanding\n2. Bubble Descanding\n3. Selection Ascanding\n4. Selection Descanding\n5. Insertion Ascanding\n");
    printf("\nPilih : "); scanf("%d",&pilih);
    printf("Sesudah Sort : ");
    if(pilih == 1)
    {
        bubbleascan(angka,n);
        cetak(angka,n);
    }
    else if(pilih == 2){
        // bubledescan(angka,n);
        cetak(angka,n);
    }
    else if(pilih == 3){
        selectionascan(angka,n);
        cetak(angka,n);
    }
    else if(pilih == 4){
        selectiondescan(angka,n);
        cetak(angka,n);
    }
    else if(pilih == 5)
    {
        insertionascan(angka,n);
        cetak(angka,n);
    }

    main();
    getch();
}




//  void insertionasc(int data[],int n){
//     int tamp,b;
//     for(int a=1; a<n-1; a++)
//     {
//         tamp= data[a];
//         b = a-1;
//         while(b>=0 && data[b] > tamp)
//         {
//             data[b+1] = data[b];
//             b--;
//         }
//         data[b+1] = tamp;
//     }
//  }