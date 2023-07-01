#include<stdio.h>
#include<conio.h>
#include<string.h>

// struct siswa
// {
//    char nama[100];
//    int kelas;
//     struct nmpel
//     {
//         char mapel[100];
//         float nilai;
//     }mpl[5];
    
// }sw[5];

// int jmlh;
// char nama[100];
// int tamp=0,tam=0;

// void menginput();
// void menampilkan();
// void mengabdate();

// void main(){
//     menginput();

//     getch();

// }

// void menginput()
// {
//    printf("masukan jumlah data :"); scanf("%d",&jmlh);
//     getchar();
//     for(int a=0; a<jmlh; a++)
//     {
//         printf("nama:"); gets(sw[a].nama);
//         printf("kelas:"); scanf("%d",&sw[a].kelas);
//         getchar();
//         for(int b=0; b<2; b++){
//             printf("mata pelajaran:"); gets(sw[a].mpl[b].mapel);
//             printf("nilai siswa:"); scanf("%f",&sw[a].mpl[b].nilai);
//             getchar();
//         }printf("\n");
        
//     }printf("\n");
//     menampilkan();
// }

// void menampilkan()
// {
//     for(int a=0; a<jmlh; a++){
//         printf("nama:%s\n",sw[a].nama);
//         printf("kelas:%d\n",sw[a].kelas);
//         for(int b=0; b<2; b++){
//             printf("mata pelajaran:%s\n",sw[a].mpl[b].mapel);
//             printf("nilai siswa:%.2f\n",sw[a].mpl[b].nilai);
//         }printf("\n");
//     }
//     mengabdate();
// }

// void mengabdate(){
    
//     printf("nama yang mau di inputkan:"); gets(nama);
//     for(int i=0; i<jmlh; i++){
//         if(strcmp(nama,sw[i].nama)==0)
//         {
//             tamp++;
//             tam=i;
//         }
//     }


//     if(tamp!=0){
        
//         printf("nama:"); gets(sw[tam].nama);
//         printf("kelas:"); scanf("%d",&sw[tam].kelas);
//         getchar();
//         for(int b=0; b<2; b++){
//             printf("mata pelajaran:"); gets(sw[tam].mpl[b].mapel);
//             printf("nilai siswa:"); scanf("%.2f",&sw[tam].mpl[b].nilai);
//             getchar();
//         }printf("\n");
        

//     for(int a=0; a<jmlh; a++){
//         printf("nama:%s\n",sw[a].nama);
//         printf("kelas:%d\n",sw[a].kelas);
//         for(int b=0; b<2; b++){
//             printf("mata pelajaran:%s\n",sw[a].mpl[b].mapel);
//             printf("nilai siswa:%.2f\n",sw[a].mpl[b].nilai);
//         }printf("\n");
//     }

//     }

//     else{
//         printf("inputan tidak tersedia!!");
//         }
// }

// #include<conio.h>
// #include<stdio.h>
// #include<windows.h>

// void main()
// {
    // int a =2;
    // int *b = &a;
    // printf("%d\n",&a);

    // Kalo dia pointer pemanggilannya gausah pake & langsung nama var nya aja
    // Kalo dia pointer pemanggilan nya printf("%d\n",b); dia ngecetak alamat
    // printf("%d\n",*b); dia ngecetak nilai
    // printf("%d\n",&b); dia ngecetak alamat
    // printf("%d\n",*&*b); nilai
    // printf("%d\n",&*&b); alamat
    // Kalo dia bukan pointer terus pemanggilannya printf("%d\n",&a); dia mencetak alamat
    // Kalo dia bukan pointer printf("%d\n",*b); eror
    // Kalo bukan pointer printf("%d\n",*&*b); eror
    // Kalo bukan pointer printf("%d\n",&b); alamat
    // Kalo Bukan pointer printf("%d\n",*&b); nilai
    // Kalo bukan pointer printf("%d\n",&*&b); alamat
    
    // int a =2;
    // int *b = &a;
    // int *c = b;
    // printf("%d\n",*&*&c);

    // Kalo dia var pointer buat ngambil nilainya pake * itu bakal eror
    // Kalo dia pake & itu bakal ada warning dan ngecetak alamat
    // Jadi klo dia var pointer ngambil nilainya tuh gausah pake & atau *



//     getch();
// }



///////////////////////////  TEBAK OUTPUT  ////////////////////////////////////

// void main()
// {
//     // int a =45;
//     // int *p;
//     // p =&a;
//     // printf("%p",p);


//     // int a=25 ,b=12;
//     // int *p,*q;
//     // p=&a;
//     // q=p;
//     // printf("%d",&p);
//     // printf("\n%d",&q);


//     int score = 50;
//     int hp = 100;

//     // membuat pointer dengan isi alamat memori dari hp
//     int *ptr_hp = &hp;

