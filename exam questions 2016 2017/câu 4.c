//Viết một chương trình cho phép nhập một mảng số nguyên. Sau đó, chương trình phải tính được
//mean (trung bình) của mảng trên, và đồng thời đếm được có bao nhiêu phần tử lớn hơn mean của
//mảng.
#include "stdio.h"
float tinhMean(int t, int m){
    return (float)t/m;
}
void soSanh(int m, int y[], float x){
    printf("cac so lon hon so trung binh la:");
    for(int j=0;j<m;j++){
        if(y[j]>x){
            printf("%d ",y[j]);
        }
    }
}
int main(){
    int n;
    int temp=0;
    int a[100];
    float tb;
    printf("nhap do dai chuoi: ");
    scanf("%d",&n);
    printf("nhap cac phan tu cua mang: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        temp +=a[i];
    }
    tb = tinhMean(temp, n);
    printf("trung binh: %.2f",tb);
    soSanh(n,a,tb);
}