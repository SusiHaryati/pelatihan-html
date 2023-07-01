#include <conio.h>
#include <stdio.h>
#include <windows.h>

void main();

struct node
{
    int number;
    struct node *next;
    struct node *prev;
}*head,*tail,*new,*check,*check2,*buff;

void tampildepan()
{
    check = head;
    while(check != NULL)
    {
        printf("|%d| -> ",check->number);
        check = check->next;
    }
    printf("NULL\n");
   
}

void tampilbelakang(){
    check = tail;
    while(check != NULL)
    {
        printf("|%d| ->",check->number);
        check = check->prev;
    }
    printf("NULL\n");
}

void tambah_depan()
{
    int data;
    printf("Masukan Data : "); scanf("%d",&data);
    new = malloc (0);
    new->number = data;
    check = head;
    if(head == NULL)
    {
        tail = head;
        head = tail = new;
    }
    else{
        new->next = head;
        head->prev = new;
        head = new;
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void tambahbelakang()
{
    int data;
    printf("Masukan Data : "); scanf("%d",&data);
    new = malloc(0);
    new->number = data;
    check = head;
    if (head == NULL)
    {
        head = tail = new;
    }
    else{
        tail->next = new;
        new->prev = tail;
        tail = new;
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void tambahtengah(){
    int data,tamp=0;
    printf("Masukan Data : "); scanf("%d",&data);
    new = malloc(0);
    new->number = data;
    check = head;
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else{
        check = head;
        while (check->next != NULL)
        {
            check = check->next;
            tamp++;
        }

    check=head;
    for(int a = 0; a <tamp/2; a++)
    {
        check = check->next;
    }
    buff = check->next;
    check->next = new;
    new->next = buff;
    buff->prev =new;
    new->prev = check;
    }
    head->prev= NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void tambah_index()
{
    int data,idx,tamp=0;
    printf("Masukan Data : "); scanf("%d",&data);
    printf("Masukan indeks : "); scanf("%d",&idx);
    new = malloc(0);
    new->number = data;
    check = head;
    while(check != NULL)
    {
        tamp++;
        check = check->next;
    }
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if(idx == 0 ){
        new->next = head;
        head->prev = new;
        head = new;
    }
    else if(tamp < idx)
    {
        printf("Tidak Ditemukan");
    }
    else{
        check = head;
        for(int a = 0; a<idx-1; a++)
        {
            check = check->next;
        }
        buff = check->next;
        check->next = new;
        new->next = buff;
        buff->prev = new;
        new->prev = check;
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void tambah_value()
{
    int data,value,tamp=0;
    printf("Masukan Data : "); scanf("%d",&data);
    printf("Masukan Value: "); scanf("%d",&value);
    new = malloc(0);
    new->number = data;
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if (tail->number == value)
    {
        tail->next = new;
        new->prev = tail;
        tail = new;
    }
    else{
        check = head;
        while(check->number != value){
            if(check == NULL){
                break;
            }
            check = check->next;
        }
        if(check->number == value)
        {
            tamp++;
        }
        if(tamp == 0)
        {
            printf("Tidak Ditemukan");
        }
        else{
            buff = check->next;
            check->next = new;
            new->next = buff;
            buff->prev = new;
            new->prev = check;
        }
        
    }
    head->prev = NULL;
    tail->next = NULL;
    tampildepan();
    tampilbelakang();
}

void hapustengah()
{
    int tamp=0;
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if(head == tail)
    {
        check = tail;
        free(check);
        head = tail =NULL;
    }
    else{
        check=head;
        while (check->next != NULL)
        {
            tamp++;
            check =check->next;
        }

         check = head;
         for(int a=0; a<tamp/2; a++)
         {
            check = check->next;
         }
        buff = check->next->next;
        free(check->next);
        check->next = buff;
        buff->prev = check;
    }
}

void hapus_indeks()
{   int tamp = 0,ind;

    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if(head == tail)
    {
        head=tail=NULL;
    }
    else{
    printf("Masukan Indeks : "); scanf("%d",&ind);
    check = head;
    while (check->next != NULL)
    {
        tamp++;
        check = check->next;
    }
    if(ind == 0)
    {
        check = head;
        head = head->next;
        free(check);
        head->prev = NULL;
    }
    else if(ind > tamp)
    {
        printf("Tidak Ditemukan");
    }
    
    else
    {
      check=head;
      for(int a =0; a<tamp-1; a++)
      {
        check = check->next;
      }
       buff = check->next->next;
       free(check->next);
       check->next = buff;
       buff->prev = check;
    }
  }
}

void hapus_value()
{
    int tamp=0,value;
    if(head == NULL){
        printf("Data Kosong");
    }
    else if(head == tail)
    {
        head = tail = NULL;
    }
    else{
        printf("Masukan Value : "); scanf("%d",&value);
        check = head;
        while(check->next->next != NULL)
        {
            if(check->next->number == value)
            {
                buff = check->next->next;
                check->next = buff;
                buff->prev = check;
            }
            check = check->next;
        }
        if(head->number == value)
        {
            check = head;
            head =head->next;
            free(check);
            head->prev = NULL;
        }
        if(tail->number == value)
        {
            check = tail;
            tail = tail->prev;
            free(check);
            tail->next = NULL;
        }
    }
}

void updateindeks()
{
    int data,ind,tamp=0;
    printf("Masukan Data : "); scanf("%d",&data);
    printf("Masukan Indeks : "); scanf("%d",&ind);
    check = head;
    while(check->next != NULL)
    {
        tamp++;
        check = check->next;
    }
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if(tamp < ind){
        printf("Tidak Di temukan");
    }
    else{
        check= head;
        for(int a=0; a<tamp-1; a++)
        {
            check= check->next;
        }
        check->number = data;
    }
    tampildepan();
    tampilbelakang();
}

void updatevalue()
{
    int data,value,tamp=0;
    printf("Masukan Data : "); scanf("%d",&data);
    printf("Masukan Value : "); scanf("%d",&value);
    check = head;
    while(check->next != NULL)
    {
        tamp++;
        check = check->next;
    }
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if(tamp == 0)
    {
        printf("Tidak Ditemukan");
    }
    else{
        check = head;
        while(check->next != NULL)
        {
            if(check->number == value)
            {
                check->number = data;
            }
            check = check->next;
        }
    }
    tampildepan();
    tampilbelakang();
}

void main()
{
    tambah_depan();
    tambah_depan();
    tambahbelakang();
    hapus_indeks();
    tambahtengah();
    tambah_index();
    hapustengah();
    tambah_value();
    updateindeks();
    updatevalue();

    getch();
}