//     // print isi variabel dan alama memori
//     printf("Nama Variabel \t Alamat \t Konten\n");
//     printf("score \t\t %x \t %d \n", &score, score);
//     printf("hp \t\t %x \t %d \n", &hp, hp);
//     printf("ptr_hp \t %x \t %x \n", &ptr_hp, ptr_hp);
//     printf("*ptr_hp \t %x \t %d \n", &ptr_hp, *ptr_hp);

//     // mengubah data pada alamat memori dengan pointer
//     *ptr_hp = 95;

//     printf("hp \t\t %x \t %d \n", &hp, hp);
//     printf("*ptr_hp \t %x \t %d \n", &ptr_hp, *ptr_hp);

//     getch();
// }

// void add_score(int score){
//     score = score + 5;
//     printf("Score dibuah ke %d\n", score);
// }

// void main(){
//     int score = 0;

//     printf("score sebelum diubah: %d\n", score);
//     add_score(score);
//     printf("score setelah diubah: %d\n", score);

//     getch();
// }

// void main()
// {
// int a = 3;
// int b;
// int *c;
// b = 10;
// c = &b;
// b = a;
// printf("A.) %d, %d, %d \n", a, b, *c);
// printf("B.) %d, %d, %x \n", a, b, c);
// b = 100; a = 0;
// printf("C.) %d, %d, %d \n", a, b, *c);
// *c = 11;
// printf("D.) %d, %d, %d \n", a, b, *c);
// b = a;
// printf("E.) %d, %d, %d \n", a, b, *c);

// getch();

// }


// void main()
// {
// int *pointer;
// int a = 10;
// pointer = &a;
// printf("|%d| - ", &a);
// *pointer = 5;
// printf("|%d| - ", 
// *pointer);
// a = a / *pointer;
// printf("|%d|", a);

// getch();
// }



// void main(){
// int angka[4] = {25, 50, 75, 100};
// *angka = 13;
// *(angka + 2) = 17;
// int *ptr = angka;
// printf("%d\n", 
// *angka);
// printf("%d\n", 
// *(angka + 2));
// for (int i = 0; i < 4; i++)
// {
// printf("|%d|-", 
// *(ptr + i));
// }
//     getch();
// }

// void main()
// {
//     int p=9,q;
//     int *r;

//         q=10;
//         r=&q;
//         q=p;
//         p=q;
//         printf("%d. %d. %d\n",p,q,*r);
//         printf("%d. %p. %d\n",p,q,*r);
//         *r=11;
//         printf("%d. %d. %d\n",p,q,*r);
//         *r=44;
//         printf("%d. %d. %d\n",p,q,*r);


//     getch();
// }


// void main()
// {
//     int a =10;
//     int b =20;
//     int c,*p;

//     c = a;
//     b = a;
//     p = &b;
//     a = c;
//     b = 11;
//     printf("%d\n",a);
//     printf("%d\n",p);
//     printf("%d\n",b);
//     printf("%d\n",&c);
//     printf("%d\n",*p);

//     getch();
// }

// void main()
// {
// int a = 1, b = 5, c = 7, d = 3;
// int *p;
// p = &a;
// a = b;
// p = &a;
// a = c;
// p = &a;
// a = d;
// printf("|%d| |%d| |%d|", *&*p, &c, b);


// getch();
// }

// void main()
// {
// int x = 5, y;
// int *a, *b;
// a = &x;
// b = &y;
// *b = x;
// y += 1;
// printf("%d - %d - %d", x + y, a, *b);

// getch();
// }

// void main()
// {
// int h = 2, i = 25, j = 3;
// int *aduh = &j;
// i = i * j;
// j = i;
// int *aww = NULL;
// aww = aduh;
// h = i - j;
// if (*aduh == h)
// printf("%d - %d - %d", *aww, *aduh, &h);
// else
// printf("%d - %d - %d", *aww, aduh, h);

// getch();
// }


// void testing(int *p){
// printf("%d ",*p + 5);
// }

// void main(){
// int a = 2;
// int *p = &a;
// int c = a;
// testing(&c);
// a++;
// printf("%d ",*p);
// testing(&a);
// printf("%d ", c);

// getch();
// }


// void main()
// {
// int a, *b, *c;
// a = 7;
// b = &a;
// c = b;
// *b = 9;
// *c = 2;
// printf("%d | %d | %d", a, b, *c);

// getch();
// }

// void main()
// {
// int a, b = 12;
// int *p;
// p = &b;
// a = *p;
// b = 101;
// printf("Nilai p = %d",*p);

// getch();
// }

// void main()
// {
// int x = 5, 
// *y, *z;
// z = &x;
// x = 3;
// y = &x;
// *y = 7;
// printf("%d : %d : %d",*&x, z, *&*y);

// getch();
// }

