#include <stdio.h>
#include <conio.h>
#include <windows.h>

struct node{
    int number;
    struct node *next;
}*head,*new,*check,*bantu;

void print(){
    check = head;
    while(check != NULL){
        printf("| %d | -->  ", check -> number);
        check = check -> next;
    }
    printf("NULL\n");
}

void tambah_depan(int data){
    new = malloc(0);
    new -> number = data;

    if(head == NULL){
        head = new;
        head -> next = NULL;
    }
    else{
        new -> next = head;
        head = new;
    }
}

void tambah_belakang(int data){
    new = malloc(0);
    new -> number = data;
    if(head == NULL){
        head = new;
        head -> next = NULL;
    }
    else{
        check = head;
        while(check -> next != NULL){
            check = check -> next;
        }
        check -> next = new;
        new -> next = NULL;
    }
}

void tambah_tengah(int data){
    int jlh = 0;
    new = malloc(0);
    new -> number = data;

    if(head == NULL){
        head = new;
        head -> next = NULL;
    }
    else{
        check = head;
        while(check != NULL){
            check = check -> next;
            jlh++;
        }
        if(jlh % 2 == 0){
            jlh = jlh/2 - 1;
        }else{
            jlh = jlh/2;
        }
        check = head;
        for(int i = 0; i < jlh; i++){
            check = check -> next;
        }
        bantu = check -> next;
        new -> next = bantu;
        check -> next = new; 
    }
}
void ip(int data){
    new = malloc(0);
    new -> number = data;

    if(head == NULL){
        head = new;
        head -> next = NULL;
    }
    else{
        new -> next = head;
        head = new;
    }
}
void hapus_depan(){
    if(head == NULL){
        print("Data Kosong\n");
    }
    else{
        check = head -> next;
        head = check;
        free(head);
    }
}
void hapus_belakang(){
    if(head == NULL){
        print("Data Kosong\n");
    }
    else if(head -> next == NULL){
        free(head);
        head = NULL;
    }
    else{
        check = head;
        while(check -> next != NULL){
            new = check;
            check = check -> next;
        }
        free(check);
        new -> next = NULL;
    }
}

void delete_tengah(){
    int jlh = 0;
    if(head == NULL){
        printf("Data Kosong\n"); 
    }
    else{
        check = head;
        while(check -> next != NULL){
            check = check -> next;
            jlh++;
        }
        if(jlh % 2 == 0){
            jlh = jlh / 2 - 1;
        }
        else{
            jlh = jlh / 2;
        }
        check = head;
        for(int i = 0; i < jlh; i++){
            check = check -> next;
        }
        bantu = check -> next;
        new = bantu -> next;
        check -> next = new;
    }
}

void updatebyindex(int index,int data){
    int length = 0;
    check = head;
    while(check -> next != NULL){
        check = check -> next;
        length++;
    }
    if(head == NULL){
        printf("Data Kosong\n");
    }
    else if(length < index){
        printf("Data Tidak Ditemukan\n");
    }
    else{
        check = head;
        for(int i = 0; i < index - 1; i++){
            check = check -> next;
        }
        check -> number = data;
    }
}
void updatebyvalue(int value,int data){
    int length = 0;
    check = head;
    while(check -> next != NULL){
        length++;
        check = check -> next;
    }
    if(head == NULL){
        printf("Data Kosong\n");
    }
    else if(length == 0){
        printf("Value Tidak Ditemukan\n");
    }
    else{
        check = head;
        while(check -> next != NULL){
            if(check -> number == value){
                check -> number = data;
            }
            check = check -> next;
        }
    }
}
void main(){
    int pilih = 0,bilangan = 0,batas = 0,index = 0,value = 0;
    printf("1.Tambah Depan\n2.Tambah Tengah\n3.Tambah Belakang\n4.Tampil\n5.Input Data\n6.Hapus Depan\n7.Hapus Belakang\n8.Hapus Tengah\n9.Update By Index\n10.Update By Value\nSilahkan Pilih : ");scanf("%d",&pilih);
    if(pilih == 1){
        printf("Input Angka : ");scanf("%d",&bilangan);
        tambah_depan(bilangan);
    }
    else if(pilih == 2){
        printf("Input Angka : ");scanf("%d",&bilangan);
        tambah_tengah(bilangan);
    }
    else if(pilih == 3){
        printf("Input Angka : ");scanf("%d",&bilangan);
        tambah_belakang(bilangan);
    }
    else if(pilih == 4){
        print();
    }
    else if(pilih == 5){
        printf("Input Batas : ");scanf("%d",&batas);
        for(int i = 0; i < batas; i++){
            printf("Input Angka : ");scanf("%d",&bilangan);
            ip(bilangan);
        }
    }
    else if(pilih == 6){
        hapus_depan();
    }
    else if(pilih == 7){
        hapus_belakang();
    }
    else if(pilih == 8){
        delete_tengah();
    }
    else if(pilih == 9){
        printf("Index Ke Berapa : ");scanf("%d",&index);
        printf("Input Data : ");scanf("%d",&bilangan);
        updatebyindex(index,bilangan);
    }
    else if(pilih == 10){
        printf("Input Data Yg di Tukar : ");scanf("%d",&value);
        printf("Input Data : ");scanf("%d",&bilangan);
        updatebyvalue(value,bilangan);
    }
    main();
}  