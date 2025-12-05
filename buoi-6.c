#include <stdio.h>
#include <math.h>

int main() {
	
	// SUA BTVN 9 cau 
//	 Cau 1
//	int a,b,c, max;
//	printf("Nhap a,b va c: ");
//	scanf("%d%d%d", &a, &b , &c);
//	 
//	max = b;
//	if ( b > max) {
//		max = b;
//	}
//	if  ( c > max){
//		max = c;
//	}
//	printf("so lon nhat %d", max);

	// cau4:
//	int a, b, c;
//      printf("Nhap canh a, b và c: ");
//      scanf("%d%d%d", &a, &b, &c) ;
//
//      if ( a + b > c || b + c > a || a + c > b) {
//            float p = ( a + b + c) / 2.0;
//            float s = sqrt(p * ( p - a) * ( p - b) * ( p -c));
//            printf("Dien tich tam giac là: %f", s);
//      }
//      else
//         printf("Không ton tai tam giac");

    /* CAU 6
    int salary, thue, thuclinh ;
    printf("Nhap luong: ");
    scanf("%d", &salary);
  
    if ( salary > 0 ) {
	    if (salary > 15 ) {
            thue = salary * 0.3;
        }
        else if ( salary >= 7 ) {
            thue = salary * 0.2;
        }
        else {
            thue = salary * 0.1;
        }
        thuclinh = salary - thue;
        printf("Thuc linh là: %d", thuclinh);
	}
	else {
		printf("Luong k hop le");
	}
	*/
	
	// CAU 8
//	
//	int thang, nam ;
//	printf("Nhap thang: ");
//    scanf("%d", &thang);
//    printf("Nhap nam: ");
//    scanf("%d", &nam);
//	
//	if ( thang >= 1 && thang <= 12) {
//		if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
//			printf("Thang %d co 31 ngay",thang);
//		}
//		else if ( thang == 4 || thang == 6 || thang == 9 || thang == 11) {
//			printf("Thang %d co 30 ngay", thang);
//		}
//	    else {
//		    if ( nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0 )) {
//		     	printf("nam %d, thang %d co 29 ngay", nam, thang);
//		    }else {
//		     	printf("nam %d, thang %d co 28 ngay", nam , thang);
//		}	
//	}}
//	else {
//		printf("Thang nhap k hop le");
//	}
//	
	
	
	
	// cau 9
//	int cuoc = 25000, phut;
//	printf("Nhap so phut goi: ");
//	scanf("%d", &phut);
//	
//	if ( phut >= 0)  {
//		if ( phut <= 10 ) {
//		    cuoc += phut * 600;
//	     }
//	    else if ( phut <= 60 ) {
//		    cuoc = cuoc + ( 10 * 600) + ( phut - 10 )*400;
//	    }
//  	    else {
//	     	cuoc = cuoc +  (10 * 600 ) + ( 50 * 400 ) + ( phut - 60 ) * 200;
//	    }
//	
//	    printf("Tien cuoc ban phai tra la: %d", cuoc);
//    }
//    else {
//    	printf("So hut k hop le");
//	}
	
	// VT CT nhap vao so va in ra thu tuong ung
	// vd: nhap 2 in ra " thu 2 "
	
//	int n;
//	printf("Nhap n: ");
//	scanf("%d", &n);
//	
//	switch (n) {
////		case 1: 
////		   printf("Chu nhat");
////		   break;
//		case 2:
//		   printf("thu 2");
//		   break;
//		case 3:
//		   printf("thu 3");
//		   break;
//		case 4:
//		   printf("thu 4");
//		   break;
//		case 5:
//		   printf("thu 5");
//		   break;
//		case 6:
//		   printf("thu 6");
//		   break;
//		case 7:
//		   printf("thu 7");
//		   break;
//		default: // cac TH con lai ( mac dinh) 
//		    printf("Chu nhat");
//	}

    /* int thang, nam ;
	printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);
	
	switch(thang) {
		case 1: case 3 : case 5 : case 7 : case 8 : case 10: case 12:
			printf("Thang %d nam %d co 31 ngay", thang, nam);
			break;
		case 4 : case 6 : case 9 : case 11:
			printf("Thang %d nam %d co 30 ngay", thang, nam);
			break;
		case 2:
			// kt nam nhuan
			
			if ( nam % 400 == 0 || ( nam % 4 == 0 && nam % 100 != 0)) {
				printf("nam %d, thang %d co 29 ngay", nam, thang);
		    }else {
		     	printf("nam %d, thang %d co 28 ngay", nam , thang);
		   }	
   }
	*/
	
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	switch(n) {
		case 1:
			printf("*")
	}
	
	
	
	return 0;
}