// void main()
// {
// int z = 0, y = 0;
// int *p, *q;
// p = &z;
// q = p;
// for (int x = 1; x <= 10; x++)
// {
// if (x <= 4)
// *p += 2;
// else if (x > 7)
// *q += 4;
// else
// y++;
// q = &y;
// }
// printf("%d - %d - %d - %d", z, &y, *q, p);

// getch();
// }


////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////  LINKED LIST  //////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////


////////////////////////////////  VERSI RAKSA ARYASATYA  /////////////////////////

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// #include <windows.h>

// void main();

// struct node
// {
//     int angka, tam;

//     struct node *next;
// } * head, *baru, *cek, *tamp, *bantu, *pen;


// void tambah_all()
// {
//     int value, data;
//     // baru = (struct node *)malloc(sizeof(struct node));
//     printf("Masukan Value :");
//     scanf("%d", &value);
//     printf("Masukan Value baru :");
//     scanf("%d", &data);
//     tamp = head;

//     while (tamp->next != NULL)
//     {
//         printf("V");
//         if (tamp->next->angka == value)
//         {
//             printf("\np");
//             baru = malloc(0);
//             baru->angka = data;

//             bantu = tamp->next;
//             tamp->next = baru;
//             baru->next = bantu;
//             tamp = tamp->next;
//         }
//         tamp = tamp->next;
//     }

//     if (head->angka == value)
//     {
//         baru = malloc(0);
//         baru->angka = data;
//         baru->next = head;
//         head = baru;
//     }
//     pilih();
// }

// void serch_average()
// {
//     int nilai, tam;
//     tamp = head;
//     while (tamp != NULL)
//     {
//         tamp = tamp->next;
//         tam++;
//     }

//     tamp = head;
//     for (int a = 1; a <= tam; a++)
//     {
//         nilai += tamp->angka;
//         tamp = tamp->next;
//     }
//     nilai /= tam;
//     printf("Rata Rata :%d", nilai);
//     getch();
//     main();
// }

// void Hapus_tengah()
// {
//     tamp = head;
//     int l = 0;
//     while (tamp != NULL)
//     {
//         tamp = tamp->next;
//         l++;
//     }

//     tamp = head;
//     for (int a = 1; a < l / 2 - 1; a++)
//     {
//         tamp = tamp->next;
//     }

//     bantu = tamp->next->next;
//     free(tamp->next);
//     tamp->next = bantu;
//     pilih();
// }

// void mencari_bilangan_prima()
// {
//     system("cls");
//     printf("Mencari Bilangan Prima\n\n");
//     tamp = head;
//     int p = 0;
//     while (tamp != NULL)
//     {
//         p = 0;
//         for (int a = 1; a <= tamp->angka; a++)
//         {
//             if (tamp->angka % a == 0)
//             {
//                 p++;
//             }
//         }
//         if (p == 2)
//         {
//             printf("%d Adalah Bilangan Prima\n", tamp->angka);
//         }
//         tamp = tamp->next;
//     }
//     getch();
//     main();
// }

// void tambah_blakang()
// {
//     baru = malloc(0);
//     tamp = head;
//     printf("Masukan Value :");
//     scanf("%d", &baru->angka);

//     if (head == NULL)
//     {
//         head = baru;
//         baru->next = NULL;
//     }
//     else
//     {
//         while (tamp->next != NULL)
//         {
//             tamp = tamp->next;
//         }
//         tamp->next = baru;
//         baru->next = NULL;
//     }
//     pilih();
// }

// void serchMax()
// {
//     tamp = head;
//     int MAX = 0;
//     while (tamp != NULL)
//     {
//         if (tamp->angka > MAX)
//         {
//             MAX = tamp->angka;
//         }
//         tamp = tamp->next;
//     }
//     printf("Nilai MAX :%d\n", MAX);
//     system("pause");
//     pilih();
// }

// void tambah_by_value()
// {
//     int value;
//     baru = (struct node *)malloc(sizeof(struct node));
//     printf("Masukan Value :");
//     scanf("%d", &value);
//     printf("Masukan Value baru :");
//     scanf("%d", &baru->angka);
//     tamp = head;

//     while (tamp->angka != value)
//     {
//         tamp = tamp->next;
//     }

//     bantu = tamp->next;
//     tamp->next = baru;
//     baru->next = bantu;
//     getch();
//     pilih();
// }

// void ganti_pos()
// {
//     int pos1, pos2, pena1, pena2;
//     struct node *bantu2;
//     tamp = head;
//     printf("Mauskan Posisi Awal :");
//     scanf("%d", &pos1);
//     printf("Masukan Posisi Tujuan :");
//     scanf("%d", &pos2);

//     for (int a = 1; a <= pos1 - 1; a++)
//     {
//         tamp = tamp->next;
//         pena1++;
//         printf("1\n");
//     }
//     bantu = tamp->angka;

//     tamp = head;
//     for (int a = 1; a <= pos2 - 1; a++)
//     {
//         tamp = tamp->next;
//         pena2++;
//         printf("2\n");
//     }
//     bantu2 = tamp->angka;

