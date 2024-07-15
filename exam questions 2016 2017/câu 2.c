#include "stdio.h"
int main(){
    int luong, bac;
    float thue;
    printf("nhap tien luong: ");//gia su ng dung nhap so > 0
    scanf("%d",&luong);
    bac=luong/5;
    switch(bac){
        case 1:
        thue=0;
        break;
        case 2:
        thue=(5.0/100)*(luong%5);
        break;
        case 3:
        thue=(10.0/100)*(luong%5)+(5.0/100)*5;
        break;
        default: 
        thue=(15.0/100)*(luong-20)+(10.0/100)*5+(5.0/100)*5;
    }
    printf("thue: %.2f",thue);
}