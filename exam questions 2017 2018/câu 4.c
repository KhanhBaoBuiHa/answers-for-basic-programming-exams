//cau 4
/*Hãy viết một chương trình cho phép nhập một số chuỗi bất kì. Giả sử người dùng nhập 4 chuỗi
chương trình cho phép nhập 1 con số trong khoảng từ 1 đến 4 (tương ứng với số chuỗi mới
nhập) và in ra chuỗi tương ứng.*/
#include "stdio.h"
#include "string.h"
void input(int n, char a[][100]){
    printf("Nhập các chuỗi:\n");
    for(int i = 0; i < n; i++){
        getchar();
        fgets(a[i], sizeof(a[i]), stdin);
        a[i][strcspn(a[i], "\n")] = '\0';
    }
}
void getString(int m, int n, char a[][100]){
    if (m >= 1 && m <= n) {
        printf("%s\n", a[m-1]);
    } else {
        printf("Số không hợp lệ.\n");
    }
}
int main(){
    int n, m;
    char a[100][100]; 
    printf("Có bao nhiêu chuỗi? ");
    scanf("%d", &n);
    input(n, a);
    printf("Nhập số: ");
    scanf("%d", &m);
    getString(m, n, a);
    return 0;
}