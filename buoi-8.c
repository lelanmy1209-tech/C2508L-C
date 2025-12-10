#include <stdio.h>

// function prototype
// khai bao all cac ham chuc nang of CT o day
int tong_cong_tich();
int sum();
void Hieu();
int Nhan();
float Thuong();
int tinhtuoi(int);
	
// tinh tong 2 so


int main() {

	// function call ( goi ham)
//	int tong ;
//	tong = sum();
//	printf("Tong la: %d\n", tong);
	
//	Hieu();
//	int tich;
//	tich = Nhan();
//	printf("Tich la: %d", tich);
    
//    float chia;
//    chia = Thuong();
//	printf("Thuong la: %.2f", chia);
	
	
//	int combine;
//	combine = tong_cong_tich();
//	printf("Tong cong tich la: %d", combine);

    int namsinh = 2006;
    printf("Tuoi cua ban la: %d", tinhtuoi(namsinh)); // printf("Tuoi cua ban la: %d", tinhtuoi(2006));
    
     /* int namsinh;
     printf("Nhap nam sinh: ");
     scanf("%d", &namsinh);
     
     int tuoi = tinhtuoi();
     printf("Tuoi cua ban la: %d", tuoi);
	  */
     
     
     
	return 0;
	
}


int sum() {
	
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	return a + b;
}

// vt ham tru 2 so ( k tra ve j ca -> void)

void Hieu() {
	
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	printf("Hieu la: %d\n", a- b);
}



// vt ham nhan 2 so va chia 2 so;
int Nhan() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
    return a * b;
    
}


float Thuong() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
    return (float)a / b;
    
}

int tong_cong_tich() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
    return (a + b) + ( a * b);
	
}



int tinhtuoi(int namsinh) {
	return 2025 - namsinh;
}











