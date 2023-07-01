// #include<conio.h>
// #include<stdio.h>
// #include<windows.h>

// //No.1
// // struct Toko
// // {
// //    int harga;
// //    char *barang;
// // }Tulis[50];

// // void main()
// // {
// //     int total,batas;

// //     printf("Jumlah barang yang akan dibeli : "); scanf("%d",&batas);

// //     for(int a=0; a<batas; a++)
// //     {
// //         printf("\nBarang ke- %d\n",a+1);
// //         printf("Barang : "); scanf("%s",&Tulis[a].barang);
// //         printf("Harga : "); scanf("%d",&Tulis[a].harga);
// //         total+=Tulis[a].harga;
// //     }

// //     printf("Total Bayar : %d",total);
   
// //     getch();
// // }


// //No.2
// // struct Nilai
// // {
// //    char *nama;
// //    int nilai_math;
// //    int nilai_english;
// // };

// // void main()
// // {
// //     struct Nilai Siswa1, Siswa2;

// //     Siswa1.nama="Susi Haryati";
// //     Siswa2.nama="Khalisyah";
   
// //     printf("\n>>>>> NILAI SISWA <<<<<\n");
// //     printf("\nNama Siswa : %s",Siswa1.nama);
// //     printf("\nNilai Matematika : "); scanf("%d",&Siswa1.nilai_math);
// //     printf("Nilai Inggris : "); scanf("%d",&Siswa1.nilai_english);

// //     printf("\n\nNama Siswa : %s",Siswa2.nama);
// //     printf("\nNilai Matematika : "); scanf("%d",&Siswa2.nilai_math);
// //     printf("Nilai Inggris : "); scanf("%d",&Siswa2.nilai_english);

    
// //     getch();
// // }


// //NO.3
// // struct Tanggal{
// //     int hari;
// //     int minggu;
// //     int bulan;
// //     int tahun;    
// // };

// // void main()
// // {
// //     struct Tanggal Hitung_hari;
// //     int total;

// //     printf("Masukan Hari : "); scanf("%d",&Hitung_hari.hari);
// //     printf("Masukan Minggu : "); scanf("%d",&Hitung_hari.minggu);
// //     printf("Masukan Bulan : "); scanf("%d",&Hitung_hari.bulan);

// //     Hitung_hari.hari=(Hitung_hari.bulan*30)+(Hitung_hari.minggu*7)+Hitung_hari.hari;
// //     total = Hitung_hari.hari;

// //     Hitung_hari.tahun= Hitung_hari.hari/365;
// //     Hitung_hari.bulan= Hitung_hari.hari%365/30;
// //     Hitung_hari.minggu=Hitung_hari.hari%365%30/7;
// //     Hitung_hari.hari=Hitung_hari.hari%30%7/1;

// //     printf("\n%d Tahun %d Bulan %d Minggu %d Hari",Hitung_hari.tahun,Hitung_hari.bulan,Hitung_hari.minggu,Hitung_hari.hari);

// //     printf("\nTotal Hari %d",total);

// //     getch();
// // }


// //NO.4
// // struct Sepatu
// // {
// //     char nama[50];
// //     char merek[50];
// //     int ukuran;
// // };

// // void main()
// // {
// //     struct Sepatu Sepatu1, Sepatu2;
    
// //     strcpy(Sepatu1.nama,"Susi Haryati");
// //     strcpy(Sepatu1.merek,"ADIDAS");
// //     Sepatu1.ukuran=38;

// //     strcpy(Sepatu2.nama,"Fadilla");
// //     strcpy(Sepatu2.merek,"NIKE");
// //     Sepatu2.ukuran=37;

// //     printf(">>>>> KEPEMILIKAN SEPATU <<<<<");

// //     printf("\nPemilik : %s",strupr(Sepatu1.nama));
// //     printf("\nMerek   : %s",strlwr(Sepatu1.merek));
// //     printf("\nUkuran  : %d",Sepatu1.ukuran);

// //     printf("\nPemilik : %s",strupr(Sepatu2.nama));
// //     printf("\nMerek   : %s",strlwr(Sepatu2.merek));
// //     printf("\nUkuran  : %d",Sepatu2.ukuran);

// //     getch();
// // }

// //NO.5
// struct Mahasiswa
// {
//     char nama[30];
//     char prodi[50];
//     struct NamaMapel
//     {
//        char matkul[25];
//        int nilai;
//     }Nilmatkul[10];
    
