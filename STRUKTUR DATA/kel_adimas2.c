#include<conio.h>
#include<stdio.h>
#include<windows.h>

void bubbleascending(int data[],int n)
{
    int tamp;
    for(int a=0; a<n-1; a++)
    {
        for(int b = 0; b<n-1-a; b++){
            if(data[b] > data[b+1]){
                tamp = data[b];
                data[b] = data[b+1];
                data[b+1] = tamp;
            }
        }
    }
}

void bubbledesc(int data[],int n)
{
    int tamp;
    for(int a=0; a<n-1; a++)
    {
        for(int b = 0; b<n-1-a; b++){
            if(data[b] < data[b+1]){
                tamp = data[b];
                data[b] = data[b+1];
                data[b+1] = tamp;
            }
        }
    }
}

void insertionasc(int data[],int n)
{
    
}

void cetak(int arr[], int n)
{
    for(int a=0; a < n; a++)
    {
        printf(" %d ",arr[a]);
    }
    printf("\n");
}

void main()
{
    // int angka[5] = { 14,33,27,20,9};
    // int n = 5;  // sizeof(angka)/sizeof(angka[0]); Kalo ukuran indeks nya tidak diketahui
    int angka[5],input;
    int n = 5;

    for(int a=0; a<n;)
    {
        printf("Masukan data : "); scanf("%d",&input);
        if(input % 3 ==0 && input % 5 == 0)
        {
            angka[a] = input;
            a++;
        }
        else{
            printf("\nInputan Salah");
            main();
        }
    }
    printf("\nSebelum Sort : ");
    cetak(angka,n);

    printf("\nSesudah sort bubble ascanding : ");
    bubbleascending(angka,n);
    cetak(angka,n);

    printf("\nSesudah sort bubble descanding : ");
    bubbledesc(angka,n);
    cetak(angka,n);

    getch();
}