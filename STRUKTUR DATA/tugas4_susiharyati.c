#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


void inp();
int data;

struct node
{
    int number;
    struct node *next;
    struct node *prev;

}*head,*tail,*new,*check,*check2,*buff;


void tampildepan()
{
    check= head;
    while (check != NULL)
    {
        printf("%d-> ",check->number);
        check = check->next;
    }
    printf("NULL\n");
}

void tampilbelakang()
{
    check = tail ;
    while (check != NULL)
    {
        printf("%d-> ",check->number);
        check = check->prev;
    }
    printf("NULL\n\n");
    inp();
}

void tambahdepan(int data)
{
    new = (struct node *) malloc(sizeof(struct node));
    new->number = data;
    if(head == NULL)
    {
        tail = head;
        head = tail = new;

    }
    else
    {
        new->next= head;
        head->prev= new;
        head = new;
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void tambahbelakang(int data)
{
    new = (struct node *) malloc(sizeof(struct node));
    new->number = data;
    if(head == NULL)
    {
        head = tail = new;
    }
    else{
        tail->next = new;
        new->prev = tail;
        tail = new;
    }
    head->prev= NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void tambahtengah(int data) {
   
    int tam;
    new = malloc(0);
    new->number = data;
    if(head==NULL)
    {
        tambahdepan(data);
    }
    else
    {
        check = head;
        while(check->next != NULL)
        {
            check = check->next;
            tam++;
        }
        tam /= 2;
        check = head;
        for(int a = 0; a < tam; a++)
        {
            check = check->next;
        }
        buff = check->next;
        check->next = new;
        new->next = buff;
        buff->prev=new;
        new->prev=check;
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void tambahByIndex(int data)
{

    int indeks;
    int tamp = 0;
    new = malloc(0);
    new->number = data;
    if (head == NULL)
    {
       head = tail = new;

    }
    else{
        printf("\n\tMasukan Indeks : ");
        scanf("%d", &indeks);
        check=head;
        check2=tail;
        while (check->next != NULL && check2->prev !=NULL)
        {
            check = check->next;
            check2=check2->prev;
            tamp++;
        }

        if (indeks == 0)
        {
            new->next = head;
            head->prev = new;
            head = new;
            head->prev = NULL;
            tail->next = NULL;
            // tambahDepan(); 
        }
        else if (indeks > tamp)
        {
            printf("\nIndeks Yang Anda Masukan Salah !!!");
            getch();
        }

        else
        {
            check=head;
            for (int a =0; a < indeks-1; a++)
            {
                check = check->next;
            }
            buff = check->next;
            check->next=new;
            new->next = buff;
            buff->prev=new;
            new->prev=check;
        }
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void tambahByValue(int data)
{
    int tamp = 0,value;
   
    new =malloc(0);
    new->number = data;
    if (head == NULL)
    {
       head = tail = new;

    }else if(head->next==NULL)
    {
        tail->next = new;
        new->prev = tail;
        tail = new;
    }
    else
    {
         printf("\tMasukan value : ");
        scanf("%d", &value);
        check = head;
        while (check != NULL)
        {
            check = check->next;
            tamp++;
        }

        check = head;
        for (int i = 1; i < tamp ; i++)
        {
            
            if (check->number == value)
            {
                buff= check->next;
                check->next = new;
                new->next =buff;
                buff->prev = new;
                new->prev = check;
            }
            check = check->next;
        }
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang(); 
}

void hapustengah()
{
    int tam;
    if(head == NULL)
    {
        printf("\naData kosong!!");
        getch();
    }
    else {
        check = head;
        if(head == tail)
        {
            check == tail;
            head = tail = NULL;
        }
        else {
            check = head;
            while(check != NULL)
            {
                tam++;
                check = check->next;
            }
            tam /= 2;
            check = head;
            for(int a = 1; a < tam; a++)
            {
                check = check->next;

            }
            buff = check->next->next;
            check->next = buff;
            buff->prev = check;

        }
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang(); 
}

void hapusByIndex()
{
    int tam=0,index;
    if (head == NULL)
    {
        printf("Data Kosong\n");
    }
    else if(head->next == NULL)
    {
        head=tail=NULL;
    }
    else
    {
        printf("\tInput Index : ");
        scanf("%d", &index);
        check = head;
        while (check->next != NULL)
        {
            check = check->next;
            tam++;
        }
        check = head;
        if (index == 0)
        {
            check = head;
            head = head->next;
            head->prev = NULL;
            // free(check);
        }
        else if (index > tam)
        {
            printf("INDEKS YANG DIMASUKAN SALAH !!!\n");
            getch();
        }
        else if(index==data-1)
        {
            check = tail;
            tail = tail->prev;
            tail->next = NULL;
            // free(check);
        }else
        {
            for (int i = 1; i < index-1; i++)
            {
                check = check->next;
            }
            buff = check->next->next;
            // free(check->next);
            check->next = buff;
            buff->prev=check;
      }
    }
   
    tampildepan();
    tampilbelakang(); 
}

void hapusByValue()
{
    int value, tam;
    if(head == NULL)
    {
        printf("\ndata kosong");
        getch();
    }
    else if(head->next==NULL)
    {
        head=tail=NULL;
    }
    else {
         printf("\nvalue:");
         scanf("%d", &value);
        check = head;
        while (check->next->next != NULL)
        {
            if(check->next->number == value) {
                buff = check->next->next;
                check->next = buff;
                buff->prev = check;
            }
            else {
                check = check->next;
            }
        }
        if(head->number == value)
        {
            check = head;
            head = head->next;
            head->prev = NULL;
        }
        if(tail->number == value)
        {
            check = tail;
            tail = tail->prev;
            tail->next = NULL;
        }

    }

    tampildepan();
    tampilbelakang(); 
}

void hapusdepan()
{
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else{
        // check = head->next;
        // free(head);
        check = head;
        head = check->next;
        free(check);
        // head = check; //Mindahin ke depannya
        head->prev = NULL;
    }

    tampildepan();
    tampilbelakang();
}

void inp()
{
    // system("cls");
    int angka,pilih;
    printf(" Pilihan : ");
    printf("\n1. Tambah Depan\n2. Tambah Belakang\n3. Tambah Tengah\n4. Tambah By Value\n5. Tambah By Indeks\n6. Hapus Tengah\n7. Hapus By Value\n8. Hapus By Indeks\n9. Hapus Depan\n ");
    printf("PILIH : "); scanf("%d",&pilih);

    if(pilih == 1)
    {
        printf("Masukan Angka : "); scanf("%d",&angka);
        tambahdepan(angka);
    }
    else if(pilih == 2)
    {
        printf("Masukan Angka : "); scanf("%d",&angka);
        tambahbelakang(angka);
    }
    else if(pilih == 3)
    {
        printf("Masukan Angka : "); scanf("%d",&angka);
        tambahtengah(angka);
    }
    else if(pilih == 4)
    {
        printf("Masukan Angka : "); scanf("%d",&angka);
        tambahByIndex(angka);
    }
    else if(pilih == 5)
    {
        printf("Masukan Angka : "); scanf("%d",&angka);
        tambahByValue(angka);
    }
    else if (pilih == 6)
    {
        hapustengah();
    }
    else if (pilih == 7)
    {
        hapusByValue();
    }
    else if (pilih == 8)
    {
        hapusByIndex();
    }   
    else if( pilih == 9)
    {
        hapusdepan();
    }
}

void main()
{
    inp();

    getch();
}
