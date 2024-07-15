//cau 5 
/*kiểm tra ma trận đối xứng tâm*/
#include "stdio.h"
int A[100][100];
int m, n;
void nhapMaTran(int A[100][100], int m, int n){
    do{
    printf("nhap m va n cho ma tran A mxn :");
    printf("\nm = ");
    scanf("%d", &m);
    
    printf("\nn = ");
    scanf("%d", &n);
    }while(m<=0 || n<=0);
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            printf("\nA[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}
int coDoiXungTam(int A[100][100],int m, int n){
    for(int i=1; i<=m; i++){
        int s=(m+1)-i;
        for(int j=1; j<=n;j++){
            int r=(n+1)-j;
            if(A[i][j]!=A[s][r]){
                return 0;   
            }
        }
    }
    return 1;   
}
int main(){
    nhapMaTran(A,m,n);
    if(coDoiXungTam(A,m,n)){
        printf("\n1");
    }else{
        printf("\n0");
    }
}