// }Mhs[10];

// void main()
// {
//     int data,tamp=0,rata;

//     printf("Masukan Jumlah Data : "); scanf("%d",&data);
//     getchar();
//     for(int a=0; a<data; a++)
//     {
//         printf("Nama Mahasiswa : "); gets(Mhs[a].nama);
//         printf("Program Studi  : "); gets(Mhs[a].prodi);
//         for(int b=0; b<3; b++)
//         {
            
//             printf("Mata Kuliah : "); gets(Mhs[b].Nilmatkul[b].matkul);
//             printf("Nilai Matkul: "); scanf("%d",&Mhs[b].Nilmatkul[b].nilai);
//             getchar();
//             tamp+=Mhs[b].Nilmatkul[b].nilai;
//         }
//         rata = tamp/3;
//         printf("Nilai Rata rata : %d",rata);
//         tamp=0;
//         printf("\n\n");
//     }

//     getch();
// }



////////////// JAWABAN SOAL UTS KEMARIN //////////////

#include <conio.h>
#include <stdio.h>
#include <windows.h>

// struct mahasiswa{
//     float nilai_indo,nilai_mate,nilai_ingg;
//     char nama[50];
//     char jurusan[25];
//     float rata;
// }nilai_mhs[10];

// void main()
// {
    
//     for(int a=0; a<3; a++)
//     {
//         getchar();
//         printf("Masukan Nama : "); gets(nilai_mhs[a].nama);
//         printf("Masukan Jurusan : "); gets(nilai_mhs[a].jurusan);
//         printf("Nilai Indonesia : "); scanf("%f",&nilai_mhs[a].nilai_indo);
//         getchar();
//         printf("Nilai Inggris : "); scanf("%f",&nilai_mhs[a].nilai_ingg);
//         printf("Nilai Matematika : "); scanf("%f",&nilai_mhs[a].nilai_mate);
        
//         nilai_mhs[a].rata =(nilai_mhs[a].nilai_indo + nilai_mhs[a].nilai_ingg+nilai_mhs[a].nilai_mate)/3;
//     }
     
//     for(int b =0; b<3; b++){
//         printf("Nama : %s",nilai_mhs[b].nama);
//         printf("Jurusan : %s",nilai_mhs[b].jurusan);
//         printf("Rata-rata : %.2f",nilai_mhs[b].rata); 
//     }

//     getch();
// }


// struct pegawai{
//     char nama[30];
//     int hari,gj_hari,gj_bulan;
// }gajiku[5];

// void main()
// {
//     for(int a=0; a<3; a++)
//     {
//         getchar();
//         printf("Nama : "); gets(gajiku[a].nama);
//         printf("Hari kerja/hari : "); scanf("%d",&gajiku[a].hari);
//         getchar();
//         printf("Gaji/hari : "); scanf("%d",&gajiku[a].gj_hari);
//         gajiku[a].gj_bulan = gajiku[a].hari*gajiku[a].gj_hari;
//     }    

//     for(int b=0; b<3; b++)
//     {
        
//         printf("\nNama : %s",gajiku[b].nama);
//         printf("\nGaji/bulan : %d",gajiku[b].gj_bulan);
//         getchar();
//     }

//     getch();
// }


// struct node{
//     int number;
//     struct node *next;
// }*head,*new,*check,*buff;

// void tampil()
// {
//     check =head;
//     while(check != NULL)
//     {
//         printf("|%d| -> ",check->number);
//         check = check->next;
//     }
//     printf("NULL\n");
// }

// void tambahdepan()
// {
//     int data;
//     printf("Masukan Data : "); scanf("%d",&data);
//     new = malloc(0);
//     new->number = data;
//     if(head == NULL)
//     {
//         new->next= head;
//         head = new;
//     }
//     else{
//         new->next = head;
//         head = new;
//     }
//     tampil();
// }

// void tambahposisi()
// {
//     int data,tamp=0;
//     printf("Masukan Data : "); scanf("%d",&data);
//     new = malloc(0);
//     new->number = data;
//     check = head;
//     while(check != NULL)
//     {
//         tamp++;
//         check=check->next;
//     }
//     if(head == NULL)
//     {
//        head = new; 
//        head->next = NULL;
        
