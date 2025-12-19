#include <stdio.h>
#include <string.h>

int main() {
	
	
	
	/* 
	   String (chuoi) : mang cac ki tu
	*/
	
//	char str[1000] = "le lan my";
//	printf("%s", str);
	
	
//	char name[1000];
//	printf("Nhap ho va ten: ");
////	scanf("%s",name);
//
//    fgets(name, sizeof(name), stdin);
//	
//	printf("Ho va ten : %s", name);
	
//	char str[] = "hello world";
//	printf("%d",sizeof(str));
//	printf("ki tu dau tien la: %c\n", str[0]);
//	printf("ki tu cuoi cung la: %c", str[4]);
	
	// NOTE: o trong C, vi tri cuoi cung la "\0" danh dau su ket thuc chua chuoi
	 
//	int i;
//	for ( i = 0;  i <5 ; i++) {
//		printf("%c\n", str[i]);
//	}
	
	char str[] = "hello world";
	
//	int i ;
//	while(str[i] != '\0') {
//	
//		i++;
//	
//	}
//	
//	printf("So luong ki tu la: %d\n", i); // kq: 11 
//	printf("So luong ki tu la: %d", strlen(str));

	
	// tim 1 ki tu o trong chuoi
	int i, dem = 0 ;
	for ( i = 0; i < strlen(str); i++) {
		if ( str[strlen(str) - 1] == 'o') {   // or tao int ptulast = strlen(str) - 1
//			printf("Co xh ki tu o tai vi tri %d\n", i);
			dem++;
			// break; // tim vi tri dau tien th
		}
	}
	printf("Co %d ky tu 'o' dc tim thay", dem);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
