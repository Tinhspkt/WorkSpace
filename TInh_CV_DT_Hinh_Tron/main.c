#include <stdio.h>

int main() {
    float r,S,C;
    const float pi=3.14;
    printf("Tinh CV Va DRT Hinh Tron:\n");
/* CV hinh tron C = 2r*3.14
   DT hinh tron S= r*r*3.14  */
    printf("Hay nhap ban kinh r cua hinh tron:");
    scanf("%f", &r);

    if (r<=0 | r >=1000)
    {
        printf("hay nhap lai gia tri r >0 && r < 1000");
    }
    else
    S = 2*r*pi;
    C = r*r*pi;
    {
        printf("\nChu Vi Hinh Tron La: %f", S);
        printf("\nDien Tich Hinh Tron La: %f", C);
    }
    return 0;
}
