//cau 2
/*Viết chương trình nhập vào một ma trận vuông (có giá trị nguyên), kích thước do người dùng nhập
vào. Sau đó, kiểm tra ma trận đó có đối xứng qua đường chéo chính hay không.*/
#include "stdio.h"
int A[100][100];
int m;
void nhapMaTran(int A[100][100], int m){
    do{
    printf("nhap m cho ma tran A mxm :");
    printf("\nm = ");
    scanf("%d", &m);
    }while(m<=0);
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m; j++){
            printf("\nA[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
int coDoiXung(int A[100][100],int m){
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m;j++){
            if(A[i][j]!=A[j][i]){
                return 0;   
            }
        }
    }
    return 1;   
}
int main(){
    nhapMaTran(A,m);
    if(coDoiXung(A,m)){
        printf("\n1");
    }else{
        printf("\n0");
    }
}