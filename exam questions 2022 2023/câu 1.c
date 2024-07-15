//cau 1
/*viết chương trình để tính tổng các số nguyên tố nhỏ hơn 
số nguyên dương n nhập từ bàn phím*/
#include "stdio.h"
#include "math.h"
int main(){
    int n;
    int rs=0;
    do{
        printf("nhap n : ");
        scanf("%d", &n);
    }while(n<0);
    for (int num = 1; num < n; num++){
        int count = 0; 
        for (int i = 2; i <= sqrt(num); i++){
            if (num % i == 0){
                count++;
            }
        }
        if (count == 0 && num > 1)
            rs+=num;
    }
    printf("%d",rs);
}