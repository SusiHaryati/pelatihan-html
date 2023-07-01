////////////////// PENGENALAN STRUKTUR DATA ///////////////

#include<conio.h>
#include<stdio.h>
#include<windows.h>

// struct Mahasiswa{
//     char *nama;
//     char *alamat;
//     int umur;
// };

// void main(){
//     struct Mahasiswa mhs1, mhs2;

//     mhs1.nama="Susi";
//     mhs1.alamat="Bandung";
//     mhs1.umur=18;

//     mhs2.nama="Cupittt";
//     mhs2.alamat="Medan";
//     mhs2.umur=18;
    
//     printf("=== Mahasiswa ===\n");
//     printf("Nama : %s\n",mhs1.nama);
//     printf("Alamat : %s\n",mhs1.alamat);
//     printf("Umur  : %d\n\n",mhs1.umur);

//     printf("Nama : %s\n",mhs2.nama);
//     printf("Alamat :%s\n",mhs2.alamat);
//     printf("Umur  : %d\n",mhs2.umur);
    
//     getch();
// }

// struct Siswa{
//     char *nama;
//     int nim;
//     char prodi[100];
// } integer;//Cara A

// struct Siswa integer; Cara B

// void main(){

//     integer.nama="Susi Haryati";
//     integer.nim=02042211023;
//     strcpy(integer.prodi,"D3 MI");

//     printf("\nNama  : %s",integer.nama);
//     printf("\nNIM   : %d",integer.nim);
//     printf("\nProdi : %s",integer.prodi);

//     getch();
// }

// struct Siswa{
//     char *nama;
//     int nilai;
// } integer[100];


// void main(){
//     int batas,total=0,mean;

//     printf("Banyak mahasiswa : "); scanf("%d",&batas);

//     for(int a=0; a<batas; a++){
//         printf("Mahasiwa %d\n",a+1);
//         printf("Nama : "); scanf("%s",&integer[a].nama);
//         printf("Nilai : "); scanf("%d",&integer[a].nilai);
//         total += integer[a].nilai;
//     }

//     mean =total/batas;
//     printf("Rata rata  : %d",mean);

//     getch();
// }

// struct persegi
// {
//    int sisi;
// };

// int hitungluas(struct persegi x){
//     return x.sisi * x.sisi;
// }

// void main(){
//     struct persegi LuasTanah;
//     LuasTanah.sisi=10;

//     int luas = hitungluas(LuasTanah);
//     printf("Luas Tanahku %d M",luas);
   
//    getch();
// }

// #include<conio.h>
// #include<stdio.h>
// #include<windows.h>

// struct segitiga
// {
//    int alas;
//    int tinggi;
// };

// int hitungluas(struct segitiga x){
//     return x.alas * x.tinggi/2;
// }

// void main(){
//     struct segitiga LuasSegi;
//     printf("Masukan alas : "); scanf("%d",&LuasSegi.alas);
//     printf("Masukan tinggi : "); scanf("%d",&LuasSegi.tinggi);
//     // LuasSegi.alas=10;
//     // LuasSegi.tinggi=3;

//     int luas = hitungluas(LuasSegi);
//     printf("Luas Segitiga %d M",luas);
   
//    getch();
// }

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct siswa
{
   char nama[100];
   int kelas;
    struct nmpel
    {
        char mapel[100];
        int nilai;
    }mpl[5];
    
}sw[5];

int jmlh;
char nama[100];
int tamp=0,tam=0;

void menginput();
void menampilkan();
void mengabdate();

void main(){
    menginput();

    getch();

}

void menginput()
{
   printf("masukan jumlah data :"); scanf("%d",&jmlh);
    getchar();
    for(int a=0; a<jmlh; a++)
    {
        printf("nama:"); gets(sw[a].nama);
        printf("kelas:"); scanf("%d",&sw[a].kelas);
        getchar();
        for(int b=0; b<2; b++){
            printf("mata pelajaran:"); gets(sw[b].mpl[b].mapel);
            printf("nilai siswa:"); scanf("%d",&sw[b].mpl[b].nilai);
            getchar();
        }printf("\n");
        
    }printf("\n");
    menampilkan();
}

void menampilkan()
{
    for(int a=0; a<jmlh; a++){
        printf("nama:%s\n",sw[a].nama);
        printf("kelas:%d\n",sw[a].kelas);
        for(int b=0; b<2; b++){
            printf("mata pelajaran:%s\n",sw[b].mpl[b].mapel);
            printf("nilai siswa:%d\n",sw[b].mpl[b].nilai);
        }printf("\n");
    }
    mengabdate();
}

void mengabdate(){
    
    printf("nama yang mau di inputkan:"); gets(nama);
    for(int i=0; i<jmlh; i++){
        if(strcmp(nama,sw[i].nama)==0)
        {
            tamp++;
            tam=i;
        }
    }


    if(tamp!=0){
        
        printf("nama:"); gets(sw[tam].nama);
        printf("kelas:"); scanf("%d",&sw[tam].kelas);
        getchar();
        for(int b=0; b<2; b++){
            printf("mata pelajaran:"); gets(sw[tam].mpl[b].mapel);
            printf("nilai siswa:"); scanf("%d",&sw[tam].mpl[b].nilai);
            getchar();
        }printf("\n");
        

    for(int a=0; a<jmlh; a++){
        printf("nama:%s\n",sw[a].nama);
        printf("kelas:%d\n",sw[a].kelas);
        for(int b=0; b<2; b++){
            printf("mata pelajaran:%s\n",sw[b].mpl[b].mapel);
            printf("nilai siswa:%d\n",sw[b].mpl[b].nilai);
        }printf("\n");
    }

    }

    else{
        printf("inputan tidak tersedia!!");
    }
}
