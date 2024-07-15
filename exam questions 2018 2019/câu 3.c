//cau 3

#include "stdio.h"
int tinhPhi(int n){
    int phi=50;
    if(n>100&&n<=200){
        phi+=300*(n-100);
    }else if(n>200){
        phi+=300*100+400*(n-200);
    }
    return phi;
}
int main(){
    int soThueBao;
    int soTinNhan[100];
    int phi;
    printf("nhap so thue bao: ");
    scanf("%d", &soThueBao);
    for(int i=0;i<soThueBao;i++){
        printf("\nso tin nhan thue bao %d:", i+1);
        scanf("%d",&soTinNhan[i]);
        phi=tinhPhi(soTinNhan[i]);
        printf("phi: %d",phi);
    }
    return 0;
}