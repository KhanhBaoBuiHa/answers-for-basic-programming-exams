// cau 4
/*dãy đồng trị. ví dụ nhập n =8 và dãy số nguyên 3 4 4 4 17 2 2 1 thì suất ra số dãy con đồng trị là 2 ( 4 4 4 và 2 2)*/
#include "stdio.h"
#include "string.h"
int demDayDongTri(int a[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        int dem = 1;
        while(i<(n-1) && a[i] == a[i+1]){
            dem++;
            i++;
        }
        if(dem>=2){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    int a[100];
    do {
        printf("nhap so luong phan tu mang 0<n<100: ");
        scanf("%d",&n);
    } while(n<1 || n>100);
    //nhap du lieu cho mang
    for(int i=0; i<n; i++){
           printf("\na[%d]=",i);
           scanf("%d", &a[i]);
    }
    int result = demDayDongTri(a,n);
    printf("\nSo day con dong tri la: %d", result);
    return 0;
}