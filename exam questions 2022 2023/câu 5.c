//cau 5
/*kiểm tra một mảng nguyên 2 chiều mà hàng nào có phần từ âm ko*/
#include "stdio.h"
int kiemTra(int a[100][100], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>0) return 0; 
        }
    }
    return 1;
}
int main(){
    int a[100][100];
    int m, n;
    printf("nhap hang ngang m :");
    scanf("%d",&m);
    printf("\nnhap hang ngang n :");
    scanf("%d",&n);
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("\na[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    if(kiemTra(a,m,n)){
        printf("\nyes");
    }else{
        printf("\nno");
    }
    return 0;
}