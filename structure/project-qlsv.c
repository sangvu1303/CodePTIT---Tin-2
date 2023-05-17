// -------------------------project quản lý sinh viên-----------------------------------------
// *  3 đối tượng : sinh viên,điểm ,môn
//     + sinh viên : mã sv,họ tên,ngày sinh,địa chỉ,sđt,lớp
//     + điểm: mã sv,mã môn,điểm chuyên cần,điểm giữa kỳ,điểm thi,điểm tb tổng
//     + môn học: mã môn,tên môn,học kỳ,số tín chỉ,tên giảng viên

// *  chức năng muốn quản lý:
//     + Sinh viên: thêm,sửa,xóa,tìm kiếm theo tên/mã,hiển thị tất cả/theo lớp,sắp xếp,...
//     + điểm : thêm,sửa,xóa,tìm kiếm ,sắp xếp,...
//     + môn : thêm,sửa,xóa,sắp xếp,hiển thị danh sách theo môn học/theo tên giảng viên
// -------------------------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>

struct NgaySinh {
    int ngay;
    int thang;
    int nam;
};

struct SinhVien {
    int msv;
    char ten[30];
    struct NgaySinh ngaySinh; // struct lồng nhau
    char diaChi[100];
    char sdt[10];
    char lop[10];
};

struct MonHoc {
    int maMon;
    char tenMon[30];
    int hocKy;
    int soTinChi;
    char tenGV[30];
};

struct Diem {
    int msv;
    int maMon;
    float diemCC;
    float diemGK;
    float diemThi;
    float diemTB;
};

void menuChinh(){
    printf("======== HE THONG QUAN LY SINH VIEN ========\n");
    printf("0. Thoat chuong trinh\n");
    printf("1. Quan ly sinh vien\n");
    printf("2. Quan ly mon hoc\n");
    printf("3. Quan ly diem\n");
    printf("============================================\n");
}

void menuQLSV(){
    printf("============ QUAN LY SINH VIEN ============\n");
    printf("0. Thoat chuc nang QLSV\n");
    printf("1. Nhap thong tin sinh vien\n");
    printf("2. Hien thi danh sach tat ca sinh vien\n");
    printf("3. Hien thi danh sach sinh vien theo lop\n");
    printf("4. Cap nhat thong tin sinh vien\n");
    printf("5. Xoa sinh vien khoi danh sach\n");
    printf("6. Tim kiem sinh vien theo ma sinh vien\n");
    printf("7. Tim kiem sinh vien theo ten\n");
    printf("8. Sap xep sinh vien theo ho va ten\n");
    printf("===========================================\n");
}

void menuQLMH(){
    printf("============= QUAN LY MON HOC =============\n");
    printf("0. Thoat chuc nang QLMH\n");
    printf("1. Nhap mon hoc\n");
    printf("2. Hien thi danh sach sinh vien theo ma mon hoc\n");
    printf("3. Hien thi danh sach sinh vien theo giang vien\n");
    printf("4. Hien thi danh sach mon hoc theo hoc ky\n");
    printf("5. Cap nhat mon hoc\n");
    printf("6. Xoa mon hoc\n");
    printf("===========================================\n");
}

void menuQLD(){
    printf("============= QUAN LY DIEM =============\n");
    printf("0. Thoat chuc nang QLD\n");
    printf("1. Nhap diem cua sinh vien\n");
    printf("2. Hien thi danh sach diem cua tat ca sinh vien\n");
    printf("3. Hien thi danh sach diem cua sinh vien theo lop\n");
    printf("4. Hien thi diem cua sinh vien theo theo ma sinh vien\n");
    printf("5. Cap nhat diem cua sinh vien\n");
    printf("6. Xoa diem cua sinh vien khoi danh sach\n");
    printf("7. Xep loai sinh vien\n");
    printf("8. Sap xep sinh vien theo diem trung binh\n");
    printf("===========================================\n");
}

void hienThiDanhSach(struct SinhVien ArrSV[],int soLuongSV){
    printf(" Hien thi danh sach Sinh vien \n ");
    printf("Ma SV\t Ho Ten\t Ngay Sinh\t Dia Chi\t SDT\t Lop\n");
    for(int i=0;i<soLuongSV;i++)
        printf("%d\t %s\t %d\\%d\\%d\t %s\t %s\t %s\n", ArrSV[i].msv, ArrSV[i].ten, ArrSV[i].ngaySinh.ngay, ArrSV[i].ngaySinh.thang, ArrSV[i].ngaySinh.nam, ArrSV[i].diaChi, ArrSV[i].sdt, ArrSV[i].lop);
}