//     }
//     else if(tamp <= 2)
//     {
//         new->next = head;
//         head = new;
//     }
//     else{
//         check = head;
//         tamp= tamp-3;
//         for(int i = 0; i<tamp; i++)
//         {
//             check = check->next;
//         }
//         // while (check->next->next->next != NULL)
//         // {
//         //     check = check->next;
//         // }
//     buff=check->next;
//     check->next = new;
//     new->next = buff;
//     }
//     tampil();
// }

// void main()
// {
//     tambahposisi();
//     tambahposisi();
//     tambahposisi();
//     tambahposisi();
//     tambahposisi();

//     getch();
// }

// struct node{
//     int number;
//     struct node *next;
//     struct node *prev;
// }*head,*tail,*new,*check,*buff;

// void main();

// void tampil_depan()
// {
//     check = head;
//     while(check != NULL)
//     {
//         printf("|%d| -> ",check->number);
//         check = check->next;
//     }
//     printf("NULL\n");
// }

// void tampil_belakang(){
//     check = tail;
//     while (check != NULL)
//     {
//         printf("|%d| -> ",check->number);
//         check = check->prev;
//     }
//     printf("NULL\n");
//     main();
// }

// void tambah_depan(int data)
// {
//     new = malloc(0);
//     new->number = data;
//     if(head == NULL)
//     {
//         tail = head;
//         head = tail = new;
//     }
//     else{
//         new->next = head;
//         head->prev = new;
//         head =new;
//     }
//     head->prev = NULL;
//     tail->next = NULL;
//     tampil_depan();
//     tampil_belakang();
// }

// void tambah_belakang(int data){
    
//     new = malloc(0);
//     new->number = data;
//     if(head == NULL){
//         head = tail = new;
//     }
//     else{
//         tail->next = new;
//         new->prev = tail;
//         tail = new;
//     }
//     head->prev = NULL;
//     tail->next = NULL;
//     tampil_depan();
//     tampil_belakang();
// }

// void hapus_belakang()
// {
    
//     check = tail;
//     if(check == NULL){
//         printf("Data Kosong");
//     }
//     else
//     {
//         tail = tail->prev;
//         // free(check);
//     }
//     head->prev=NULL;
//     tail->next = NULL;
//     tampil_depan();
//     tampil_belakang();
// }

// void main(){
//     int input;
//     printf("\nPilih genap (tambah depan)\n Pilih ganjil (tambah belakang)\n Pilih 0 (hapus belakang)\nPilih -1 (exit)");
//     printf("\nMasukan Pilihan : "); scanf("%d",&input);
//     if(input%2 == 0 && input != 0)
//     {
//         tambah_depan(input);
//     }
//     else if(input%2 ==1)
//     {
//         tambah_belakang(input);
//     }
//     else if(input == 0)
//     {
//         hapus_belakang();
//     }
//     else if(input == -1)
//     {
//         exit(0);
//     }

//     getch();
// }

int antrian[5];
int ind = -1;

void enqueue(){
    int data;
    printf("Masukan data : "); scanf("%d",&data);
    if(isFull() == 1)
    {
        printf("Antrian Penuh");
    }
    else{
        ind++;
        antrian[ind] = data;
        printf("%d Telah Di Masukan",antrian[ind]);
    }
}


void dequeue()
{
    if(isEmpty() == 1)
    {
        printf("Antrian Kosong");
    }
    else{
        printf("%d Telah Di Hapus",antrian[ind]);
        for(int a=0; a<ind; a++)
        {
            antrian[a] = antrian[a+1];
        }
        ind--;
    }
}

int isEmpty()
{
    if(ind == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int isFull()
{
    if(ind == 5-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void push()
{
    int data;
    printf("Masukan Data : "); scanf("%d",&data);
    if(isfull() == 1)
    {
        printf("Stack Penuh");
    }
    else{
        ind++;
        stack[ind] = data;
        printf("%d Telah Di Masukan",stack[ind]);
    }
}

void pop()
{
    if(isEmpty() == 1)
    {
        printf("Satack Kosong");
    }
    else{
        printf("%d Telah Di Hapus",stack[ind]);
        ind--;
    }
}

void tampil_stack()
{
    for(int a = ind; a>=0; a--)
    {
        printf("|%d|\n",stack[a]);
    }
}

void tampil_queue()
{
    for(int a=0; a<= ind; a++)
    {
        printf("|%d|\n",antrian[a]); 
    }
}