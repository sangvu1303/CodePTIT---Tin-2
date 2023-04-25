#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sinhvien{
    int ma;
    char hoten[50];
    int ngay,thang,nam;
    struct sinhvien* next;
} SinhVien;

SinhVien* head = NULL; // con trỏ quản lý danh sách sinh viên

// hàm tạo node mới
SinhVien* taoNode(int ma, char hoten[], int ngay, int thang, int nam){
    SinhVien* sv = (SinhVien*) malloc(sizeof(SinhVien));
    if(sv == NULL){
        printf("\nKhong the cap phat bo nho.");
        exit(0);
    }
    sv->ma = ma;
    strcpy(sv->hoten, hoten); // copy tên 
    sv->ngay = ngay;
    sv->thang = thang;
    sv->nam = nam;
    sv->next = NULL;
    return sv;
}

// chức năng 1: thêm sinh viên vào vị trí đầu danh sách
void themSV(){
    int n, ma, ngay, thang, nam;
    char hoten[50];
    printf("Nhap so sinh vien can them: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("\nNhap thong tin sinh vien thu %d:\n", i+1);
        printf("Ma sinh vien: ");
        scanf("%d", &ma);
        printf("Ho ten: ");
        fflush(stdin);
        gets(hoten);
        printf("Ngay sinh (dd mm yyyy): ");
        scanf("%d%d%d", &ngay, &thang, &nam);
        SinhVien* sv = taoNode(ma, hoten, ngay, thang, nam);
        sv->next = head;
        head = sv;
    }
    printf("\nDa them thanh cong %d sinh vien.\n", n);
}

// chức năng 2: sửa thông tin sinh viên theo họ tên
void suaSV(char hoten[]){
    SinhVien* p = head;
    while(p != NULL){
        if(strcmp(p->hoten, hoten) == 0){
            int ma, ngay, thang, nam;
            printf("\nNhap ma sinh vien moi: ");
            scanf("%d", &ma);
            printf("Nhap ngay sinh moi (dd mm yyyy): ");
            scanf("%d%d%d", &ngay, &thang, &nam);
            p->ma = ma;
            p->ngay = ngay;
            p->thang = thang;
            p->nam = nam;
            printf("\nDa sua thong tin thanh cong.\n");
            return;
            }else{
            p = p->next;
        }
    }
    printf("\nKhong tim thay sinh vien co ho ten %s", hoten);
}

// hàm đổi chỗ 2 node
void swap(SinhVien* node1, SinhVien* node2){
    int ma = node1->ma;
    char hoten[50];
    strcpy(hoten, node1->hoten);
    int ngay = node1->ngay;
    int thang = node1->thang;
    int nam = node1->nam;

    node1->ma = node2->ma;
    strcpy(node1->hoten, node2->hoten);
    node1->ngay = node2->ngay;
    node1->thang = node2->thang;
    node1->nam = node2->nam;

    node2->ma = ma;
    strcpy(node2->hoten, hoten);
    node2->ngay = ngay;
    node2->thang = thang;
    node2->nam = nam;
}

// chức năng 3: hiển thị danh sách sinh viên theo thứ tự ngày sinh tăng dần
void hienThiSV(){
    int n = 0;
    SinhVien *p, *q;
    p = head;
    while(p != NULL){
        n++;
        q = p->next;
        while(q != NULL){
            if(p->nam > q->nam){
                swap(p, q);
            }else if(p->nam == q->nam && p->thang > q->thang){
                swap(p, q);
            }else if(p->nam == q->nam && p->thang == q->thang && p->ngay > q->ngay){
                swap(p, q);
            }
            q = q->next;
        }
        p = p->next;
    }

    printf("\nDanh sach sinh vien theo ngay sinh tang dan:\n");
    printf("+--Ma--+---------------------------+------------+\n");
    printf("| %-5s | %-26s | %-10s |\n", "STT", "Ho va ten", "Ngay sinh");
    printf("+-------+---------------------------+------------+\n");
    p = head;
    for(int i = 1; i <= n; i++){
        printf("| %-5d | %-26s | %02d/%02d/%4d |\n", i, p->hoten, p->ngay, p->thang, p->nam);
        printf("+-------+---------------------------+------------+\n");
        p = p->next;
    }
}

int main(){
    int chucnang;
    char hoten[50];
    while(1){
        printf("\n--Menu--\n");
        printf("1. Them sinh vien moi.\n");
        printf("2. Sua thong tin sinh vien theo ho ten.\n");
        printf("3. Hien thi danh sach sinh vien theo ngay sinh.\n");
        printf("Nhap lua chon (1/2/3): ");
        scanf("%d", &chucnang);
        switch(chucnang){
            case 1:
                themSV();
                break;
            case 2:
                printf("\nNhap ho ten SV can sua: ");
                fflush(stdin);
                gets(hoten);
                suaSV(hoten);
                break;
            case 3:
                hienThiSV();
                break;
            default:
                printf("\nLua chon khong hop le.");
                break;
        }
    }
    return 0;
}