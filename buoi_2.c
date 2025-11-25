// Comment nghia la khong cho trinh bien dich dich dong code nay
// day goi la tien xu ly (preprocessor). Muc dich la nhung thu vien 
// Standard input output (thu vien nhap xuat chuan) 
// vao trong file thuc thi

#include <stdio.h>

// day la ham ma chuong trinh se thuc thi dau tien
int main (){
	// day la than ham
	
	// ham printf (print formatted) dung de in ra man hinh 1 cai gi do
	printf("Xin Chao \n");
	
	double tuoi = 0;
	// %d, %f, %lf, %c... goi la format specifier (dac ta dinh dang)
	printf ("Tuoi cua toi la: %d \n", tuoi);
	
	float diemToan = 4.5;
	float diemVan = 7.5;
	float diemAnh = 5.5;
	float diemTrungBinh;
	
	printf ("Diem toan: %f \n", diemToan);
	printf ("Diem van: %f \n", diemVan);
	printf ("Diem anh: %f \n", diemAnh);
	
	diemTrungBinh = (diemToan + diemVan + diemAnh) / 3;
	
	printf ("Diem trung binh la: %f \n", diemTrungBinh);
	
	char kyTu = 'C';
	
	printf ("Gia tri cua bien kyTu la: %d \n", kyTu);
	
	// De nhap du lieu tu ban phim thi minh dung scanf()
	int a;
	int b;
	int tong;
	
	printf("nhap so a: ");
	// Dau & la toan tu dia chi dung de xac dinh gia tri cua bien a
	// duoc luu o dau trong bo nho RAM
	scanf("%d", &a);
	printf ("Gia tri cua bien a la: %d \n", a);
	
	printf("nhap so b: ");
	scanf("%d", &b);
	printf ("Gia tri cua bien b la: %d", b);
	
	tong = a + b;
	printf("tong cua a va b la: %d", tong);
	
	
	return 0;
}