void hienThiDanhSachTheoLop(struct SinhVien ArrSV[],int soLuongSV ,char lop[30]){
    printf(" Hien thi danh sach Sinh vien theo lop \n ");
    printf("Ma SV\t Ho Ten\t Ngay Sinh\t Dia Chi\t SDT\t Lop\n");
    for(int i=0;i<soLuongSV;i++){
        if(strcmp(lop,ArrSV[i].lop)==0)
            printf("%d\t %s\t %d\\%d\\%d\t %s\t %s\t %s\n", ArrSV[i].msv, ArrSV[i].ten, ArrSV[i].ngaySinh.ngay, ArrSV[i].ngaySinh.thang, ArrSV[i].ngaySinh.nam, ArrSV[i].diaChi, ArrSV[i].sdt, ArrSV[i].lop);
    }
}

void nhapSV(struct SinhVien ArrSV[],int soLuongSV){
    printf("Nhap thong tin sinh vien thu %d : ",soLuongSV + 1);
    printf("Nhap vao ma sinh vien: ");scanf("%d",&ArrSV[soLuongSV].msv);
    printf("Nhap vao ho ten sinh vien: ");fflush(stdin); gets(ArrSV[soLuongSV].ten);
    printf("Nhap vao ngay sinh:"); scanf("%d",&ArrSV[soLuongSV].ngaySinh.ngay);
    printf("Nhap vao thang sinh:"); scanf("%d",&ArrSV[soLuongSV].ngaySinh.thang);
    printf("Nhap vao nam sinh:"); scanf("%d",&ArrSV[soLuongSV].ngaySinh.nam);
    printf("Nhap vao dia chi sinh vien: ");fflush(stdin); gets(ArrSV[soLuongSV].diaChi);
    printf("Nhap vao so dien thoai sinh vien: ");fflush(stdin); gets(ArrSV[soLuongSV].sdt);
    printf("Nhap vao lop cua sinh vien: ");fflush(stdin); gets(ArrSV[soLuongSV].lop);
    soLuongSV ++;
}

void capNhat(struct SinhVien ArrSV[],int soLuongSV,int ma){
    for(int i=0;i<soLuongSV;i++){
        if(ArrSV[i].msv == ma){
            printf("Nhap thong tin sinh vien thu %d : ",soLuongSV + 1);
            printf("Nhap vao ho ten sinh vien: ");fflush(stdin); gets(ArrSV[soLuongSV].ten);
            printf("Nhap vao ngay sinh:"); scanf("%d",&ArrSV[soLuongSV].ngaySinh.ngay);
            printf("Nhap vao thang sinh:"); scanf("%d",&ArrSV[soLuongSV].ngaySinh.thang);
            printf("Nhap vao nam sinh:"); scanf("%d",&ArrSV[soLuongSV].ngaySinh.nam);
            printf("Nhap vao dia chi sinh vien: ");fflush(stdin); gets(ArrSV[soLuongSV].diaChi);
            printf("Nhap vao so dien thoai sinh vien: ");fflush(stdin); gets(ArrSV[soLuongSV].sdt);
            printf("Nhap vao lop cua sinh vien: ");fflush(stdin); gets(ArrSV[soLuongSV].lop);
            break;
        }
    }
}

void Xoa(struct SinhVien ArrSV[],int soLuongSV,int ma){
    for(int i=0;i<soLuongSV;i++){
        if(ArrSV[i].msv == ma){
            for(int j=i+1;j<soLuongSV;j++) {
                ArrSV[j] = ArrSV[j+1];
            }
            soLuongSV--;break;
        }
    }
}

void timKiemTheoID(struct SinhVien ArrSV[],int soLuongSV,int ma){
    printf("Sinh Vien co ma sinh vien %d la : \n", ma);
    printf("Ma SV\t Ho Ten\t Ngay Sinh\t Dia Chi\t SDT\t Lop\n");
    for(int i=0;i<soLuongSV;i++){
        if(ArrSV[i].msv == ma)
            printf("%d\t %s\t %d\\%d\\%d\t %s\t %s\t %s\n", ArrSV[i].msv, ArrSV[i].ten, ArrSV[i].ngaySinh.ngay, ArrSV[i].ngaySinh.thang, ArrSV[i].ngaySinh.nam, ArrSV[i].diaChi, ArrSV[i].sdt, ArrSV[i].lop);
        else printf("Khong tim thay sinh vien co ma sinh vien %d \n",ma);
    }
}

