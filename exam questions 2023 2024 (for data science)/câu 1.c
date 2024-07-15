//cau 1
/*in ra các ước là số nguyên tố của 1 số nguyên đc nhập*/
#include "stdio.h"
#include "math.h"
int soNguyenTo(int x){
    if(x<=1) return 0;
    for(int j=2;j<sqrt(x);j++){
        if(x%j==0) return 0;
    }
    return 1;
}
void uocSoNguyenTo(int n){
    printf("Cac uoc so la so nguyen to cua %d la:\n", n);
    for (int i = 2; i <= n; i++) {
        if (n % i == 0 && soNguyenTo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
int main(){
    int N;
    printf("nhap N de in ra so nguyen to: ");
    scanf("%d",&N);
    if(N==1) {
        printf("\nN khong la so nguyen to ");
    } else{
        if(N<4){
            printf("\nN la so nguyen to");
        }else{
            uocSoNguyenTo(N);
        }
    }
}