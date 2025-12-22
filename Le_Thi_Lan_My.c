#include <stdio.h>

// Func prototype
void cau1();
double theTichHinhCau(double );

void cau2();
int timSoNhoNhat(int a[]);


// func definition

double theTichHinhCau(double r) {
	double pi = 3.14;
	if ( r > 0 ) {
	    return (4*pi*r*r*r)/3;
	}
	else {
		printf("Ban kinh khong hop le\n");
		return 0;
	}
}
void cau1() {
	double r;
	printf("Nhap ban kinh r: ");
	scanf("%lf", &r);
	printf("The tich hinh cau la: %.2lf\n",theTichHinhCau(r) );
}


int timSoNhoNhat(int a[]){
	int i, min;
	min = a[0];
	for ( i = 0; i < 10; i++) {
		if ( a[i] < min) {
			min = a[i];
		}
	}
	return min;
}
void cau2() {
	int a[10];
	int i;
	for ( i = 0; i< 10; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	printf("Gia tri nho nhat trong mang la: %d\n", timSoNhoNhat(a));
}


void hoanDoi(float a, float b) {
	printf("Gia tri a va b truoc khi hoan doi: %f va %f\n", a, b);
	if ( a > b ) {
		float tam = a;
		a = b;
		b = tam;
	}
    printf("Gia tri a va b sau khi hoan doi: %f va %f\n",a,b);
}

void cau3() {
	float a, b;
	printf("Nhap a va b: ");
	scanf("%f%f", &a, &b);
	hoanDoi(a,b);
}

void convert() {
	char c;
	printf("Nhap ki tu c: ");
	scanf(" %c", &c);
	if ( c >= 'a' && c <= 'z') {
		c -= 32;
		printf("Ki tu hoa : %c\n", c);
	}
	else if (c >= 'A' && c <='Z') {
		c += 32;
		printf("Ki tu thuong: %c\n", c);
	}
	else if ( c >= '0' && c <= '9') {
		printf("Ki tu so %c\n", c);
    }
	else {
		printf("Ban da nhap ki tu %c\n", c);
	}
}
void cau4() {
	convert();
}

void cau5() {
	int i = 1, tong = 0;
	while (i <= 15) {
		if ( i != 8 && i != 12 ) {
			printf("%d ", i);
			tong+= i;
		}
		i++;
	}
	printf("\nTong cac day so tren la: %d", tong);
}


int main() {
	cau1();
	cau2();
	cau3();
	cau4();
	cau5();
	
	
	return 0;
}