void timKiemTheoTen(struct SinhVien ArrSV[],int soLuongSV,char hoten[]){
    printf("Ma SV\t Ho Ten\t Ngay Sinh\t Dia Chi\t SDT\t Lop\n");
    for(int i=0;i<soLuongSV;i++){
        if(strcmp(hoten,ArrSV[i].ten)==0)
            printf("%d\t %s\t %d\\%d\\%d\t %s\t %s\t %s\n", ArrSV[i].msv, ArrSV[i].ten, ArrSV[i].ngaySinh.ngay, ArrSV[i].ngaySinh.thang, ArrSV[i].ngaySinh.nam, ArrSV[i].diaChi, ArrSV[i].sdt, ArrSV[i].lop);
        else printf("Khong tim thay sinh vien nay \n");
    }
}

void sapXepHoTen(struct SinhVien ArrSV[],int soLuongSV){
    for(int i=0;i<soLuongSV;i++){
        for(int j=i+1;j<soLuongSV;j++){
            if(strcmp(ArrSV[i].ten,ArrSV[j].ten)==-1){
                struct SinhVien tg = ArrSV[j];
                ArrSV[j] = ArrSV[i];
                ArrSV[i] = tg;
            }
        }
    }
}

int main(){
    int chose = 0;
    struct SinhVien ArrSV[1000];
    int soLuongSV = 0;
    do {
        menuChinh();
        printf(" Moi nhap vao lua chon cua ban: ");
        scanf("%d",&chose);
        switch (chose){
        case 0:
            printf(" Ban da thoat khoi chuong trinh !\n");
            break;
        case 1:{ // quan ly sinh vien
            int choseQLSV = 0;
            do{
                menuQLSV();
                printf(" Moi nhap vao lua chon cua ban: ");
                scanf("%d",&choseQLSV);
                switch (choseQLSV) {
                    case 0:
                        printf(" Ban da thoat khoi chuc nang QLSV !\n");
                        break;
                    case 1: //nhap thong tin 
                        nhapSV(ArrSV,soLuongSV);
                        break;
                    case 2: //hien thi danh sach sinh vien
                        hienThiDanhSach(ArrSV,soLuongSV);
                        break;
                    case 3:{ //hien thi sinh vien theo lop
                        char lop[30];
                        printf("Nhap vao lop de hien thi danh sach sinh vien\n");
                        gets(lop);
                        hienThiDanhSachTheoLop(ArrSV,soLuongSV,lop);
                        break;
                    }
                    case 4:{ //cap nhat thong tin sv theo id
                        int ma;
                        printf("Nhap vao ma sinh vien can cap nhat :");
                        scanf("%d",&ma);
                        capNhat(ArrSV,soLuongSV,ma);
                        hienThiDanhSach(ArrSV,soLuongSV);
                        break;
                    }
                    case 5:{ //xoa sinh vien
                        int ma;
                        printf("Nhap vao ma sinh vien can xoa :");
                        scanf("%d",&ma);
                        Xoa(ArrSV,soLuongSV,ma);
                        hienThiDanhSach(ArrSV,soLuongSV);
                        break;
                    }
                    case 6:{ //tim kiem theo ma sv
                        int ma;
                        printf("Nhap vao ma sinh vien can tim :");
                        scanf("%d",&ma);
                        timKiemTheoID(ArrSV,soLuongSV,ma);
                        break;
                    }
                    case 7: {//tim kiem theo ten
                        char hoten[30];
                        printf("Nhap vao ten sinh vien can tim\n");
                        gets(hoten);
                        timKiemTheoTen(ArrSV,soLuongSV,hoten);
                        break;
                    }
                    case 8: // sap xep theo ho ten
                        printf("Danh sach sinh vien theo thu tu :\n");
                        sapXepHoTen(ArrSV,soLuongSV);
                        hienThiDanhSach(ArrSV,soLuongSV);
                        break;
                    default:
                        printf(" Ban da nhap sai, vui long nhap lai !\n");
                        break;
                }
            }while(choseQLSV != 0);
            break;
        }
        case 2: // quan ly mon hoc

            break;
        case 3: // quan ly diem

            break;
        default:
            printf(" Ban da nhap sai, vui long nhap lai !\n");
            break;
        }
    } while (chose != 0);
}
// dài vãi nồi :(((