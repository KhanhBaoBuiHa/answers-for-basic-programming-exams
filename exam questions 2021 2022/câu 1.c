/*Vẽ sơ đồ mô tả thuật toán của chương trình nhập 1 dãy n điểm (p0; p1; ⋯ ; pn−1) trong không gian
2 chiều, với n nhập từ bàn phím; rồi chương trình tính tổng khoảng cách giửa 2 điểm liên tiếp nhau
(d(p0; p1) + d(p1; p2) + ⋯ ), sử dụng hàm sqrt() của “math.h”.*/
#include "stdio.h"
#include "math.h"
void toaDo(int x[],int n){
    for (int i=0; i<n; i++){
    scanf("%d", &x[i]);
    }
}
int main(){
    int n;
    float sum = 0;
    int a[100];
    int b[100];
    float d[100];
    do{
        printf("nhap so luong cac diem (0<n<101): ");
        scanf("%d",&n);
    } while(n<1 || n>101);
    printf("\ntoa do cac diem lan luot la");
    toaDo(a,n);
    toaDo(b,n);
    for(int i=0; i<(n-1); i++){
        d[i] = sqrt( pow(a[i]-a[i+1],2) + pow(b[i]-b[i+1],2));
        sum +=d[i];
    }
    printf("\ndap an la %.2f", sum);
}