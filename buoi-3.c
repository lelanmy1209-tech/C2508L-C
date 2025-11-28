#include <stdio.h>

int main(){
	
//	float a;
//	int b;
//	printf("Nhap a: ");
//	scanf("%d",&a);
//	
//	printf("Nhap b: ");
//	scanf("%d",&b);
//	
//	printf("a - b = %d\n", a-b);
//	
//	printf("a * b = %d\n", a*b);
//	
//	printf("a / b = %f", a/b);
	
	// type casting: ep kieu
	// 1. ep kieu ngam dinh (Implicit casting) 
	// ( CT thuc hien hanh vi ep kieu)
	// 2. ep kieu tuong minh ( Explicit casting) 
	// ( lap trinh vien tu thuc hien hanh vi ep kieu)
	
//	int a, b;
//	printf("Nhap a: ");
//	scanf("%d",&a);
//	
//	printf("Nhap b: ");
//	scanf("%d",&b);
//	
//	printf("a / b = %.1f",(float) a/b);
	
//	printf("\n");
//	
//	printf("Gia tri bien a: %d\n", a);
//	printf("Dia chi bien a trong RAM: %p", &a);
//    int a = 1, b = 2;
//    printf("%d + %d = %d\n", a, b, a+b);
//    printf("% Chia lay du cho %d la: %d", a, b, a % b);

//    int a = 5;
//    printf("Gia tri cua bien a la: %d\n", a);
    
//    a =a +1;
//    printf("Gia tri cua bien a sau thay doi la: %d\n", a++);

	// ++a : tang r moi in
	// a++: in ra r tang
	
//	 printf("Gia tri cua bien a la: %d\n", a);

	// if a++ va ++a dung 1 minh trong 1 cau lenh thi k co j xay ra
	// if a+ va ++a tham gia vao 1 bieu thuc tinh toan or in ra
	// man hinh 
//	int a = 5;
//	a = --a + 1 + a--;
//	
//	printf("%d",a);

//    int a = 5;
//    printf(" a += 5 la: %d\n", a += 5);
//    printf(" a -= 5 la: %d\n", a -= 5);
//    printf(" a *= 5 la: %d\n", a *= 5);
//    printf(" a /= 5 la: %d\n", a /= 5);
//    printf(" a chia lay du cho 5 la: %d\n", a %= 5);
    
    int x = 5, y = 3;
    printf("x > y : %d\n", x > y);
    printf("x < y : %d\n", x < y);
    printf("x = y : %d\n", x == y);
    printf("x >= y : %d\n", x >= y);
    printf("x <= y : %d\n", x <= y);
	printf("x !=  y : %d", x != y);
	
	
	return 0;
}
