// // #include<conio.h>
// // #include<stdio.h>
// // #include<windows.h>

// // void main();

// // struct node
// // {
// //     int number;
// //     struct node *next;
// // } *head, *new, *check;
// // void print()
// // {
// //     check = head;
// //     while (check != NULL)
// //     {
// //         printf("|%d| -> ", check->number);
// //         check = check->next;
// //     }
// //     printf("NULL\n");
// //     main();
// // }

// // void hapusBelakang()
// // {
// //     if (head == NULL)
// //     {
// //         printf("Data Kosong\n");
// //     }
// //     else if (head->next == NULL)
// //     {
// //         free(head);
// //         head = NULL;
// //     }
// //     else
// //     {
// //         check = head;
// //         while (check->next->next != NULL)
// //         {
// //             check = check->next;
// //         }
// //         free(check->next);
// //         check->next = NULL;
// //     }
// //     print();
// // }

// // void hapusDepan()
// // {
// //     if (head == NULL)
// //     {
// //         printf("Data Kosong\n");
// //     }
// //     else
// //     {
// //         check = head;
// //         head = head->next;
// //         free(check);
// //     }
// //     print();
// // }

// // void tambahBelakang(int data)
// // {
// //     new = (struct node *)malloc(sizeof(struct node));
// //     new->number = data;
// //     if (head == NULL)
// //     {
// //         head = new;
// //         head->next = NULL;
// //     }
// //     else
// //     {
// //         check = head;
// //         while (check->next != NULL)
// //         {
// //             check = check->next;
// //         }
// //         check->next = new;
// //         new->next = NULL;
// //     }
// //     print();
// // }

// // void tambahDepan(int data)
// // {
// //     new = (struct node *)malloc(sizeof(struct node));
// //     new->number = data;
// //     if (head == NULL)
// //     {
// //         head = new;
// //         head->next = NULL;
// //     }
// //     else
// //     {
// //         new->next = head;
// //         head = new;
// //     }
// //     print();
// // }

// // void tambahIndeks(int data)
// // {
// //     int indeks;
// //     printf("Masukan Indeks : ");
// //     scanf("%d",&indeks);
// //     new = (struct node *)malloc(sizeof(struct node));
// //     new->number=data;
// //     check = head;
// //     if(head == NULL)
// //     {
// //         head= new;
// //         head->next=NULL;
// //     }
// //     else if(indeks == 0)
// //     {
// //         new->next=head;
// //         head = new;
// //     }
// //     else 
// //     {
// //       for(int a=0; a<indeks-1; a++)
// //       {
// //         check = check->next;
// //       }
// //       new->next= check->next;
// //       check->next = new;
// //     }
// //     print();
// // }

// // void tambahvalue(int data)
// // {
// //     int value;
// //     printf("Masukan Value : "); scanf("%d",&value);
// //     new = (struct node *)malloc(sizeof(struct node));
// //     new->number=data;
// //     check = head;
// //     if(check == NULL)
// //     {
// //         head = new;
// //         head->next = NULL;
// //     }
// //     else{
// //         while(check != NULL)
// //         {
// //             if(check->number == value)
// //             {
// //                 new->next=check->next;
// //                 check->next = new;
// //                 // check = check->next;
// //                 new = (struct node *)malloc(sizeof(struct node));
// //                 new->number=data;
// //             }
// //             check = check->next;
// //         }
// //     }
// //     print();
// // }

// // void main()
// // {
// //     int pilih,a, b,c,d;
    
