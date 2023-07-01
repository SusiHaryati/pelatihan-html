#include<conio.h>
#include<stdio.h>
#include<windows.h>

void main();
int value;

struct node
{
    int number;
    struct node *next;
} *new,*head,*check,*buff,*buff1;

void cetak()
{
    check = head;
    while(check != NULL)
    {
        printf("%d -> ",check->number);
        check = check->next;
    }
    printf("NULL\n");
    main();
}

void tambahindeks(int data)
{
    int indeks;
    printf("Masukan Indeks : ");
    scanf("%d",&indeks);
    new = malloc(0);
    new->number= data;
    check = head;
    if(head == NULL)
    {
        head = new;
        head->next = NULL;
    }
    else if (indeks == 0)
    {
       new->next= head;
       head = new;
    }
    else
    {
        for(int a=0; a<indeks-1; a++)
        {
            check = check->next; 
        }
        new->next = check->next;
        check->next = new;
    }
    cetak();
}

void tambahvalue(int data)
{
    int value;
    new = malloc(0);
    new->number = data;
    check = head;
    if(head == NULL)
    {
        head = new;
        head->next = NULL;
    }
    else 
    {
        check = head;
        printf("Masukan Value : "); scanf("%d",&value);
        while(check != NULL)
        {
            if(check->number == value)
            {
               buff = check->next;
                check->next = new;
                new->next = buff;
            }
            check = check->next;
        }
    }
    cetak();
}

void tambahtengah(int data)
{
    int tamp=0;
    new = malloc(0);
    new->number = data;
    check = head;
    while (check != NULL)
    {
        tamp++;
        check = check->next;
    }
    check = head;
    for(int a=1; a<tamp/2; a++)
    {
        check = check->next;
    }
    buff = check->next;
    check->next = new;
    new->next = buff;

    cetak();    
}

void hapusindeks()
{
    int indeks;

    check = head;   
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else
    {
        printf("Masukan Indeks : "); scanf("%d",&indeks);
        if(head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            check = head;
            for(int a = 1; a < indeks; a++)
            {
                check = check->next;
            }
            buff = check->next->next;
            check->next = buff;
        }
    }
    cetak();
}

void hapusvalue()
{
    int tam;
    check = head;
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else if(head->next == NULL)
    {
        head = NULL;
    }
     else
    {
       tam = 0;
        printf("\tInput Value :");
        scanf("%d", &value);
        check = head;
        buff = head;
        if (check->number == value)
        {
            check = head;
            head = head->next;
            // free(check);
        }
        check = head;
        
        while (check->number != value)
        {
           tam++;
            check = check->next;
        }
        check = head;
        for (int b = 0; b <tam - 1; b++)
        {
            check = check->next;
        }
        buff = check->next->next;
        // free(check->next);
        check->next = buff;
    }
    cetak();
}

void hapustengah()
{
    check = head;
    if(head == NULL)
    {
        printf("Data Kosong");
    }
    else
    {
        check = head;
        if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            check = head;
            int tam = 0;
            while (check != NULL)
            {

                check = check->next;
                tam++;
            }
            tam /= 2;
            check = head;
            for (int a = 1; a < tam; a++)
            {
                check = check->next;
            }
            buff = check->next->next;
            // free(check->next);
            check->next = buff;
        }
    }
    cetak();
}

void main()
{
    int pilih,a,b,c;
    printf("\n 1. Tambah By Indeks\n 2. Tambah By Value\n 3. Tambah Tengah Bgttt\n 4. Hapus By Indeks\n 5. Hapus By Value\n 6. Hapus Tengah Bgtt");
    printf("\n\nPILIH : ");
    scanf("%d",&pilih);

    if(pilih == 1)
    {
        printf("Masukan Angka : "); scanf("%d",&a);
        tambahindeks(a);
    }
    else if(pilih == 2)
    {
        printf("Masukan Angka : "); scanf("%d",&b);
        tambahvalue(b);
    }
    else if (pilih == 3)
    {
        printf("Masukan Angka : "); scanf("%d",&c);
        tambahtengah(c);
    }
    else if (pilih == 4)
    {
        hapusindeks();
    }
    else if (pilih == 5)
    {
        hapusvalue();
    }
    else if (pilih == 6)
    {
        hapustengah();
    }
    getch();
}