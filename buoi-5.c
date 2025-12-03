#include <stdio.h>

int main() {
	
	/* vt CT nhap 2 so nguyen a,b.
	if a > b thi swap a va b, ngc lai k swap
	in ra gt a, b */
	
//	int a, b, tam;
//	printf("Nhap a, b: ");
//	scanf("%d%d", &a ,&b);
//	if ( a > b) {
//		tam = a;
//		a = b;
//		b = tam;
//	}
//	printf("Gia tri a va b la: %d va %d", a, b);


    /* vt ct nhap vao 2 so nguyen a, b
    in ra thong bao " a bang b" if a = b
    ngc lai in thong bao ' a khac b' */
    
//    int a, b, tam;
//	printf("Nhap a, b: ");
//	scanf("%d%d", &a ,&b);
//	if ( a == b ) {
//		printf(" a bang b");
//    }  
//	else {
//		printf(" a khac b");
//    }  

    /* nhap ki tu c, kt xem if kitu nhap la kitu thuong tu a-> z 
	thi doi sang chu hoa va in ra
    ngc lai thong bao " ki tu vua nhap la : c" */
    
    
   
    /* char c;
    printf("Nhap ki tu c: ");
    scanf("%c", &c);
    if ( c >= 'a' && c <= 'z' ) {
    	c = c - 32;
    	printf("Ki tu hoa = %c",c);
    }
    else if ( c >='A' && c <='Z') {
    	c += 32;
    	printf("Ki tu thuong = %c",c);
	}
    else if ( c >= '0' && c <= '9') {
    	printf("Ki tu vua nhap la so: %d",c);
	}
    else {
    	printf("Ki tu da nhap: %c", c);
	}
    
    */

    // ten bien theo cu phap lac da ( camel case) , vd: giaVe
    
//    int gia = 50000, age;
//    
//    printf("Nhap tuoi: ");
//    scanf("%d", &age);
//    
//    if ( age < 6 ) {
//    	gia  -= gia * 0.5;
//   }
//	else if ( age < 11 ) {
//		gia -= gia * 0.3;
//	}
//	else if ( age <= 15 ) {
//		gia -= gia * 0.15;
//	}
//
//    printf("Tien ve cua ban la: %d", gia);




   float diem;
   printf("Nhap diem: ");
   scanf("%f", &diem);
   
   if ( diem >= 0 &&  diem <= 10 ) {
   	    if ( diem >= 9) {
   	  	    printf("Xuat sac");
		}
		else if ( diem > 8 ) {
			printf("Gioi");
		}
		else if ( diem > 7 ){
			printf("Kha");
		}
		else if ( diem > 6 ) {
			printf("Trung binh kha");
		}
		else if ( diem >= 5) {
			printf("Trung binh");
		}
		else {
			printf("Yeu");
		}
   }
   else {
   	    printf("Diem khong hop le");
   }


	return 0;
}