// //     printf("1.Tambah Depan \n2.Tambah Belakang \n3.Hapus Depan \n4.Hapus Belakang \n5.Tambah By Indeks \n6.Tambah By Value \n7.Tambah Tengah\n\n");
// //     printf("Pilih mau yang mana Rifkiiiii : ");
// //     scanf("%d",&pilih);
// //     if(pilih == 1)
// //     {
// //         printf("Masukan Angka : "); scanf("%d",&a);
// //         tambahDepan(a);
// //     }
// //     else if (pilih ==2)
// //     {
// //         printf("Masukan Angka : ");
// //         scanf("%d",&b);
// //         tambahBelakang(b);
// //     }
// //     else if (pilih == 3)
// //     {
// //         hapusDepan();
// //     }
// //     else if (pilih == 4)
// //     {
// //         hapusBelakang();
// //     }
// //     else if (pilih == 5)
// //     {
// //         printf("Masukan Angka : ");
// //         scanf("%d",&c);
// //         tambahIndeks(c);
// //     }
// //     else if (pilih == 6)
// //     {
// //         printf("Masukan Angka : ");
// //         scanf("%d",&d);
// //         tambahvalue(d);
// //     }

// //     getch();
// // }


// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// #include <stdbool.h>

// void print();
// void cetak();
// void tambahDepan();
// void tambahBelakang();
// void tambahTengah();
// void tambahByIndex();
// void tambahByValue();
// void deleteDepan();
// void Delete();
// void deleteBelakang();
// void deleteTengah();
// void deleteByIndex();
// void deleteByValue();
// void tambah();
// void update();
// void update_index();
// void update_value();
// void full();

// int data, value;
// char pilih;

// struct node
// {
//     int number;
//     struct node *next;
// } *head, *new, *check, *buff,*buff1;

// void print()
// {
//     check = head;
//     while (check != NULL)
//     {
//         printf("|%d| -> ", check->number);
//         check = check->next;
//     }
//     printf("NULL\n");
// }

// void cetak()
// {

//     printf("\nMASUKKAN ANGKA:");
//     scanf("%d", &data);
// }

// void tambahDepan()
// {
//     cetak();
//     new = malloc(0);
//     new->number = data;
//     if (head == NULL)
//     {
//         head = new;
//         head->next = NULL;
//     }
//     else
//     {
//         new->next = head;
//         head = new;
//     }
// }

// void tambahBelakang()
// {
//     cetak();
//     new = malloc(0);
//     new->number = data;
//     if (head == NULL)
//     {
//         head = new;
//         head->next = NULL;
//     }
//     else
//     {
//         check = head;
//         while (check->next != NULL)
//         {
//             check = check->next;
//         }
//         check->next = new;
//         new->next = NULL;
//     }
// }
// void tambahTengah()
// {

//     cetak();
//     int tam = 0;
//     new = malloc(0);
//     check = head;
//     new->number = data;
//     while (check != NULL)
//     {
//         tam++;
//         check = check->next;
//     }
//     tam /= 2;
//     check = head;
//     for (int a = 1; a < tam; a++)
//     {
//         check = check->next;
//     }
//     buff = check->next;
//     check->next = new;
//     new->next = buff;
// }

// void tambahByIndex()
// {
//     int indeks;
//     int tamp = 0;
//     cetak();
//     printf("\nMasukan Indeks : ");
//     scanf("%d", &indeks);
//     new = malloc(0);
//     new->number = data;
//     check = head;
//     while (check->next != NULL)
//     {
//         check = check->next;
//         tamp++;
//     }

//     check = head;
//     if (indeks == 0)
//     {
//         new->next = head;
//         head = new;
//     }
//     else if (indeks > tamp)
//     {
//         printf("Indeks Yang Anda Masukan Salah !!!");
//     }

//     else
//     {
//         for (int a = 0; a < indeks - 1; a++)
//         {
//             check = check->next;
//         }
//         buff = check->next;
//         check->next = new;
//         new->next = buff;
//     }
// }
// void tambahByValue()
// {
//     cetak();
//     new = malloc(0);
//     new->number = data;
//     if (head == NULL)
//     {
//         head = new;
//         head->next = NULL;
//     }
//     else
//     {
//         check = head;
//         printf("\nmasukkan value:");
//         scanf("%d", &value);
//         while (check != NULL)
//         {
//             if (check->number == value)
//             {
//                 buff = check->next;
//                 check->next = new;
//                 new->next = buff;
//             }
//             check = check->next;
//         }
//     }
// }

