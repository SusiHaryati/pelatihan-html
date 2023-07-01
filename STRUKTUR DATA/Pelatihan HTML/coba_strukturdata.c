#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struktur data untuk menyimpan informasi surat berharga
typedef struct {
    char nama[20];
    int harga;
    int jumlah;
    int terjual;
} SuratBerharga;

// Struktur data untuk menyimpan informasi konsumen
typedef struct {
    char nama[20];
    int dana;
    SuratBerharga *sbAbadi;
    SuratBerharga *sbNusa;
    SuratBerharga *sbAdira;
} Konsumen;

// Struktur data untuk simpul dalam linked list
typedef struct Node {
    Konsumen konsumen;
    struct Node *next;
} Node;

// Fungsi untuk membuat simpul baru dalam linked list
Node *createNode(Konsumen konsumen) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->konsumen = konsumen;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk menambahkan simpul ke akhir linked list
void addNode(Node **head, Konsumen konsumen) {
    Node *newNode = createNode(konsumen);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Fungsi untuk menghapus simpul pertama dari linked list
void removeFirstNode(Node **head) {
    if (*head != NULL) {
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

// Fungsi untuk mencetak jumlah antrian masing-masing perusahaan
void printAntrian(Node *head) {
    int antrianAbadi = 0;
    int antrianNusa = 0;
    int antrianAdira = 0;

    Node *current = head;
    while (current != NULL) {
        if (current->konsumen.sbAbadi != NULL) {
            antrianAbadi += current->konsumen.sbAbadi->jumlah - current->konsumen.sbAbadi->terjual;
        }
        if (current->konsumen.sbNusa != NULL) {
            antrianNusa += current->konsumen.sbNusa->jumlah - current->konsumen.sbNusa->terjual;
        }
        if (current->konsumen.sbAdira != NULL) {
            antrianAdira += current->konsumen.sbAdira->jumlah - current->konsumen.sbAdira->terjual;
        }
        current = current->next;
    }

    printf("Jumlah antrian masing-masing perusahaan:\n");
    printf("SB PT Abadi: %d\n", antrianAbadi);
    printf("SB PT Nusa: %d\n", antrianNusa);
    printf("SB PT Adira: %d\n", antrianAdira);
}

int main() {
    Node *head = NULL;

    // Menambahkan konsumen dan surat berharga ke linked list
    Konsumen toni = {"Toni", 100000, NULL, NULL, NULL};
    SuratBerharga sbAbadi = {"SB PT Abadi", 100, 1000, 0};
    SuratBerharga sbNusa = {"SB PT Nusa", 150, 1000, 0};
    addNode(&head, toni);
    toni.sbAbadi = &sbAbadi;
    toni.sbNusa = &sbNusa;

    Konsumen dida = {"Dida", 200000, NULL, NULL, NULL};
    SuratBerharga sbAdira = {"SB PT Adira", 250, 1000, 0};
    addNode(&head, dida);
    dida.sbAbadi = &sbAbadi;
    dida.sbAdira = &sbAdira;

    Konsumen sony = {"Sony", 350000, NULL, NULL, NULL};
    addNode(&head, sony);
    sony.sbAdira = &sbAdira;
    sony.sbNusa = &sbNusa;
    sony.sbAbadi = &sbAbadi;

    // Memproses pembelian konsumen
    if (toni.sbAbadi != NULL) {
        int pembelian = 30;
        if (pembelian <= toni.sbAbadi->jumlah - toni.sbAbadi->terjual && pembelian * toni.sbAbadi->harga <= toni.dana) {
            toni.sbAbadi->terjual += pembelian;
            toni.dana -= pembelian * toni.sbAbadi->harga;
        }
    }
    if (toni.sbNusa != NULL) {
        int pembelian = 20;
        if (pembelian <= toni.sbNusa->jumlah - toni.sbNusa->terjual && pembelian * toni.sbNusa->harga <= toni.dana) {
            toni.sbNusa->terjual += pembelian;
            toni.dana -= pembelian * toni.sbNusa->harga;
        }
    }

    if (dida.sbAbadi != NULL) {
        int pembelian = 40;
        if (pembelian <= dida.sbAbadi->jumlah - dida.sbAbadi->terjual && pembelian * dida.sbAbadi->harga <= dida.dana) {
            dida.sbAbadi->terjual += pembelian;
            dida.dana -= pembelian * dida.sbAbadi->harga;
        }
    }
    if (dida.sbAdira != NULL) {
        int pembelian = 1;
        if (pembelian <= dida.sbAdira->jumlah - dida.sbAdira->terjual && pembelian * dida.sbAdira->harga <= dida.dana) {
            dida.sbAdira->terjual += pembelian;
            dida.dana -= pembelian * dida.sbAdira->harga;
        }
    }

    if (sony.sbAdira != NULL) {
        int pembelian = 40;
        if (pembelian <= sony.sbAdira->jumlah - sony.sbAdira->terjual && pembelian * sony.sbAdira->harga <= sony.dana) {
            sony.sbAdira->terjual += pembelian;
            sony.dana -= pembelian * sony.sbAdira->harga;
        }
    }
    if (sony.sbNusa != NULL) {
        int pembelian = 30;
        if (pembelian <= sony.sbNusa->jumlah - sony.sbNusa->terjual && pembelian * sony.sbNusa->harga <= sony.dana) {
            sony.sbNusa->terjual += pembelian;
            sony.dana -= pembelian * sony.sbNusa->harga;
        }
    }
    if (sony.sbAbadi != NULL) {
        int pembelian = 30;
        if (pembelian <= sony.sbAbadi->jumlah - sony.sbAbadi->terjual && pembelian * sony.sbAbadi->harga <= sony.dana) {
            sony.sbAbadi->terjual += pembelian;
            sony.dana -= pembelian * sony.sbAbadi->harga;
        }
    }

    // Menampilkan informasi jumlah surat berharga yang dimiliki oleh setiap konsumen
    printf("Jumlah surat berharga yang dimiliki setiap konsumen:\n");
    printf("Konsumen Toni:\n");
    printf("SB PT Abadi: %d\n", toni.sbAbadi != NULL ? toni.sbAbadi->terjual : 0);
    printf("SB PT Nusa: %d\n", toni.sbNusa != NULL ? toni.sbNusa->terjual : 0);
    printf("Konsumen Dida:\n");
    printf("SB PT Abadi: %d\n", dida.sbAbadi != NULL ? dida.sbAbadi->terjual : 0);
    printf("SB PT Adira: %d\n", dida.sbAdira != NULL ? dida.sbAdira->terjual : 0);
    printf("Konsumen Sony:\n");
    printf("SB PT Abadi: %d\n", sony.sbAbadi != NULL ? sony.sbAbadi->terjual : 0);
    printf("SB PT Nusa: %d\n", sony.sbNusa != NULL ? sony.sbNusa->terjual : 0);
    printf("SB PT Adira: %d\n", sony.sbAdira != NULL ? sony.sbAdira->terjual : 0);

    // Menampilkan jumlah antrian masing-masing perusahaan
    printAntrian(head);

    return 0;
}
