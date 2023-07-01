#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
// void main(){
//  int a, b = 0, c = -6;
//  a = b;
//  b = c;
//  int *d = &a;
//  a = -77;
//  c = *d;
//  printf("%d %d %d %d", a,b,c,d);
//  getch();
// }

// struct Node{
//  char nama[30];
//  struct Node *next;
// } *head, *a, *b, *c;
// void view(){
//  a = head;
//  while(a != NULL){
//  printf("%s - ", a->nama);
//  a = a->next;
//  }
//  printf("NULL");
//  getch();
// }
// void panggil(char nama[][50]){
//  head = malloc(0);
//  a = malloc(0);
//  b = malloc(0);
//  c = malloc(0);
//  strcpy(a->nama, nama[2]);
//  strcpy(b->nama, nama[0]);
//  strcpy(c->nama, nama[1]);
//  strcpy(head->nama, a);
//  a ->next = c;
//  b ->next = head;
//  b -> next = NULL;
//  head ->next = NULL;
//  c -> next = b;
//  head = c;
// }
// void main(){
//  char nama[3][50] = {"Muhammad", 
// "Ibnu", "Sina"};
//  panggil(nama);
//  view();
// }

// struct mhs
// {
//     char nama[100];
//     char jurusan[100];
//     float rata;
//     float nilai_ing,nilai_indo,nilai_mate;
// }nilai_mhs[5];

// void main()
// {

//     for(int a=0; a<3; a++)
//     {
//         printf("Nama Mahasiswa : "); scanf("%s",&nilai_mhs[a].nama);
//         printf("Jurusan : "); scanf("%s",&nilai_mhs[a].jurusan);
//         printf("Nilai Indo : "); scanf("%f",&nilai_mhs[a].nilai_indo);
//         getchar();
//         printf("Nilai Inggris : "); scanf("%f",&nilai_mhs[a].nilai_ing);
//         printf("Nilai Mate : "); scanf("%f",&nilai_mhs[a].nilai_mate);

//         nilai_mhs[a].rata=(nilai_mhs[a].nilai_indo+nilai_mhs[a].nilai_ing+nilai_mhs[a].nilai_mate)/3;
        
//         printf("\n\n");
//     }
    
//     for(int c = 0; c<3; c++)
//     {
//         getchar();
//         printf("\nNama    : %s",nilai_mhs[c].nama);
//         printf("\nJurusan : %s",nilai_mhs[c].jurusan);
//         printf("\nRata rata : %.2f",nilai_mhs[c].rata);
//     }

//     getch();
// }


// struct node
// {
//     int number;
//     struct node *next;
// }*head,*new,*check,*buff;

// void cetak()
// {
//     check = head;
//     while(check != NULL)
//     {
//         printf("%d -> ",check->number);
//         check = check->next;
//     }
//     printf("NULL\n");
//     main();
// }

// void tambahdepan()
// {
//     int data;
//     printf("Masukan Data : "); scanf("%d",&data);
    
//     new = (struct node*) malloc(sizeof(struct node)); //Buat mesan tempatnya
//     new->number= data;  //Isi data
//     if (head== NULL){
//         head = new;         //Untuk mindahin nilai dari head yang di gerbong NULL ke gerbong new
//         head->next =NULL; //Buat ngenyambungin head dengan NULL
//     }
//     else{
//         new->next=head;
//         head=new;
//     }
//     cetak();
// }

// void tambahposisi()
// {
//     int data,tamp=0;
//     printf("Masukan data : "); scanf("%d",&data);
//     new = malloc(0);
//     new->number = data;
//     check = head;
//     while (check != NULL)
//     {
//         tamp++;
//         check = check->next;
//     }
//     check = head;
//     for(int a=1; a<tamp-2; a++)
//     {
//         check = check->next;
//     }
//     buff = check->next;
//     check->next = new;
//     new->next = buff;

//     cetak();    

// }


// void main()
// {
//     int pilih;
//     scanf("%d",&pilih);
//     if(pilih == 1)
//     {
//     tambahdepan();
//     }
//     else if(pilih == 2)
//     {
//         tambahposisi();
//     }

//     getch();
// }

void main()
{
    int sapi = 10,kambing = 5;
    int *ayam = &sapi;
    kambing = kambing * *ayam;
    ayam = &kambing;
    sapi = 0;
    printf("%d %d %d",ayam ,kambing,sapi);

    getch();
}