// void deleteDepan()
// {
//     check = head;
//     if (head == NULL)
//     {
//         printf("\nData Kosong\n");
//         getch();
//     }
//     else
//     {
//         check = head;
//         head = head->next;
//         // free(check);
//     }
// }

// void deleteBelakang()
// {
//     check = head;
//     if (head == NULL)
//     {
//         printf("\nData Kosong\n");
//         getch();
//     }
//     else
//     {
//         check = head;
//         if (head->next == NULL)
//         {
//             head = NULL;
//         }
//         else
//         {
//             while (check->next->next != NULL)
//             {
//                 check = check->next;
//             }
//             check->next = NULL;
//         }
//     }
// }

// void deleteTengah()
// {

//     check = head;
//     if (head == NULL)
//     {
//         printf("\nData Kosong\n");
//         getch();
//     }
//     else
//     {
//         check = head;
//         if (head->next == NULL)
//         {
//             head = NULL;
//         }
//         else
//         {
//             check = head;
//             int tam = 0;
//             while (check != NULL)
//             {

//                 check = check->next;
//                 tam++;
//             }
//             tam /= 2;
//             check = head;
//             for (int a = 1; a < tam; a++)
//             {
//                 check = check->next;
//             }
//             buff = check->next->next;
//             // free(check->next);
//             check->next = buff;
//         }
//     }
// }

// void deleteByIndex()
// {
//     int index;
//     check = head;
//     if (head == NULL)
//     {
//         printf("\nData Kosong\n");
//         getch();
//     }
//     else
//     {
//         printf("\nmasukan index: ");
//         scanf("%d", &index);
//         if (head->next == NULL)
//         {
//             head = NULL;
//         }
//         else
//         {
//             check = head;
//             for (int a = 1; a < index; a++)
//             {
//                 check = check->next;
//             }
//             buff = check->next->next;
//             //  free(tam->next);
//             check->next = buff;
//         }
//     }
// }

//     //untuk index
//     // tam2=tam->next->next;
//     // tam->next=tam2
//     // tam2->preve=tam

// void deleteByValue()
// {
//     int tam;
//     if (head == NULL)
//     {
//         printf("Data Kosong\n");
//     }
//     else if(head->next == NULL)
//     {
//         // free(head);
//         head = NULL;
//     }
//     else
//     {
//        tam = 0;
//         printf("\tInput Value :");
//         scanf("%d", &value);
//         check = head;
//         buff = head;
//         if (check->number == value)
//         {
//             check = head;
//             head = head->next;
//             // free(check);
//         }
        
//         check = head;

//         while (check->number != value)
//         {
//            tam++;
//             check = check->next;
//         }
//         check = head;
//         for (int b = 0; b <tam - 1; b++)
//         {
//             check = check->next;
//         }
//         buff = check->next->next;
//         // free(check->next);
//         check->next = buff;
//     }
// }

// void update(){
//     int pil;
//     printf("================================================================\n");
//     printf("=====================>>LINKED LIST<<============================\n");
//     printf("================================================================\n");
//     print();
//     printf("=================================================================\n");
//     printf("\n1.update by index\n2.update by value\n3.full\n");
//     printf("masukkan pilihan:");scanf("%d",&pil);
//     if(pil==1)
//     {
//         update_index();
//         print();
//     }
//     else if(pil==2)
//     {
//          update_value();
//          print();
//     }
//     else if(pil==3) {
//         full();
//     }

// }

// void full()
// {
//     int max=-999,min=999,rata,jumlah=0,tam=0;
//     print();
//     check=head;
//     while(check!=NULL)
//     {
//         if(check->number>max)
//         {
//             max=check->number;
//         }

//         if(check->number<min)
//         {
//             min=check->number;
//         }

//         jumlah+=check->number;
//         tam++;
//         check=check->next;
//     }
//     rata=jumlah/tam;
//     printf("max:%d\n",max);
//     printf("min:%d\n",min);
//     printf("jumlah:%d\n",jumlah);
//     printf("rata2:%d",rata);
//     getch();
// }

