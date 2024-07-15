//cau 2
/*tính tổng.....tự làm đc*/
#include "stdio.h"
#include "math.h"
int main(){
    int n;
    float S = 0;
    printf("nhap n : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        S=sqrt(2+S);
    }
    printf("dap an de bai la :%.2f", S);
}
