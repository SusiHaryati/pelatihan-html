// #include<conio.h>
// #include<stdio.h>

// struct node
// {
//     int angka;
//     struct node *next;
// };

// struct node *x,*y,*z;

// void tampil()
// {
//     struct node *bantu;
//     bantu=x;
//     while (bantu!=NULL)
//     {
//         printf("|%d|-->",bantu->angka);
//         bantu= bantu->next;
//     }
//     printf("NULL\n");
// }


// void awal(int a, int b, int c)
// {
//     x = malloc(0);
//     y = malloc(0);
//     z = malloc(0);
//     x->angka=a;
//     y->angka=b;
//     z->angka=c;
//     x->next=y;
//     y->next=z;
//     z->next=NULL;
//     tampil();
// }

// void main()
// {
//     int a,b,c;
//     printf("Masukan Nilai 1 : "); scanf("%d",&a);
//     printf("Masukan Nilai 2 : "); scanf("%d",&b);
//     printf("Masukan Nilai 3 : "); scanf("%d",&c);
//     awal(a,b,c);

//     getch();
// }

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main();

struct node
{
    int number;
    struct node *next;
} *head, *new, *check,*buff;

void print()
{
    check = head;
    while (check != NULL)
    {
        printf("|%d| -> ", check->number);
        check = check->next;
    }
    printf("NULL\n");
    main();
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
    print();
}

void hapusDepan()
{
    if (head == NULL)
    {
        printf("Data Kosong\n");
    }
    else
    {
        check = head;
        head = head->next;
        free(check);
    }
    print();
}

void tambahBelakang(int data)
{
    new = (struct node *)malloc(sizeof(struct node));
    new->number = data;
    if (head == NULL)
    {
        head = new;
        head->next = NULL;
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
    print();
}

void tambahDepan(int data)
{
    new = (struct node *)malloc(sizeof(struct node));
    new->number = data;
    if (head == NULL)
    {
        head = new;
        head->next = NULL;
    }
    else
    {
        new->next = head;
        head = new;
    }
    print();
}

void main()
{
    int pilih,a, b;
    
    printf("1.Tambah Depan \n2.Tambah Belakang \n3.Hapus Depan \n4.Hapus Belakang\n ");
    printf("Pilih mau yang mana :");
    scanf("%d",&pilih);
    if(pilih == 1)
    {
        printf("Masukan Angka : "); scanf("%d",&a);
        tambahDepan(a);
    }
    else if (pilih ==2)
    {
        printf("Masukan Angka : ");
        scanf("%d",&b);
        tambahBelakang(b);
    }
    else if (pilih == 3)
    {
        hapusDepan();
    }
    else if (pilih == 4)
    {
        hapusBelakang();
    }


    getch();
}