// void update_index(){
//     int ind,cek1;
//     printf("index:"); scanf("%d",&ind);
//     cetak();
//     check=head;
//     cek1=0;
//     while(check!=NULL)
//     {
//         if(cek1==ind)
//         {
//             check->number=data;
//         }cek1++;
//         check=check->next;
//     }

//  }

// // void update_index(int index)
// // {

// //     int tam=0;
// //     check=head;
// //     while(check->next!=NULL)
// //     {
// //         check=check->next;
// //         tam++;
// //     }

// //     if(head==NULL)
// //     {
// //         printf("data masih kosong\n");
// //     }
// //     else if(tam < index)
// //     {
// //         printf("index tidak ditemukan\n");
// //     }
// //     else{
// //         check=head;
// //         for(int a=0; a<tam-1; a++)
// //         {
// //             check=check->next;
// //         }
// //         check->number=data;
// //     }
// // }

// void update_value()
// {
//     printf("\nvalue:"); scanf("%d",&value);
//     cetak();
//     check=head;
//     while(check!=NULL)
//     {
//         if(check->number==value)
//         {
//             check->number=data;
//         }check=check->next;
//     }
// }
// // void update_value()
// // {
    
// //     int tam=0;
// //     check=head;
// //     while(check->next!=NULL)
// //     {
// //          tam++;
// //         check=check->next;
       
// //     }

// //     if(head==NULL)
// //     {
// //         printf("data masih kosong\n");
// //     }
// //     else if(tam == 0)
// //     {
// //         printf("value tidak ditemukan\n");
// //     }
// //     else{
// //         check=head;
// //         while(check->next != NULL)
// //         {
// //             if(check->number==value)
// //             {
// //                 check->number=data;
// //             }
// //             check=check->next;
// //         }
// //     }
// // }





// void main()
// {

//     printf("================================================================\n");
//     printf("=====================>>LINKED LIST<<============================\n");
//     printf("================================================================\n");
//     print();
//     printf("=================================================================\n");
//     printf("1.tambah\n2.hapus\n3.update\n4.cek\n");
//     printf("=================================================================");
//     printf("\nMASUKKAN PILIH:");
//     do
//     {
//         pilih = getch();
//         if (pilih == '1')
//         {
//             system("cls");
//             tambah();
//         }
//         else if (pilih == '2')
//         {
//             system("cls");
//             Delete();
//         }
//         else if(pilih == '3')
//         {
//             system("cls");
//             update();
//         }
//         else if (pilih == '4')
//         {
//             system("cls");
//             full();
//         }
//     } while (pilih != 4);

//     getch();
// }


// void tambah()
// {
//     printf("================================================================\n");
//     printf("=====================>>LINKED LIST TAMBAH<<=====================\n");
//     printf("================================================================\n");
//     print();
//     printf("================================================================\n");
//     printf("1.Tambah depan\n2.Tambah belakang\n3.Tambah tengah\n4.Tambah index\n5.tambah value\n6.keluar\n");
//     printf("================================================================\n");
//     printf("MASUKKAN PILIH:");
//     pilih = getche();
//     switch (pilih)
//     {
//     case '1':
//         tambahDepan();
//         break;
//     case '2':
//         tambahBelakang();
//         break;
//     case '3':
//         tambahTengah();
//         break;
//     case '4':
//         tambahByIndex();
//         break;
//     case '5':
//         tambahByValue();
//         break;
//     case'6':
//     system("cls");
//     main();
//     }
//     system("cls");
//     main();
// }
// void Delete()
// {
//     system("cls");
//     printf("=============================================================\n");
//     printf("=====================>>LINKED LIST TAMBAH<<==================\n");
//     printf("=============================================================\n");
//     print();
//     printf("===============================================================\n");
//     printf("1.Delete depan\n2.Delete belakang\n3.Delete tengah\n4.Delete index\n5.delete value\n6.keluar\n");
//     printf("=============================================================\n");
//     printf("\nMASUKKAN PILIH:");
//     pilih = getche();
//     switch (pilih)
//     {
//     case '1':
//         deleteDepan();
//         break;
//     case '2':
//         deleteBelakang();
//         break;
//     case '3':
//         deleteTengah();
//         break;
//     case '4':
//         deleteByIndex();
//         break;
//     case '5':
//         deleteByValue();
//         break;
//     case '6':
//         system("cls");
//         main();
//     }
//     system("cls");
//     main();
// }




