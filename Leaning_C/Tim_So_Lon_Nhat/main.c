#include <stdio.h>

int main() {
    float a,b;

    printf("nhap 2 so a va b bat ky:");

    printf("\nnhap so a bat ky:");
    scanf("%f", &a);
    printf("\nnhap so a bat ky:");
    scanf("%f", &b);

    if (a>=1000 | b >=1000)
    {
        printf("vui long nhap lai ab <1000");
    }
    else
    {
        if(a>b)
        {
            printf("A la so lon nhat: %f", a);
        }
        else
        {
            printf("B la so loin nhat: %f", b);
        }
    }
        return 0;
}
