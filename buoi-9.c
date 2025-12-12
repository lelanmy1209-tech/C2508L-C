#include <stdio.h>


// dinh nghia ham trc khi no dc goi
	// TH1 : ham tra ve du lieu
	
// global va
int x = 5, y = 10;


int tinhtong(a, b) {
	return a + b;
}
	
	
	// TH2: ham k tra ve du lieu
void sayhello() {
		printf("hello");
}

void truyenthamtri(int a, int b) {
	a = 5; 
	b = 10;
	
	printf("a trong ham co gia tri %d\n", a);
	printf("b trong ham co gia tri %d\n", b);
}


void vidu() {
	printf("x la %d\n", x);
	printf("y la %d\n", y);
}



// *a la con tro tro den dia luu gia tri a trong bo nho Ram
void truyenthamchieu(int *a, int*b) {
	*a = 5;
	*b = 10;
}










int main () {
	
//	int a = 1, b = 2;
//	truyenthamchieu(&a, &b);
//	printf("Gia tri a %d\'n", a );
//	printf("Gia tri b %d\'n", b );
	
	// Scope of variable ( pham vi cua bien)
	/*
	if khai bao bien trong 1 code block {} thi bien do se co pham vi cuc bo (local variable):
	chu trinh song cua no se chi ton tai khi thuc thi block code
	
	if khai bao bien tren dau tap lenh thi bien do se co pham vi toaN CUC ( global variable):
	chu trinh song of nos se bd khi CT dc chay den khi ket
	*/
	
//	vidu();
//	
//	
//	int x = 50, y = 100;
	
	
//	printf("x la %d\n", x);
//	printf("y la %d\n", y);


/* 
      Mang ARRAY
*/
     // khoi tao mang co 100 ptu kieu so nguyen
//    int a[100];
    
    // khoi tao mang 
//    int a[5] = {1, 2,3, 4, 5};
//	
//	printf("a[0] = %d\n", a[0]);           // index/ chi muc/ chi so
//	printf("a[1] = %d\n", a[1]);           
//	printf("a[2] = %d\n", a[2]);
//	printf("a[3] = %d\n", a[3]);
//	printf("a[4] = %d\n", a[4]);
	
	/* 
	  1. k thao tac tinh toan den cac ptu trong mang khi chung chua co gtri
	  2. if gan gtri cho ptu thu 0 ma k gan gtri cho cac ptu con lai thi chuc mac dinh se bi gan = 0
	
	
	*/
//	
//	int n;
//	printf("Nhap so luong ptu cua mang: ");
//	scanf("%d", &n);
//	
//	int a[n];     // cap phat dong
//	
////	a[0] = 100;
////	
////	printf("a[0] = %d\n", a[0]);
////	printf("size of: %d", sizeof a);
//	
//	// nhap mang = vong lap
//	int i;
//	for ( i = 0; i < n; i++) {
//		printf("Nhap ptu thu %d\n", i);
//		scanf("%d", &a[i]);
//	}
//	
//	// xuat mang
//	
//	for ( i = 0; i < n; i++) {
//		printf("a[%d] = %d\n", i , a[i]);
//	}
//	
	
	
	// BT: tinh tong cac ptu trong mang. Bt rang mang co 5 ptu
	// la kieu so nguyen. Gtri cua cac ptu la user nhap tu ban phim
	
//	int a[5];
//	int sum, i;
//	
//	
//	for ( i = 0; i < 5; i++) {
//		printf("a[%d] = ", i);
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//	
//	printf("Tong cac ptu la: %d", sum);
	
	
		// BT: tinh tong cac ptu o vi tri CHAN trong mang. Bt rang mang co 5 ptu
	// la kieu so nguyen. Gtri cua cac ptu la user nhap tu ban phim
	
//	int a[5];
//	int sum = 0, i;
//	
//	for ( i = 0; i < 5; i++) {
//		printf("a[%d] = ", i);
//	    scanf("%d", &a[i]);
//	    
//	    if ( i % 2 == 0 && i != 0) {
//	            sum += a[i];
//	}}
//	printf("Tong cac ptu la: %d", sum);
//	
	
	
	// BT: tinh tong cac ptu co gtri la so CHAN trong mang. Bt rang mang co 5 ptu
	// la kieu so nguyen. Gtri cua cac ptu la user nhap tu ban phim
	
	int a[5];
	int sum = 0, i;
	
	for ( i = 0; i < 5; i++) {
		printf("a[%d] = ", i);
	    scanf("%d", &a[i]);
	    
	    if ( a[i] % 2 == 0) {
	            sum += a[i];
	}}
	printf("Tong cac ptu la: %d", sum);
	
	return 0;
}