//     tamp = head;
//     for (int a = 1; a <= pena1; a++)
//     {
//         tamp = tamp->next;
//         printf("3\n");
//     }
//     tamp->angka = bantu2;

//     tamp = head;
//     for (int a = 1; a <= pena2; a++)
//     {
//         tamp = tamp->next;
//         printf("4\n");
//     }
//     tamp->angka = bantu;

//     getch();
//     pilih();
// }

// void hapus()
// {
//     int value;
//     printf("Masukan Value :");
//     scanf("%d", &value);
//     if (head->angka == value)
//     {
//         while (head->angka == value)
//         {

//             tamp = head->next;
//             free(head);
//             head = tamp;
//         }
//     }
//     tamp = head;
//     printf("\n%d", tamp->angka);
//     printf("\n%d ", tamp->next->angka);
//     while (tamp != NULL)
//     {

//         if (tamp->next->angka == value)
//         {
//             printf("0");
//             bantu = tamp->next->next;
//             free(tamp->next);
//             tamp->next = bantu;
//         }
//         tamp = tamp->next;
//     }
//     getch();
//     pilih();
// }

// void hapus_by_index()
// {
//     int index;
//     printf("Masukan Index :");
//     scanf("%d", &index);
//     tamp = head;
//     if (index == 0 && head->next != NULL)
//     {
//         tamp = head->next;
//         free(head);
//         head = tamp;
//     }
//     else if (index == 0 && head->next == NULL)
//     {
//         free(head);
//         head = NULL;
//     }
//     else
//     {
//         for (int a = 0; a < index - 1; a++)
//         {
//             tamp = tamp->next;
//         }
//         bantu = tamp->next->next;
//         free(tamp->next);
//         tamp->next = bantu;
//     }

//     pilih();
// }

// void hapus_dpn()
// {
//     if (head->next == NULL)
//     {
//         free(head);
//         head = NULL;
//     }
//     else
//     {
//         tamp = head->next;
//         free(head);
//         head = tamp;
//     }
//     main();
// }

// void hapus_blakang()
// {
//     tamp = head;
//     if (head->next == NULL)
//     {
//         free(head);
//         head = NULL;
//     }

//     else
//     {
//         while (tamp->next->next != NULL)
//         {
//             tamp = tamp->next;
//         }
//         bantu = tamp->next->next;
//         free(tamp->next);
//         tamp->next = bantu;
//     }

//     main();
// }

// void hapus_tengah()
// {
//     tamp = head;
//     int b;
//     while (tamp != NULL)
//     {
//         tamp = tamp->next;
//         b++;
//     }
//     tamp = head;
//     for (int a = 0; a < b / 2 - 1; a++)
//     {
//         tamp = tamp->next;
//     }
//     bantu = tamp->next->next;
//     free(tamp->next);
//     tamp->next = bantu;
//     pilih();
// }

// void serch()
// {
//     int value, val = 1;
//     tamp = head;
//     printf("Masukan Value :");
//     scanf("%d", &value);

//     while (tamp->angka != value)
//     {
//         tamp = tamp->next;
//         val++;
//     }
//     printf("|%d| Posisi :%d", tamp->angka, val);

//     getch();
//     pilih();
// }

// void edit_tengah()
// {
//     int ingkermen = 1, ing;
//     printf("Masukan Value :");
//     scanf("%d", &baru->angka);
//     tamp = head;

//     while (tamp != NULL)
//     {
//         ingkermen++;
//         tamp = tamp->next;
//     }
//     tamp = head;
//     ing = ingkermen / 2 + 1;
//     for (int a = 1; a < ing; a++)
//     {
//         tamp = tamp->next;
//     }
//     tamp->angka = baru->angka;

//     getch();
//     pilih();
// }

// void tambah_tengah()
// {
//     baru = malloc(0);
//     int inkermen, total;
//     printf("Masukan Value :");
//     scanf("%d", &baru->angka);
//     tamp = head;
//     while (tamp != NULL)
//     {
//         tamp = tamp->next;
//         inkermen++;
//     }
//     tamp = head;
//     total = inkermen / 2;
//     for (int a = 1; a < total; a++)
//     {
//         tamp = tamp->next;
//     }
//     bantu = tamp->next;
//     tamp->next = baru;
//     baru->next = bantu;

//     getch();
//     pilih();
// }

// void hapus_semua_value()
// {
//     bantu = (struct node *)malloc(sizeof(struct node));
//     tamp = head;

//     while (tamp != NULL)
//     {
//         if (tamp->next != NULL)
//         {
//             bantu = tamp->next;
//             free(tamp);
//             tamp = bantu;
//         }
//         tamp = tamp->next;
//     }
//     head = NULL;
//     getch();
//     pilih();
// }

// void tambah_by_index()
// {
//     int index;
//     baru = (struct node *)malloc(sizeof(struct node));

