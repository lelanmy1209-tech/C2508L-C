#include <stdio.h>
#include <stdbool.h>

int main() {
	
//	int x = 6;
//	printf("%d\n", x < 5 && x < 10);
//	printf("%d\n", x < 5 ||  x < 10);
//	printf("%d\n", !(  x < 5 || x < 10) );
//    bool isHandsome = false;
//    printf("%d", isHandsome);

//    int x = 10;
//    if ( x > 10 ){
//    	printf("x > 10 ");
//	}
//	else {
//		printf("x <= 10");
//	}
	
	// Vt CT kt 1 so nguyen nhap vao la so chan hay le
	/*int x;
	printf("Nhap vao 1 so: ");
	scanf("%d",&x);
	
	if ( x > 0) {
		if ( x % 2 == 0) {
		    printf("x la so chan");
    	}
	    else {
	     	printf("x la so le");
	} }
	else {
		printf("Gia tri nhap vao k hop le");
	}*/
	
	// giai PT bac nhat ax + b = 0
	// if a == 0 && b != 0 : vo nghiem
	// if a == 0 && b == 0: vo so nghiem
	// x = -b / a 
	// in nghiem x
	
	/*float a,b,x;
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b: ");
	scanf("%f",&b); */
	
    /*	if ( a == 0 && b != 0) {
		printf("PT vo nghiem");
	}
	else if ( a == 0 && b == 0) {
		printf("PT vo so nghiem");
	}
	else {
		printf("PT co 1 nghiem: %.2f", x = -b / a);
	} */
	
	// Toi uu code
	/*if ( a == 0){
		if ( b != 0) {
			printf("PT vo nghiem");
		}
		else // TH: b == 0 
		{
			printf("PT vo so nghiem");
		}
	}
	else {
		printf("PT co 1 nghiem: %.2f", x = -b / a);
	}
	*/
	
	// Vt Ct nhap 2 so nguyen a,b , tim va in ra so lon nhat
	
	int a, b, max;
	printf("Nhap so 1: ");
	scanf("%d",&a);
	printf("Nhap so 2: ");
	scanf("%d",&b);
	
	/* int max = a;
	if ( b > a){
		max = b;
    } */ 
    max = ( b > a ) ? b : a;
    
	printf("So lon nhat = %d", max);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