// ////////////////////   STACK   ////////////////////////



// #include <conio.h>
// #include <stdio.h>
// #include <windows.h>

// void main();

// struct stuck
// {
//     int number;
//     struct stuck *next;
// }*head,*new,*check;

// void tampil()
// {
//     check = head;
//     while (check != NULL)
//     {
//         printf("%d -> ",check->number);
//         check = check->next;
//     }
//     printf("NULL\n");
//     main();
// }

// void push(int bilangan)
// {
//     new = malloc(0);
//     new->number = bilangan;
//     if(head == NULL)
//     {
//         head = new;
//         head->next = NULL;
//     } 
//     else{
//         new->next = head;
//         head = new;
//     }
//     printf("Data Berhasil Diisi\n\n");
//      tampil();
// }

// void pop()
// {
//     if(head == NULL)
//     {
//         printf("Data Kosong");
//     }
//     else{
//         head = head->next;
//         printf("Data Berhasil Dimasukan");
//     }
   
// }


// void main()
// {
//     int data,pilih;
//     printf("Pilihan : ");
//     printf("\n1. Push\n2. Pop\n");
//     printf("\nPilih :"); scanf("%d",&pilih);
    
//     if(pilih == 1)
//     {
//     printf("\nMasukan Data : "); scanf("%d",&data);
//     push(data);
//     }
//     else if(pilih == 2)
//     {
//         pop();
//     }

//     getch();
// }



//////////////   QUEUE   ///////////////////
#include <stdio.h>
#include <conio.h>
#define max 10
#include <windows.h>

void main();

int queue[max];
int posisi = -1;

int isFull();
int isEmpty();

void push(int data){
    if(isFull() == 1 ){
        system("cls");
        printf("PENUH \n");
    }else{
        system("cls");
        posisi++;
        queue[posisi]=data;
        printf("ANGKA %d TELAH DIMASUKKAN \n\n", queue[posisi]);
    }
    main();
}

void pop(){
    if(isEmpty() == 1){
        system("cls");
        printf("queue KOSONG \n");
    }else{
        system("cls");
        printf("ANGKA %d DIHAPUS \n", queue[posisi]);
        posisi--;
    }
    main();
}

// Isfull nyambung ke PUSH indeknya > 0 && < 10
int isFull(){
    if(posisi == max - 1){
        return 1;
    }else{
        return 0;
    }

}

// IsEmpty nyambung ke POP indeksnnya <0
int isEmpty(){
    if (posisi == -1){
        return 1;
    }else{
        return 0;
    }
}

void dequeue()
{
    if(isEmpty() == 1)
    {
        printf("Qoueue Kosong");
    }
    else{
        printf("Data terambil : %d",queue[0]);
        for(int a = 0; a<posisi; a++)
        {
            queue[a] = queue[a+1];
        }
    }posisi--;
}

void tampil(){
   for(int a=0; a<=posisi; a++)
   {
    printf("%d",queue[a]);
   }
    main();
}

void clear(){
    posisi = -1;
    system("cls");
    printf("STACK HAS BEEN CLEARED\n");
    main();
}

void main(){
    int input,batas,pilih = 0;
    while (pilih != 4)
    {
    
        printf("Pilihan : ");
        printf("\n1. Push\n2. Pop\n3. Tampil\n4. Clear\n5. Keluar\nPilih : ");
        scanf("%d",&pilih);
        if (pilih == 1)
        {
            printf("INPUT DATA : "); scanf("%d", &input);
            push(input);    
        }
        else if (pilih == 2)
        {
            pop();
        }
        else if (pilih == 3)
        {
            tampil(); 
        }else if (pilih == 4)
        {
            clear();
        }
    }
    getch();
}
