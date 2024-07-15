//cau 1
/*Vẽ sơ đồ mô tả thuật toán của chương trình nhập 1 dãy số nguyên dương từ bàn phím.
Chương trình đồng thời đếm có bao nhiêu số nguyên tố trong dãy số vừa nhập vào. Sau đó cài đặt
chương trình trên bằng ngôn ngữ lập trình C.
#include "stdio.h"*/
int main(){
    int a;
    int cnt=0;
    printf("nhap day so nguyen duong");
    while(a>0){
        scanf("%d",&a);
        cnt++;
    }
    printf("so cac so nguyen duong la %d",cnt-1);
    return 0;
}