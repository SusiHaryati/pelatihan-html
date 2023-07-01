// #include <conio.h>
// #include <stdio.h>

// void bubbleascan(int data[],int n)
// {
//     int tamp;
//     for(int a=0; a<n-1; a++)
//     {
//         for(int b=0; b<n-1-a; b++)
//         {
//             if(data[b] > data[b+1])
//             {
//                 tamp = data[b];
//                 data[b] = data[b+1];
//                 data[b+1] = tamp;
//             }
//         }
//     }

// }

// void cetak(int data[],int n)
// {
//     printf("Hasil : ");
//     for(int a=0; a<n; a++)
//     {
//         if(data[a] % )
//         {
//             printf(" %d",data[a]);
//         }
//     }
// }

// void main()
// {
//     int jumlah,data;

//     printf("Jumlah Data : "); scanf("%d",&jumlah);
//     int angka[jumlah];

//     for(int a=0; a< jumlah;)
//     {
//         printf("Data %d : ",a+1); scanf("%d",&data);
//         angka[a] = data;
//         a++;
//     }

//     printf("Sebelum : ");
//     for(int b=0; b<jumlah; b++)
//     {
//         printf(" %d ",angka[b]);
//     }

//     bubbleascan(angka,jumlah);
//     cetak(angka,jumlah);

//     getch();
// }

#include <conio.h>
#include <stdio.h>

void bubbleascan(int data[],int n)
{
    int tamp;
    for(int a=0; a<n-1; a++)
    {
        for(int b=0; b<n-1-a; b++)
        {
            if(data[b] > data[b+1])
            {
                tamp = data[b];
                data[b] = data[b+1];
                data[b+1] = tamp;
            }
        }
    }

}


void cetak (int data[],int n)
{
    printf("Hasil : ");
    for(int a=0; a<n; a++)
    {
        if(data[a] % 2 == 0 )
        {
            printf(" %d",data[a]);
        }
    }
}

void main()
{
    int jumlah,data;
    printf("Jumlah data : ");
    scanf("%d",&jumlah);
    int angka[jumlah];

    for(int a=0; a<jumlah; a++)
    {
        printf("Data %d : ",a+1); 
        scanf("%d",&data);
        angka[a] = data;
    }

    printf("Sebelum : ");
    for(int b=0; b<jumlah; b++)
    {
        printf(" %d",angka[b]);
    }

    bubbleascan(angka,jumlah);
    cetak(angka,jumlah);



    getch();
}