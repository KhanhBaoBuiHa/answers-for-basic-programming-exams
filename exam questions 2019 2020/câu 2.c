//cau 2
/*Vẽ sơ đồ mô tả thuật toán của chương trình tìm tổng của S(n) = 1 × 2 + 2 × 3 + 3 × 4 + ⋯ +
nx(n + 1) với n nhập từ bàn phím (2 ≤ n ≤ 100). Sau đó cài đặt chương trình trên bằng ngôn ngữ
lập trình C.*/
#include "stdio.h"
int main(){
    int S=0;
    int n;
    do{
    printf("nhap n: ");
    }while(n<2 || n>100);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        S+=i*(i+1);
    }
    printf("ket qua S(n) la: %d",S);
    return 0;
}