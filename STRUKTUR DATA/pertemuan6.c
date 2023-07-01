//////////////   STACK   ///////////////////
#include <stdio.h>
#include <conio.h>
#define max 10
#include <windows.h>

void main();

int stack[max];
int posisi = -1;

int isFull();
int isEmpty();

void push(int data){
    if(isFull() == 1 ){
        system("cls");
        printf("PENUH \n");
    }else{
        system("cls");
        posisi++;
        stack[posisi]=data;
        printf("ANGKA %d TELAH DIMASUKKAN \n\n", stack[posisi]);
    }
    main();
}

void pop(){
    if(isEmpty() == 1){
        system("cls");
        printf("STACK KOSONG \n");
    }else{
        system("cls");
        printf("ANGKA %d DIHAPUS \n", stack[posisi]);
        posisi--;
    }
    main();
}

// Isfull nyambung ke PUSH indeknya > 0 && < 10
int isFull(){
    if(posisi == max - 1){
        return 1;
    }else{
        return 0;
    }

}

// IsEmpty nyambung ke POP indeksnnya <0
int isEmpty(){
    if (posisi == -1){
        return 1;
    }else{
        return 0;
    }
}

void tampil(){
    if(isEmpty() == 1){
        system("cls");
        printf("DATA TIDAK BISA DITAMPILKAN/KOSONG\n");
    }else{
        system("cls");
        for(int a=posisi; a>=0; a--){
            printf("|%d|\n", stack[a]);
        }printf("\n");
    }
    main();
}
   
void clear(){
    posisi = -1;
    system("cls");
    printf("STACK HAS BEEN CLEARED\n");
    main();
}

void main(){
    int input,batas,pilih = 0;
    while (pilih != 4)
    {
    
        printf("Pilihan : ");
        printf("\n1. Push\n2. Pop\n3. Tampil\n4. Clear\n5. Keluar\nPilih : ");
        scanf("%d",&pilih);
        if (pilih == 1)
        {
            printf("INPUT DATA : "); scanf("%d", &input);
            push(input);    
        }
        else if (pilih == 2)
        {
            pop();
        }
        else if (pilih == 3)
        {
            tampil(); 
        }else if (pilih == 4)
        {
            clear();
        }
    }
    getch();
}
