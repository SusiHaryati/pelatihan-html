#include <stdio.h>
#include <conio.h>
#include <windows.h>


// // struct node{
// // int angka;
// // struct node *next;
// // // Rekursif merupakan function yang memanggil function itu sendiri jadi sama aja untuk struct
// // };
// // struct node *x,*y,*z; /*Pendeklarasian variabel pointer bertipe node*/


// // void tampil(){
// // struct node *bantu;
// // bantu=x;
// // while(bantu!=NULL){
// // printf("|%d|-->",bantu->angka);
// // bantu=bantu->next;
// // }
// // printf("NULL\n");
// // }


// // void awal(int a, int b, int c){
// // x=(struct node*)malloc(sizeof(struct node)); //Boleh buat kayk gini x = malloc(0);
// // y=(struct node*)malloc(sizeof(struct node));
// // z=(struct node*)malloc(sizeof(struct node));
// // x->angka = a;
// // y->angka = b;
// // z->angka = c;
// // x->next = y;
// // y->next = z;
// // z->next = NULL;
// // tampil();
// // }

// // void main(){
// // int a,b,c;
// // printf("Masukkan Nilai 1:");scanf("%d",&a);
// // printf("Masukkan Nilai 2:");scanf("%d",&b);
// // printf("Masukkan Nilai 3:");scanf("%d",&c);
// // awal(a,b,c);
// // getch();
// // }



void main();

struct  node
{
    int number;
    struct node *next;
   
}*head,*new,*check,*buff;

void print()
{
    check = head;
    while(check != NULL)
    {
        printf("|%d| -> ",check->number);
        check = check->next;
    }
    printf(" NULL\n");
    main();
}

void tambahdepan(int data)
{
    new = (struct node*) malloc(sizeof(struct node)); //Buat mesan tempatnya
    new->number= data;  //Isi data
    if (head== NULL){
        head = new;         //Untuk mindahin nilai dari head yang di gerbong NULL ke gerbong new
        head->next =NULL; //Buat ngenyambungin head dengan NULL
    }
    else{
        new->next=head;
        head=new;
    }
    print();
}

void tambahbelakang(int data)
{
    new = (struct node *) malloc(sizeof(struct node));
    new->number=data;
    if(head == NULL)
    {
        head=new;
        head->next=NULL;
    }

    else{
        check = head; //Head di letakkan di check

        while (check->next != NULL) //Apakah di depan check adalah NULL? (Cara ngecek node terakhirnya)
        {
            check = check->next; //Kalo tidak berarti si check dipindah kan ke depannya

        }

        check->next = new;
        new->next = NULL;
        
    }
    print();
}

void hapusdepan()
{
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else
    {
        check = head;
        head = head->next; //Mindahin ke depannya
        free(check);
    }
    print();
}

void  hapusbelakang()
{
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if(head->next== NULL)
    {
        free(head);
        head = NULL;
    }
    else{
        check = head;
        while (check->next->next != NULL)
        {
            check = check->next;
        }
        free(check->next);
        check->next=NULL;
    }
    print();
}


void main()
{
    int pilih,a, b;
    
    printf("\n1.Tambah Depan \n2.Tambah Belakang \n3.Hapus Depan \n4.Hapus Belakang\n ");
    printf("Pilih mau yang mana harja : ");
    scanf("%d",&pilih);
    if(pilih == 1)
    {
        printf("Masukan Angka : "); scanf("%d",&a);
        tambahdepan(a);

    }
    else if (pilih ==2)
    {
        printf("Masukan Angka : ");
        scanf("%d",&b);
        tambahbelakang(b);
    }
    else if (pilih == 3)
    {
        hapusdepan();
    }
    else if (pilih == 4)
    {
        hapusbelakang();
        tambahposisi();
    }
    
    getch();    
}


////////////////////////////////////////////////////////////////////////////////////
/////////////////////  DOUBEL LINKED LIST  ////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////


// #include<conio.h>
// #include<stdio.h>
// #include<stdlib.h>
// #include<windows.h>

// void inp();

// struct node
// {
//     int number;
//     struct node *next;
//     struct node *prev;

// }*head,*tail,*new,*check;


// void tampildepan()
// {
//     check= head;
//     while (check != NULL)
//     {
//         printf("%d-> ",check->number);
//         check = check->next;
//     }
//     printf("NULL\n");
// }

// void tampilbelakang()
// {
//     check = tail ;
//     while (check != NULL)
//     {
//         printf("%d-> ",check->number);
//         check = check->prev;
//     }
//     printf("NULL\n\n");
//     inp();
// }

// void tambahdepan(int data)
// {
//     new = (struct node *) malloc(sizeof(struct node));
//     new->number = data;
//     if(head == NULL)
//     {
//         tail = head;
//         head = tail = new;

//     }
//     else
//     {
//         new->next= head;
//         head->prev= new;
//         head = new;
//     }
//     head->prev = NULL;
//     tail->next = NULL;
//     tampildepan();
//     tampilbelakang();
// }

// void tambahbelakang(int data)
// {
//     new = (struct node *) malloc(sizeof(struct node));
//     new->number = data;
//     if(head == NULL)
//     {
//         head = tail = new;
//     }
//     else{
//         tail->next = new;
//         new->prev = tail;
//         tail = new;
//     }
//     head->prev= NULL;
//     tail->next = NULL;
//     tampildepan();
//     tampilbelakang();
// }

// void hapusdepan()
// {
//     if(head == NULL)
//     {
//         printf("Data Kosong");
//     }
//     else{
//         // check = head->next;
//         // free(head);
//         check = head;
//         head = check->next;
//         free(check);
//         // head = check; //Mindahin ke depannya
//         head->prev = NULL;
//     }
    
//     tampildepan();
//     tampilbelakang();
// }

// void inp()
// {
//     // system("cls");
//     int angka,pilih;
//     printf("1. Tambah Depan\n2. Tambah Belakang\n3. Hapus Depan\n");
//     printf("PILIH : "); scanf("%d",&pilih);

//     if(pilih == 1)
//     {
//         printf("Masukan Angka : "); scanf("%d",&angka);
//         tambahdepan(angka);
//     }
//     else if(pilih == 2)
//     {
//         printf("Masukan Angka : "); scanf("%d",&angka);
//         tambahbelakang(angka);
//     }
//     else if( pilih == 3)
//     {
//         hapusdepan();
//     }
// }

// void main()
// {
//     inp();

//     getch();
// }