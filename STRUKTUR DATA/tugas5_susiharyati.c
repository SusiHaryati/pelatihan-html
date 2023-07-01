
//////////////////////  MERUBAH KE STRING  ////////////////////
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

char data [100];


void tambah();
void tambahDepan();
void tambahBelakang();
void tambahTengah();
void tambahByindex();
void hapus();
void hapusDepan();
void hapusBelakang();
void update();
void updatebyindex();
void updateByValue();
void view();
void input();
void main();

struct node
{
    char nama [100];
    struct node *next;
} *head, *new, *check, *buffer;

void tambahDepan()
{
    input();
        new = malloc(0);
        strcpy(new -> nama , data);
        if (head == NULL)
        {
            head = new;
            new->next = NULL;
        }
        else
        {
            new->next = head;
            head = new;
        }
}
void tambahBelakang()
{
    input();
    new = malloc(0);
    strcpy(new -> nama , data);
    if (head == NULL)
    {
        head = new;
        new->next = NULL;
    }
    else
    {
        check = head;
        while (check->next != NULL)
        {
            check = check->next;
        }
        check->next = new;
        new->next = NULL;
    }
}
void tambahTengah()
{
    input();
    int buff = 0;
    new = malloc(0);
    check = head;
    strcpy(new -> nama , data);
    while (check != NULL)
    {
        buff++;
        check = check->next;
    }
    buff /= 2;
    check = head;
    for (int a = 1; a < buff; a++)
    {
        check = check->next;
    }
    buffer = check->next;
    check->next = new;
    new->next = buffer;
}
void tambahByindex()
{
    int index;
    int buff = 0;
    input();
    printf("\nMasukan index : ");
    scanf("%d", &index);
    new = malloc(0);
    strcpy(new -> nama , data);
    check = head;
    while (check->next != NULL)
    {
        check = check->next;
        buff++;
    }
    check = head;
    if (index == 0)
    {
        new->next = head;
        head = new;
    }
    else if (index > buff)
    {
        printf("index Yang Anda Masukan Salah !!!");
        tambahByindex();
    }
    else
    {
        for (int a = 0; a < index - 1; a++)
        {
            check = check->next;
        }
        buffer = check->next;
        check->next = new;
        new->next = buffer;
    }
}
void tambah()
{
    int pilih;
    printf("\n1.TAMBAH DEPAN\n2.TAMBAH TENGAH\n3.TAMBAH BELAKANG\n4.TAMBAH BY INDEX\n5.BACK");
    printf ("\nMasukkan pilihan : "); 
    pilih=getche();
    switch(pilih)
    {
        case '1':
        tambahDepan();
        view();
        break;
        case '2':
        tambahTengah();
        view();
        break;
        case '3':
        tambahBelakang();
        view();
        break;
        case '4':
        tambahByindex();
        view();
        break;
        case '5':
        tambah();
        default:
        Sleep(500);
        printf("\nINPUTAN INVALID");
        main();
        view();
        getch();
    }
}
void hapus()
{
    int pilih;

    printf("\n1.HAPUS DEPAN\n2.HAPUS BELAKANG\n3.BACK");
    printf ("\nMasukkan pilihan : "); 
    pilih=getche();
    switch(pilih)
    {
        case '1':
        hapusDepan();
        view();
        break;
        case '2':
        hapusBelakang();
        view();
        break;
        case '3':
        hapus();
        default:
        Sleep(500);
        printf("\nINPUTAN INVALID");
        main();
        view();
        getch();
    }
}
void hapusDepan()
{
    if (head == NULL)
    {
        printf("Data Kosong");
    }
    else
    {
        buffer = head;
        head = head->next;
        free(buffer);
    }
}
void hapusBelakang()
{
    
    if (head == NULL)
    {
        printf("Data Kosong\n");
    }
    else if (head->next == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        check = head;
        while (check->next->next != NULL)
        {
            check = check->next;
        }
        free(check->next);
        check->next = NULL;
    }
}
void update()
{
   int pilih;

    printf("\n1.UPDATE BY VALUE\n2.UPDATE BY INDEX\n3.BACK");
    printf ("\nMasukkan pilihan : "); 
    pilih=getche();
    switch(pilih)
    {
        case '1':
        updateByValue();
        view();
        break;
        case '2':
        updatebyindex();
        view();
        break;
        case '3':
        update();
        default:
        Sleep(500);
        printf("\nINPUTAN INVALID");
        main();
        view();
        getch(); 
    }
}
void updatebyindex()
{
    input();
    int index = 0 ;
    int lenght = 0 ;
    
    printf("\nMasukkan index : ");
    scanf("%d",&index);
    check = head;
    while(check -> next != NULL)
    {
        lenght++;
        check = check -> next;
    }
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if(lenght < index)
    {
        printf("index tidak ditemukan");
        updatebyindex();
    }
    else {
        check = head ;
        for(int i = 0 ; i < index ; i++)
        {
            check = check -> next;
        }
        strcpy(check -> nama, data);
    }

}

