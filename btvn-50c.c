#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main() {

      // Phần A
      // 1.In ra dòng chữ "Hello, World!".
      printf("Hello World\n");

      // 2. In ra tên của bạn.
      printf("Lan My\n");

      // 3. In ra tên và tuổi của bạn.
      int tuoi;
      char ten[12];
      
      printf("Nhập tên: ");

      fgets(ten,sizeof(ten),stdin);
     
      printf("Tên là: %s\n",ten);

      // 4. In ra họ tên, tuổi, và điểm trung bình (dùng nhiều printf).
      printf("Lê Thị Lan My, 19 tuổi, đtb: 9\n");

      // 5.Nhập vào một số nguyên và in ra.
      int so;
      printf("\nNhập 1 số nguyên: ");
      scanf("%d",&so);
      printf("Số nguyên: %d\n",so);

      // 6. Nhập vào một số thực (float) và in ra.
      float a;
      printf("\nNhập số thực: ");
      scanf("%f",&a);
      printf("Số thực vừa nhập: %f\n",a);

      // 7. Nhập vào một ký tự và in ra.
      char kytu;
      printf("\nNhập 1 ký tự: ");
      scanf(" %c",&kytu);
      printf("Ký tự vừa nhập: %c\n",kytu);

      //8. Nhập vào một số nguyên, in ra số đó tăng thêm 1.
      int b;
      printf("\nNhập vào 1 số nguyên: ");
      scanf("%d",&b);
      b = b + 1;
      printf("Số đã tăng thêm 1: %d\n",b);

      // 9. Nhập vào một số thực, in ra số đó nhân đôi.
      float c;
      printf("\nNhập vào 1 số thực: ");
      scanf("%f",&c);
      c = c * 2;
      printf("Số thực sau nhân đôi: %f\n", c);

      // 10. Nhập vào tên của bạn (dùng scanf("%s", ...)) và in ra.
      char name[20];
      printf("\nNhập tên: ");
      scanf("%s",name);
      printf("Tên là: %s\n",name);

      // 11. Nhập vào tên đầy đủ (dùng fgets) và in ra.
      
      while ( getchar() != '\n');

      char name1[20];
      printf("\nNhập họ và tên: ");
      fgets(name1, sizeof(name1), stdin);
      printf("Tên đầy đủ là: %s\n", name1);

      // 12. In ra giá trị của số PI với 2 chữ số thập phân.
      printf("Giá trị số pi: %.2f\n",3.1415926535);

      // 13. In ra giá trị của số PI với 6 chữ số thập phân.
      printf("Giá trị số pi: %f\n\n",3.1415926535);

      // 14. Nhập vào hai số nguyên, in ra tổng của chúng.
      int so1, so2;
      printf("Nhập số nguyên 1: ");
      scanf("%d",&so1);
      printf("Nhập số nguyên 2: ");
      scanf("%d",&so2);
      printf("Tổng 2 số là: %d\n\n",so1 + so2);

      // 15. Nhập vào hai số nguyên, in ra hiệu của chúng.
      int so3, so4;
      printf("Nhập số nguyên 1: ");
      scanf("%d",&so3);
      printf("Nhập số nguyên 2: ");
      scanf("%d",&so4);
      printf("Hiệu 2 số là: %d\n\n",so3 - so4);

      // Phần B

      // 16. Nhập vào hai số nguyên, in ra tích.
      int so5, so6;
      printf("Nhập số nguyên 1: ");
      scanf("%d",&so5);
      printf("Nhập số nguyên 2: ");
      scanf("%d",&so6);
      printf("Tích 2 số là: %d\n\n",so5 * so6);

      // 17. Nhập vào hai số nguyên, in ra thương (chia nguyên).
      int so7, so8;
      printf("Nhập số nguyên 1: ");
      scanf("%d",&so7);
      printf("Nhập số nguyên 2: ");
      scanf("%d",&so8);
      printf("Thương lấy nguyên 2 số là: %d\n\n",so7 / so8);

      // 18. Nhập vào hai số nguyên, in ra thương (chia thực).
      int so9, so10;
      printf("Nhập số nguyên 1: ");
      scanf("%d",&so9);
      printf("Nhập số nguyên 2: ");
      scanf("%d",&so10);
      printf("Thương lấy thực 2 số là: %f\n\n", (float)so9 / so10);
      
      // 19. Nhập vào hai số nguyên, in ra số dư.
      int so11, so12;
      printf("Nhập số nguyên 1: ");
      scanf("%d",&so11);
      printf("Nhập số nguyên 2: ");
      scanf("%d",&so12);
      printf("Số dư của 2 số là: %d\n\n", so11 % so12);

      // 20. Nhập vào chiều dài và rộng, in ra diện tích hình chữ nhật.
      int cd, cr;
      printf("Nhập chiều dài: ");
      scanf("%d",&cd);
      printf("Nhập chiều rộng: ");
      scanf("%d",&cr);
      printf("Diện tích hình chữ nhật là: %d\n\n", cd * cr);

      // 21. Nhập vào cạnh hình vuông, in ra chu vi.
      int canh;
      printf("Nhập canh hình vuông: ");
      scanf("%d",&canh);
      printf("Chu vi hình vuông là: %d\n\n", canh * canh);

      // 22. Nhập vào bán kính, in ra diện tích hình tròn.
      float pi = 3.14;
      int bk;
      printf("Nhập bán kính: ");
      scanf("%d", &bk);
      printf("Diện tích hình tròn : %f\n\n", pi * pow(bk,2));

      // 23. Nhập vào năm sinh, in ra tuổi hiện tại.
      int yearht, yearbi;
      printf("Nhập năm sinh: ");
      scanf("%d",&yearbi);
      printf("Nhập năm hiện tại: ");
      scanf("%d",&yearht);
      printf("Tuổi hiện tại: %d\n\n", yearht - yearbi);

      // 24. Nhập vào điểm Toán, Lý, Hóa, in ra điểm trung bình.
      float t, l, h;
      printf("Nhập đểm toán: ");
      scanf("%f",&t);
      printf("Nhập đểm lý: ");
      scanf("%f",&l);
      printf("Nhập đểm hoá: ");
      scanf("%f",&h);
      float dtb = ( t + l + h) / 3;
      printf("Điểm TB : %f\n\n", dtb);

      // 25. Nhập vào tên và điểm trung bình, in ra kết quả: "Bạn A có điểm TB = ..."
      float đtb;
      char name2[20];
      printf("Nhập tên: ");
      scanf("%s",name2);
      printf("Nhập điểm tb: ");
      scanf("%f",&đtb);
      printf("Bạn %s có điểm TB = %f\n\n", name2, đtb);

      // 26. Nhập vào một ký tự, in ra mã ASCII của ký tự đó.
      char kitu;
      printf("Nhập vào 1 ký tự: ");
      scanf(" %c",&kitu);
      printf("Mã ASCII của %c là: %d\n\n",kitu,kitu);

      // 27. Nhập vào một số nguyên, in ra ký tự tương ứng trong bảng ASCII.
      int d;
      printf("Nhập vào 1 số nguyên: ");
      scanf("%d",&d);
      printf("Kí tự ASCII tương ứng: %c\n\n",d);

      // 28. Nhập vào một ký tự, in ra ký tự liền sau trong bảng chữ cái.
      char e;
      printf("Nhập vào 1 kí tự: ");
      scanf(" %c", &e);
      printf("Kí tự liền kề sau: %c\n\n", e + 1);

      // 29. Nhập vào một số nguyên, in ra bình phương và lập phương.
      int g;
      printf("Nhập vào 1 số nguyên: ");
      scanf("%d",&g);
      printf("Bình phương của %d: %d\n",g, g * g);
      printf("Lập phương của %d: %d\n\n",g, g * g * g);

      // 30. Nhập vào số giờ và phút, in ra tổng số phút.
      int gio, phut;
      printf("Nhập vào số giờ: ");
      scanf("%d",&gio);
      printf("Nhập vào số phút: ");
      scanf("%d",&phut);
      printf("Tổng số phút là: %d\n\n",gio * 60 + phut);

      // 31. Nhập vào số giây, in ra định dạng giờ:phút:giây.
      int sumgiay;
      printf("Nhập vào số giây: ");
      scanf("%d",&sumgiay);
      int hour = sumgiay / 3600;
      int minute = ( sumgiay % 3600 ) / 60;
      int giay = sumgiay % 60;
      printf("Định dạng giờ:phút:giây : %02d:%02d:%02d\n\n",hour, minute, giay);

      // 32. Nhập vào cân nặng và chiều cao, in ra chỉ số BMI.
      float height, weight;
      printf("Nhập chiều cao (m): ");
      scanf("%f",&height);
      printf("Nhập cân nặng (kg): ");
      scanf("%f",&weight);
      printf("Chỉ số BMI: %.2f\n\n", weight / pow(height,2) );


      // 33. Nhập vào 2 số nguyên, in ra số lớn hơn.
      int so13, so14;
      printf("Nhập số nguyên 1: ");
      scanf("%d",&so13);
      printf("Nhập số nguyên 2: ");
      scanf("%d",&so14);
      if ( so13 > so14) 
           { printf("Số lớn hơn là: %d\n\n",so13); } 
      else if ( so13 < so14)
           { printf("Số lớn hơn là: %d\n\n", so14); }
      else
           { printf("Hai số bằng nhau\n\n") ;}

      // 34. Nhập vào 3 số nguyên, in ra số nhỏ nhất.
      int so15, so16, so17;
      printf("Nhập số nguyên 1: ");
      scanf("%d",&so15);

      printf("Nhập số nguyên 2: ");
      scanf("%d",&so16);

      printf("Nhập số nguyên 3: ");
      scanf("%d",&so17);

      int min = so15;
      if ( so16 < min) min = so16;
      if ( so17 < min) min = so17;
      
      printf("Số nhỏ nhất là: %d\n\n",min);

      
      // 35. Nhập vào họ, tên đệm, tên → in ra đầy đủ.
      char ho[20];
      char dem[20];
      char name3[20];

      printf("Nhập họ: ");
      scanf("%s", ho);

      getchar ();

      printf("Nhập tên đệm: ");
      fgets(dem, sizeof(dem), stdin);
      dem[strcspn(dem,"\n")] = '\0';

      printf("Nhập tên: ");
      scanf("%s",name3);
      printf("Họ tên đầy đủ: %s %s %s\n\n", ho, dem, name3);

      // PHần C

      // 36. Nhập vào 3 cạnh tam giác, in ra chu vi.
      int canh1,canh2,canh3;
      printf("Nhập cạnh thứ nhất: ");
      scanf("%d",&canh1);
      printf("Nhập cạnh thứ hai: ");
      scanf("%d",&canh2);
      printf("Nhập cạnh thứ ba: ");
      scanf("%d",&canh3);
      printf("Chu vi tam giác là: %d\n\n", canh1 + canh2 + canh3);
      
      // 37. Nhập vào 3 cạnh tam giác, in ra diện tích (công thức Heron).
      int canh4, canh5, canh6;
      printf("Nhập cạnh thứ nhất: ");
      scanf("%d",&canh4);
      printf("Nhập cạnh thứ hai: ");
      scanf("%d",&canh5);
      printf("Nhập cạnh thứ ba: ");
      scanf("%d",&canh6);
      int p = ( canh4 + canh5 + canh6) / 2;
      printf("Diện tích tam giác là: %f\n\n", sqrt(p*(p- canh4)*(p -canh5)*(p-canh6)));
      

      // 38. Nhập vào một số nguyên có 2 chữ số, in ra hàng chục và hàng đơn vị.
      int k;
      printf("Nhập số có 2 chữ số: ");
      scanf("%d",&k);

      if ( k < 10 || k > 99) {
         printf("Vui lòng nhập số có 2 chữ số\n\n");
         return 1;
      }

      printf("Hàng chục của %d là: %d\n", k, k / 10);
      printf("Hàng đơn vị của %d là %d\n\n", k, k % 10);

      // 39. Nhập vào một số nguyên có 3 chữ số, in ra tổng các chữ số.
      int m;
      printf("Nhập số có 3 chữ số: ");
      scanf("%d",&m);
 
      if ( m < 100 || m > 999) {
         printf("Vui lòng nhập số có 3 chữ số\n\n");
         return 1;
      }

      int tram = m / 100;
      int chuc = (m / 10) % 10 ;  // OR (m % 100 ) / 10 
      int donvi = m % 10;

      printf("Tổng các chữ số là: %d\n\n",tram + chuc + donvi);

      // 40. Nhập vào một số nguyên, in ra đảo ngược của nó.
      int j, reversed = 0;
      printf("Nhập vào 1 số nguyên: ");
      scanf("%d",&j);

      int temp = j;

      while ( j > 0 ) {
            int digit = j % 10;
            reversed = reversed * 10 + digit;
            j /= 10;
      }
      printf("Đảo ngược của %d là: %d\n\n",temp, reversed);


      // 41. Nhập vào một ký tự thường, in ra ký tự hoa tương ứng.
      char ch;
      printf("Nhập vào 1 ký tự thường: ");
      scanf(" %c", &ch);

      printf("Kí tự hoa tương ứng: %c\n\n",toupper(ch));

      // 42. Nhập vào một ký tự hoa, in ra ký tự thường tương ứng.
      char th;
      printf("Nhập vào 1 ký tự hoa: ");
      scanf(" %c", &th);

      printf("Kí tự thường tương ứng: %c\n\n",tolower(th));


      // 43. Nhập vào một chuỗi (họ và tên), in ra từng ký tự trên mỗi dòng.
      char name4[50];
      printf("Nhập họ và tên: ");
      fgets(name4, sizeof(name4), stdin);

      name4[strcspn(name4, "\n")] = '\0';

      printf("Các ký tự trong chuỗi là: \n");
      for ( int i = 0; name4[i] != '\0' ; i++) {
            printf("%c\n",name4[i]) ;
      }

      // 44. Nhập vào một câu (dùng fgets), in ra lại.
      char cau[200];
      printf("Nhập vào 1 câu: ");
      fgets(cau, sizeof(cau), stdin);

      cau[strcspn(cau, "\n")] = '\0';
      printf("Câu đã nhập: %s\n\n", cau);

      // 45. Nhập vào điểm của 5 sinh viên, in ra danh sách điểm.
      float diem[5];
      for ( int i = 0; i < 5; i++) {
            printf("Nhập điểm SV %d: ",i+1);
            scanf("%f",&diem[i]);
      }

      printf("\nDanh sách điểm: \n");
      for ( int i = 0; i < 5; i++) {
            printf("Điểm SV %d: %.2f\n\n",i+1, diem[i]) ;
      }


      // 46. Nhập vào thông tin 1 sinh viên: tên, tuổi, điểm TB → in ra bảng thông tin.
      char name5[30];
      int age;
      float gpa;

      printf("Nhập tên: ");
      fgets(name5, sizeof(name5), stdin);
      name5[strcspn(name5, "\n") ] = '\0';

      printf("Nhập tuổi Sv: ");
      scanf("%d",&age);

      printf("Nhập điểm TB: ");
      scanf("%f",&gpa);

      printf("\n=====Bảng thông tin =====\n");
      printf("Tên:      %s\n",name5);
      printf("Tuổi:     %d\n",age);
      printf("Điểm TB:  %.2f\n\n",gpa);


      // 47. Nhập vào một số nguyên n, in ra bảng cửu chương của n.
      int q;
      printf("Nhập số nguyên n: ");
      scanf("%d",&q);

      for ( int i = 0; i <10 ; i++) {
            printf("%d x %d = %d\n\n",q, i, q * i);
      }

      // 48. Nhập vào nhiệt độ C, in ra nhiệt độ F.
      int C;
      printf("Nhập độ C: ");
      scanf("%d",&C);

      printf("Nhiệt độ F: %.2f\n\n", (C * 1.8) + 32);

      // 49. Nhập vào nhiệt độ F, in ra nhiệt độ C.
      int F;
      printf("Nhập độ F: ");
      scanf("%d",&F);
      printf("Nhiệt độ C: %.2f\n\n", (F - 32) / 1.8);

      // 50. Nhập vào 2 số và 1 ký tự toán tử (+ - * /), in ra kết quả phép toán tương ứng.
      float M, N;
      printf("Nhập số thứ nhất: ");
      scanf("%f",&M);
      printf("Nhập số thứ hai: ");
      scanf("%f",&N);

      char op;
      printf("Nhập toán tử: ");
      scanf(" %c",&op);
 
      if (op == '+' ) {
            printf("Kết quả %f + %f = %.2f\n\n",M,N,M + N);
      }
      else if ( op == '-') {
            printf("Kết quả %f - %f = %.2f\n\n",M,N,M - N);
      }
      else if ( op == '*') {
            printf("Kết quả %f * %f = %.2f\n\n",M,N,M * N);
      }
      else if ( op == '/') {
            if ( b != 0) 
                  printf("Kết quả %f / %f = %.2f\n\n",M,N,M / N);
            else
                  printf("Lỗi chia cho 0!\n");
      }
      else {
            printf("Toán tử không hợp lệ!");
      }

      return 0;
}