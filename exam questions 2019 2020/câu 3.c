//cau 3
/*Viết chương trình nhập vào một mảng số thực. Sau đó, nhập vào 1 số thực x. Chương trình tìm số
thực trong mảng vừa nhập vào sao cho gần giá trị x nhất.*/
#include "stdio.h"
#include "stdlib.h"
int main(){
    int a[100];
    int n, rs;
    float x, min;
    float temp[100];
    printf("nhap x: ");
    scanf("%f",&x);
    printf("\nnhap do dai mang: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\na[%d]= ",i);
        scanf("%d",&a[i]);
        temp[i] = abs(x-a[i]); 
    }
    min=temp[0];
    for(int i=0;i<n;i++){
        if(temp[i]<min){
            min=temp[i];
            rs=a[i];
        }    
    }
    printf("so gan nhat la %d", rs );
    return 0;
}