//     printf("Masukan Index :");
//     scanf("%d", &index);
//     printf("Masukan Angka :");
//     scanf("%d", &baru->angka);
//     tamp = head;
//     for (int a = 0; a < index - 1; a++)
//     {
//         tamp = tamp->next;
//     }

//     printf("\n%d", tamp->angka);
//     if (head != NULL && index == 0)
//     {
//         head = baru;
//         baru->next = tamp;
//     }
//     else
//     {
//         bantu = tamp->next;
//         tamp->next = baru;
//         baru->next = bantu;
//     }
//     getch();

//     pilih();
// }

// void hapus_by_value()
// {
//     int value, y;
//     bantu = (struct node *)malloc(sizeof(struct node));
//     printf("Masukan Value :");
//     scanf("%d", &value);

//     tamp = head;
//     bantu = head;
//     if (tamp->angka == value)
//     {
//         tamp = head;
//         head = head->next;
//         free(tamp);
//     }
//     tamp = head;

//     while (tamp->angka != value)
//     {
//         y++;
//         tamp = tamp->next;
//     }
//     tamp = head;
//     for (int a = 0; a < y - 1; a++)
//     {
//         tamp = tamp->next;
//     }
//     bantu = tamp->next->next;
//     free(tamp->next);
//     tamp->next = bantu;

//     getch();
//     pilih();
// }

// void tambah_by_posisi()
// {
//     baru = malloc(0);
//     tamp = head;
//     int pos;
//     printf("Masukan Posisi :");
//     scanf("%d", &pos);
//     printf("Masukan Value :");
//     scanf("%d", &baru->angka);

//     if (head == NULL)
//     {
//         printf("Head Belum Terisi. (Klik Enter Untuk Lanjut)");
//         getch();
//     }
//     else if (pos == 1 && head != NULL)
//     {
//         baru->next = head;
//         head = baru;
//     }
//     else
//     {
//         for (int a = 1; a < pos - 1; a++)
//         {
//             tamp = tamp->next;
//         }
//         bantu = tamp->next;
//         tamp->next = baru;
//         baru->next = bantu;
//     }
//     pilih();
// }

// void update_value()
// {

//     int val = 0;
//     int t, y;
//     struct node *bantu;
//     tamp = head;
//     printf("Masukan Value :");
//     scanf("%d", &val);
//     printf("Masukan Value Baru :");
//     scanf("%d", &baru->angka);
//     // bantu=val;
//     while (tamp != NULL)
//     {

//         if (val == tamp->angka)
//         {
//             tamp->angka = baru->angka;
//         }
//         tamp = tamp->next;
//     }

//     getch();
//     pilih();
// }

// void tambah_blkang()
// {
//     baru = malloc(0);
//     tamp = head;
//     printf("Masukan Data :");
//     scanf("%d", &baru->angka);
//     if (head == NULL)
//     {
//         head = baru;
//         head->next = NULL;
//     }
//     else
//     {
//         while (tamp->next != NULL)
//         {
//             tamp = tamp->next;
//         }
//         tamp->next = baru;
//         baru->next = NULL;
//     }
//     main();
// }

// void hps_blakang()
// {
//     tamp = head;
//     if (head == NULL)
//     {
//         printf("Data Kososng!!!");
//     }
//     else if (head->next == NULL)
//     {
//         free(head);
//         head = NULL;
//     }
//     else
//     {
//         while (tamp->next->next != NULL)
//         {
//             tamp = tamp->next;
//         }
//         free(tamp);
//         tamp->next = NULL;
//     }
//     getch();
//     pilih();
// }

// void tambah_dpn()
// {
//     baru = malloc(0);
//     printf("Masukan Value :");
//     scanf("%d", &baru->angka);
//     if (head == NULL)
//     {
//         head = baru;
//         baru->next = NULL;
//     }
//     else
//     {
//         //    tamp=head;
//         baru->next = head;
//         head = baru;
//     }
//     pilih();
// }

// void pilih()
// {
//     system("cls");
//     tamp = head;
//     while (tamp != NULL)
//     {
//         printf("|%d|->", tamp->angka);
//         tamp = tamp->next;
//     }
//     printf("HASIL  : \n");
//     printf("NULL\n\n");
//     char pil;
//     printf("1. Tambah Depan\n");
//     printf("2. Cetak\n");
//     printf("3. Tambah by posisi\n");
//     printf("4. Update By Value\n");
//     printf("5. Hapus By Value\n");
//     printf("6. Hapus Semua Value\n");
//     printf("7. Tambah By Index\n");
//     printf("8. Tambah Tengah\n");
//     printf("9. Edit Tengah\n");
//     printf("A. Serch By Value\n");
//     printf("B. Hapus Tengah\n");
//     printf("C. Hapus By Index\n");
//     printf("D. Hapus\n");
//     printf("E. Ganti Posisi\n");
//     printf("F. Tambah By Value\n");
//     printf("G. Serch Max Value\n");
//     printf("H. Tambah Blakang\n");
//     printf("I. Mencari Bilangan Prima\n");
//     printf("J. Hapus Tengah\n");
//     printf("K. Mencari Average\n");
//     printf("L. Tambah All\n");
//     printf("M. Hapus Dpean\n");
//     printf("N. Hapus Blakang\n");

