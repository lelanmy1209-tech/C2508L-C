#include <stdio.h>
#include <math.h>

int main() {
      
      int a,b,c;
      float x, x1, x2;
      printf("Nhập a: ");
      scanf("%d",&a);
      printf("Nhập b: ");
      scanf("%d",&b);
      printf("Nhập c: ");
      scanf("%d",&c);

      // delta = b^2 - 4ac
      // delta < 0 ; Pt vô nghiệm
      // delta = 0: PT có nghiệm kép x1 =x2 = -b / 2a
      // delta > 0: Pt có 2 nghiệm phân biệt
      // x1 = ( -b + sqrt(delta) ) / 2a  
      // x2 = ( -b - sqrt(delta) ) / 2a  

      if ( a == 0 ) {
            if ( b == 0) {
                  if ( c == 0 ) 
                        printf("Phương trình vô số nghiệm\n");
                  else 
                        printf("Phương trình vô nghiệm\n");
                  }
            else {
                  x = -c / b;
                  printf("Phương trinh bậc 1,có nghiệm x = %.2f", x);
            }
      }else  {
            float delta = b*b - 4 * a * c;
            
            if ( delta < 0 )
               printf("Phương trình vô số nghiệm");
            else if ( delta == 0 ) {
               printf("Phương trình có nghiệm kép: \n");
               printf("x1 = x2 = %.2f", x = - b / ( 2 * a));
            }
            else {
               printf("Phương trình có 2 nghiệm phân biệt: \n");
               x1 = ( - b + sqrt(delta)) / 2 * a;
               x2 = ( - b - sqrt(delta)) / 2 * a;
               printf("x1 = %.2f\n", x1);
               printf("x2 = %.2f\n", x2);
            }
      }


      return 0;
}