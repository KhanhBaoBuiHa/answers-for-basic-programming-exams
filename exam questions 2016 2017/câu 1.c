//cau 1 Cho một chuỗi bit biểu diễn số nhị phân có chiều dài n. Hãy vẽ sơ đồ khối flowchart để biểu diễn
//thuật toán chuyển đổi chuỗi bit ở trên thành số thập phân.
#include "stdio.h"
#include "math.h"
int main(){
    int n;
    int thapPhan=0;
    int a[100];
    printf("nhap chieu dai cua chuoi: ");
    scanf("%d",&n);
    printf("\nnhap cac chu so trong so nhi phan: ");
    for(int i=(n-1);i>=0;i--){
        scanf("%d",&a[i]);
        thapPhan+=a[i]*pow(2,i);
    }
    printf("so thap phan la %d", thapPhan);
}