//     printf("\n\nMasukan Pilihan : ");
//     scanf("%c",&pil);
    
//     switch (pil)
//     {
//     case '1':
//         tambah_dpn();
//         break;

//     case '2':
//         break;

//     case '3':
//         tambah_by_posisi();
//         break;
//     case '4':
//         update_value();
//         break;

//     case '5':
//         hapus_by_value();
//         break;

//     case '6':
//         hapus_semua_value();
//         break;

//     case '7':
//         tambah_by_index();
//         break;

//     case '8':
//         tambah_tengah();
//         break;

//     case '9':
//         edit_tengah();
//         break;

//     case 'A':
//         serch();
//         break;

//     case 'B':
//         hapus_tengah();
//         break;

//     case 'C':
//         hapus_by_index();
//         break;

//     case 'D':
//         hapus();
//         break;

//     case 'E':
//         ganti_pos();
//         break;

//     case 'F':
//         tambah_by_value();
//         break;

//     case 'G':
//         serchMax();
//         break;

//     case 'H':
//         tambah_blkang();
//         break;

//     case 'I':
//         mencari_bilangan_prima();
//         break;

//     case 'J':
//         Hapus_tengah();
//         break;

//     case 'K':
//         serch_average();
//         break;

//     case 'L':
//         tambah_all();
//         break;

//     case 'M':
//         hapus_dpn();
//         break;

//     case 'N':
//         hps_blakang();
//         break;

//     default:
//         pilih();
//         break;
//     }
// }


// void main()
// {
//     pilih();

//     getch();
// }




/////////////////////////////////////  VERSI KELOMPOK ALAWAK  /////////////////////////////

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

void print();
void cetak();
void tambahDepan();
void tambahBelakang();
void tambahTengah();
void tambahByIndex();
void tambahByValue();
void deleteDepan();
void Delete();
void deleteBelakang();
void deleteTengah();
void deleteByIndex();
void deleteByValue();
void tambah();

int data, value;
char pilih;

struct node
{
    int number;
    struct node *next;
} *head, *new, *check, *buff,*buff1;

void print()
{
    check = head;
    while (check != NULL)
    {
        printf("|%d| -> ", check->number);
        check = check->next;
    }
    printf("NULL\n");
}

void cetak()
{

    printf("\nMASUKKAN ANGKA:");
    scanf("%d", &data);
}

void tambahDepan()
{
    cetak();
    new = malloc(0);
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
}

void tambahBelakang()
{
    cetak();
    new = malloc(0);
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
}

void tambahTengah()
{
    cetak();
    int tam = 0;
    new = malloc(0);
    check = head;
    new->number = data;
    while (check != NULL)
    {
        tam++;
        check = check->next;
    }
    tam /= 2;
    check = head;
    for (int a = 1; a < tam; a++)
    {
        check = check->next;
    }
    buff = check->next; 
    check->next = new;
    new->next = buff;
}

void tambahByIndex()
{
    int indeks;
    int tamp = 0;
    cetak();
    printf("\nMasukan Indeks : ");
    scanf("%d", &indeks);
    new = malloc(0);
    new->number = data;
    check = head;
    while (check->next != NULL)
    {
        check = check->next;
        tamp++;
    }

    check = head;
    if (indeks == 0)
    {
        new->next = head;
        head = new;
    }
    else if (indeks > tamp)
    {
        printf("Indeks Yang Anda Masukan Salah !!!");
    }
    else
    {
        for (int a = 0; a < indeks - 1; a++)
        {
            check = check->next;
        }
        buff = check->next; 
        check->next = new;
        new->next = buff;    
    }
}
void tambahByValue()
{
    cetak();
    new = malloc(0);
    new->number = data;
    if (head == NULL)
    {
        head = new;
        head->next = NULL;
    }
    else
    {
        check = head;
        printf("\nmasukkan value:");
        scanf("%d", &value);
        while (check != NULL)
        {
            if (check->number == value)
            {
                buff = check->next;
                check->next = new;
                new->next = buff;
            }
            check = check->next;
        }
    }
}

void deleteDepan()
{
    check = head;
    if (head == NULL)
    {
        printf("\nData Kosong\n");
        getch();
    }
    else
    {
        check = head;
        head = head->next;
        // free(check);
    }
}

void deleteBelakang()
{
    check = head;
    if (head == NULL)
    {
        printf("\nData Kosong\n");
        getch();
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
            while (check->next->next != NULL)
            {
                check = check->next;
            }
            check->next = NULL;
        }
    }
}

