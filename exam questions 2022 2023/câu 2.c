/*tính tổng S=1+1.2+1.2.3+...+1.2..n*/
#include "stdio.h"
int main(){
    int n,rs=0;
    int s[100];
    do{
        printf("nhap n: ");
        scanf("%d",&n);
    }while(n<0);
    for(int i=1; i<=n; i++){
        int temp=1;
        for(int r=1;r<=i;r++){
            temp*=r;
        }
        s[i-1]=temp;
    }
    for(int j=0; j<n; j++){
        rs +=s[j];
    }
    printf("dap an la: %d",rs);
}