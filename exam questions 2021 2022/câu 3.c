//cau 3

#include "stdio.h"
int tichVoHuong(float x[],float y[], int n , float tich ){
    for (int i=0; i<=n; i++){
        tich = 0;
        tich += x[i]*y[i];
    }  
}
int toaDo(int x[],int n){
    for (int i=0; i<=n; i++){
    scanf("%d", &x[i]);
    }
}
int main(){
    int n;
    float ketQua=0;
    int a[100];
    int b[100];
    float d[100];
    do{
        printf("nhap do dai vecto (0<n<101): ");
        scanf("%d",&n);
    } while(n<1 || n>101);
    printf("\ntoa do cac diem lan luot la: ");
    toaDo(a,n);
    toaDo(b,n);
    tichVoHuong(a,b,n,ketQua);
    printf("\ntich vo huong cua 2 vecto la: %.2f", ketQua);
}