void deleteTengah()
{

    check = head;
    if (head == NULL)
    {
        printf("\nData Kosong\n");
        getch();
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
}

void deleteByIndex()
{
    int index;
    check = head;
    if (head == NULL)
    {
        printf("\nData Kosong\n");
        getch();
    }
    else
    {
        printf("\nmasukan index: ");
        scanf("%d", &index);
        if (head->next == NULL)
        {
            head = NULL;
        }
        else
        {
            check = head;
            for (int a = 1; a < index; a++)
            {
                check = check->next;
            }
            buff = check->next->next;
            //  free(tam->next);
            check->next = buff;
        }
    }
}

void deleteByValue()
{
    int tam;
    if (head == NULL)
    {
        printf("Data Kosong\n");
    }
    else if(head->next == NULL)
    {
        // free(head);
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
}


void main()
{

    printf("================================================================\n");
    printf("=====================>>LINKED LIST<<============================\n");
    printf("================================================================\n");
    print();
    printf("=================================================================\n");
    printf("1.tambah\n2.hapus\n3.keluar program\n");
    printf("=================================================================");
    printf("\nMASUKKAN PILIH:");
    do
    {
        pilih = getch();
        if (pilih == '1')
        {
            system("cls");
            tambah();
        }
        else if (pilih == '2')
        {
            system("cls");
            Delete();
        }
        else
        {
            exit(0);
        }
    } while (pilih != 3);

    getch();
}

void tambah()
{
    printf("================================================================\n");
    printf("=====================>>LINKED LIST TAMBAH<<=====================\n");
    printf("================================================================\n");
    print();
    printf("================================================================\n");
    printf("1.Tambah depan\n2.Tambah belakang\n3.Tambah tengah\n4.Tambah index\n5.tambah value\n6.keluar\n");
    printf("================================================================\n");
    printf("MASUKKAN PILIH:");
    pilih = getche();
    switch (pilih)
    {
    case '1':
        tambahDepan();
        break;
    case '2':
        tambahBelakang();
        break;
    case '3':
        tambahTengah();
        break;
    case '4':
        tambahByIndex();
        break;
    case '5':
        tambahByValue();
        break;
    case'6':
    system("cls");
    main();
    }
    system("cls");
    main();
}
void Delete()
{
    system("cls");
    printf("=============================================================\n");
    printf("=====================>>LINKED LIST TAMBAH<<==================\n");
    printf("=============================================================\n");
    print();
    printf("===============================================================\n");
    printf("1.Delete depan\n2.Delete belakang\n3.Delete tengah\n4.Delete index\n5.delete value\n6.keluar\n");
    printf("=============================================================\n");
    printf("\nMASUKKAN PILIH:");
    pilih = getche();
    switch (pilih)
    {
    case '1':
        deleteDepan();
        break;
    case '2':
        deleteBelakang();
        break;
    case '3':
        deleteTengah();
        break;
    case '4':
        deleteByIndex();
        break;
    case '5':
        deleteByValue();
        break;
    case '6':
        system("cls");
        main();
    }
    system("cls");
    main();
}


////////////////////////////  VERSI RAKSA ARYASATYA  //////////////////////////////

// #include<stdio.h>
// #include<conio.h>

// struct node
// {
//     int angka;

//     struct  node *next;    
// } *head, *baru, *cek, *tamp, *bantu, *pen, *hapus; 

// void tambah_belakang(){
//     baru = malloc(0);
//     printf("Input Nilai : ");scanf("%d", &baru -> angka);
//     if(head == NULL){
//         head = baru;
//         baru -> next = NULL;
//     }else{
//         tamp = head;
//         while(tamp -> next != NULL){
//             tamp = tamp -> next;
//         }
//         tamp -> next = baru;
//         baru -> next = NULL;
//     }
//     main();
// }

// void tambah_by_index(){
//     int ind;
//     int jumlah = 1;
//     baru = malloc(0);
//     if(head == NULL){
//         printf("Inputan Masih Kosong");
//         printf("\n");
//         system("pause");
//         main();
//     }else{
//         printf("Input Index : ");scanf("%d", &ind);
//         tamp = head;
//         while( jumlah < ind ){
//             tamp = tamp -> next;
//             jumlah++;
//         }
//         printf("Masukkan Nilai : ");scanf("%d", &baru->angka);
//         bantu = tamp -> next;
//         tamp -> next = baru;
//         baru -> next = bantu;
//     }
//     main();
// }

// void tambah_by_value(){
//     int nilai;

//     printf("Input Value : ");scanf("%d", &nilai);
//     baru = malloc(0);
//     tamp = head;
//     while(tamp != NULL){
//         if(tamp -> angka == nilai){
//             printf("Input Nilai : ");scanf("%d", &baru->angka);
//             bantu = tamp -> next;
//             tamp -> next = baru;
//             baru -> next = bantu;
//             break;
//         }else if(tamp -> angka != nilai){   
//             tamp = tamp -> next;
//             if(tamp == NULL){
//             printf("Value Tidak Ditemukan !");
//             printf("\n");
//             system("pause");
//             }
//         }
//     }
//     main();
// }

// void tambah_tengah(){
//     int jumlah = 1;
//     int hasil;
//     int i=1;
    
//     if(head->next == NULL){
//         printf("Minimal 3 Values !");
//         printf("\n");
//         system("pause");
//         main();
//     }else if(head -> next -> next == NULL){
//         printf("Minimal 3 Values !");
//         printf("\n");
//         system("pause");
//         main();
//     }else{
//         baru = malloc(0);
//         tamp = head;
//         while(tamp -> next != NULL){
//             tamp = tamp -> next;
//             jumlah++;
//         }
//         if(jumlah%2==1){
//             jumlah++;
//         }
//         hasil = jumlah / 2;
//         tamp = head;
//         while(i < hasil){
//             i++;
//             tamp = tamp -> next;
//         }
//         printf("Masukan Nilai : ");scanf("%d", &baru->angka);
//         bantu = tamp -> next;
//         tamp -> next = baru;
//         baru -> next = bantu;
//         main();
//     }
// }


// void hapus_by_index(){
//     int ind;
//     int i = 1;

//     tamp = head;
//     printf("Input Index : ");scanf("%d", &ind);
//     ind--;
//     while(i < ind){
//         tamp = tamp -> next;
//         i++;
//     }
//     if(head -> next == NULL){
//         free(head);
//         head = NULL;
//     }else{
//         if(ind == 0){
//             tamp = head -> next;
//             bantu = head -> next -> next;
//             free(head);
//             head = tamp;
//         }else{
//             hapus = tamp -> next;
//             bantu = tamp -> next -> next;
//             free(hapus);
//             tamp -> next = bantu;
//         }
//     }
//     main();
// }

// void hapus_by_value(){
//     int nilai;
//     int i = 1, jumlah = 1;
//     baru = malloc(0);
//     printf("Input Value : ");scanf("%d", &nilai);
//     tamp = head;
//     while( tamp != NULL){
//         if(tamp -> angka == nilai){
//             break;
//         }else{
//             tamp = tamp -> next;
//             jumlah++;
//             if(tamp == NULL){
//             printf("Value Tidak Ditemukan");
//             printf("\n");
//             system("pause");
//             }
//         }
//     }
//     jumlah--;
//     tamp = head;
//     while(i < jumlah){
//         tamp = tamp -> next;
//         i++;
//     }
//     if(tamp -> next == NULL){
//         free(head);
//         head = NULL;
//     }else{
//         if(jumlah == 0){
//             tamp = head -> next;
//             free(head);
//             head = tamp;
//         }else{
//             hapus = tamp -> next;
//             bantu = tamp -> next -> next;
//             free(hapus);
//             tamp -> next = bantu;
//         }
//     }
//     main();
// }

// void hapus_tengah(){
//     int jumlah = 1;
//     int hasil = 0;
//     int i = 1;

//     if(head->next == NULL){
//         printf("Minimal 3 Values !");
//         printf("\n");
//         system("pause");
//         main();
//     }else if(head -> next -> next == NULL){
//         printf("Minimal 3 Values !");
//         printf("\n");
//         system("pause");
//         main();
//     }else{
//         tamp = head;
//         while(tamp -> next != NULL){
//             jumlah++;
//             tamp = tamp -> next;
//         }
//         hasil = jumlah / 2;
//         tamp = head;
//         while(i < hasil){
//             tamp = tamp -> next;
//             i++;
//         }
//         hapus = tamp -> next;
//         bantu = tamp -> next -> next;
//         tamp -> next = bantu;
//         main();
//     }
// }

// void main(){
//     int pilih;
//     tamp = head;
//     system("cls");
//     while(tamp != NULL){
//         printf("%d -> ", tamp -> angka);
//         tamp = tamp -> next;
//     }
//     printf("NULL\n\n");
//     printf("PILIHAN :");
//     printf("\n1. Tambah Belakang\n2. Tambah By Index\n3. Tambah By Value\n4. Tambah Tengah\n5. Hapus By Index\n6. Hapus By Value\n7. Hapus Tengah\n");
//     printf("Pilih : ");scanf("%d", &pilih);
//     switch(pilih)
//     {
//         case 1 :
//         tambah_belakang();
//         break;
//         case 2 :
//         tambah_by_index();
//         break;
//         case 3 : 
//         tambah_by_value();
//         break;
//         case 4 : 
//         tambah_tengah();
//         break;
//         case 5 : 
//         hapus_by_index();
//         break;
//         case 6 :
//         hapus_by_value();
//         case 7 :
//         hapus_tengah();
//         break;
//         default:
//         printf("Tidak Ada Pilihan");

//     }
// }