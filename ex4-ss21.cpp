#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;             
    char name[50];      
    char age[100];          
    char phone[100]; 
};

typedef struct SinhVien SinhVien;

int main() {
    SinhVien students[5]; 
    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1; 

        printf("Nhap ten sinh vien %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

        printf("Nhap tuoi sinh vien %d:\n ", i + 1);
        scanf("%d", &students[i].age);
        getchar(); 
        printf("Nhap so dien thoai sinh vien %d:\n ", i + 1);
        fgets(students[i].phone, sizeof(students[i].phone), stdin);
        students[i].phone[strcspn(students[i].phone, "\n")] = '\0'; 

      
    }

    printf("\nDanh sach sinh vien:\n");
    printf("%-5s %-20s %-5s %-15s\n", "ID", "Ten", "Tuoi", "So Dien Thoai");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-5d %-20s %-5d %-15s\n", students[i].id, students[i].name, students[i].age, students[i].phone);
    }

    return 0;
    
}