void updateByValue(){
    char value[100];

    input();
    getchar();
    printf("Value Nama : "); gets(value); getchar();
    check = head;
    while(check!=NULL){
        if(strcmp(check -> nama,value)==0)
        {
            strcpy(check -> nama,data);
        }
        check = check -> next;
    }

}
void view()
{
    printf("\n");

    for (check = head; check != NULL; check = check->next)
    {
        printf("|%s|->", check->nama);
    }
    printf("NULL\n");
    getch();
    main();
}
void input()
{
    printf("\nmasukkan nama : "); gets (data);
}
void main()
{
    int pilih;

    system("cls");
    printf("1.TAMBAH\n2.HAPUS\n3.UPDATE\n4.EXIT\n");
    printf("\nMASUKKAN PILIHAN : ");
    pilih=getche();
    switch(pilih)
    {
        case '1':
        tambah();
        break;
        case '2':
        hapus();
        break;
        case '3':
        update();
        break;
        case '4':
        exit(0);
        break;
        default:
        Sleep(500);
        printf("\nINPUTAN INVALID");
        main();
        view();
        getch();
    }

}

///////////////  QUEUE  ///////////////////

// #include <conio.h>
// #include <stdio.h>
// #define max 10
// #include <stdlib.h>

// void main();
// void tampil();

// int queue[max];
// int posisi = -1;

// int isEmpty(){
//     if (posisi == -1){
//         return 1;
//     }else{
//         return 0;
//     }
// }

// int isFull(){
//     if(posisi == max - 1){
//         return 1;
//     }else{
//         return 0;
//     }

// }

// void enqueue(int data){
//     if(isFull() == 1 ){
//         system("cls");
//         printf("QUEUE SUDAH PENUH \n");
//     }else{
//         system("cls");
//         posisi++;
//         queue[posisi]=data;
//         printf("ANGKA %d TELAH DIMASUKKAN \n\n", queue[posisi]);
//     }
//     tampil();
//     main();
// }

// void dequeue()
// {
//     if(isEmpty() == 1)
//     {
//         printf("Qoueue Kosong");
//     }
//     else{
//         printf("Data terambil : %d\n",queue[0]);
//         for(int a = 0; a<posisi; a++)
//         {
//             queue[a] = queue[a+1];
//         }
//     }posisi--;
//     tampil();
//     main();
// }

// void tampil()
// {

//     if(isEmpty() == 1){
//         system("cls");
//         printf("DATA TIDAK BISA DITAMPILKAN/KOSONG\n");
//     }else{
//         system("cls");
//         printf("\n\n");
//         for(int a=posisi; a>=0; a--){
//             printf("|%d|\n", queue[a]);
//         }printf("\n");
//     }

//     main();
// }

// void main()
// {
//     int pilih,angka;
//     printf("\nPilihan :");
//     printf("\n1. Enqueue\n2. Dequeue\n3. Keluar\nPILIH : ");
//     scanf("%d",&pilih);

//     if(pilih == 1)
//     {
//         printf("Masukan Data : ");
//         scanf("%d",&angka);
//         enqueue(angka);
//     }
//     else if(pilih == 2)
//     {
//         dequeue();
//     }
//     else if (pilih == 3)
//     {
//         exit(0);
//     }
    
//     getch();
// }