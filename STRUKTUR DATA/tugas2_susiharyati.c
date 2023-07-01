#include<conio.h>
#include<stdio.h>
#include<windows.h>

// // Tugas Ngulik
// void main()
// {
//     // int a =2;
//     // int *b = &a;
//     // printf("%d\n",b);

//     // Kalo var pointer pemanggilannya gausah pake & langsung nama var nya aja
//     // Kalo dia pointer cara nampilinnya printf("%d\n",b); dia ngecetak alamat
    
//     // int a =2;
//     // int *b ;
//     // b = &a;
//     // printf("%d\n",&b);

//     // Ngecetak nilai apabila diawali dengan *
//     // Ngecetak Alamat apabila diawali dengan &

//     int a = 2;
//     int b =&a;
//     printf("%d\n",*&b);
//     // Kalo variabel biasa terus pemanggilannya printf("%d\n",&a); ada warning dan mencetak alamat
//     // Kalo variabel biasa terus pemanggilannya printf("%d\n",*a); akan eror

//     getch();
// }

// Program Perhitungan (1)

// int hitung(int *z){
//     return (*z) + (*z) + (*z);
// }

// void main(){
//     int a, b, *c;
//     a = 2; 
//     b = 1; 
//     c = &b; 
//     b = a;
//     // a = *c;
//     // hitung(c);
//     printf("hasil   = %d\n",hitung(&a));
//     printf("Nilai c = %d",c);
//   getch();
// }

// Program Perhitungan (2)

// int hitung_luas(int *a, int *t)
// {
//     return *a * *t / 2;
// }


// void main()
// {
//     int tinggi , alas;

//     printf("Masukan Tinggi : "); scanf("%d",&tinggi);
//     printf("Masukan Alas   : "); scanf("%d",&alas);

//     printf("Luas : %d",hitung_luas(&tinggi,&alas));

//     getch();
// }

// Program Hitung (3)
void kecepatan (int *a, int *b, int *rata)
{
    *rata = *a / *b ;
}

void main ()
{
 int jarak, waktu, rata = 0;
 
 printf ("Menghitung Rata-Rata Kecepatan Mobil\n\n");
 printf ("Masukan Jarak Tempuh (KM) : ");
 scanf ("%d",&jarak);
 printf ("Masukan Waktu Tempuh (Jam) : ");
 scanf ("%d",&waktu);
 kecepatan (&jarak, &waktu, &rata);
 printf ("Kecepatan rata-rata = %d KM/Jam", rata);

 getch();
}
