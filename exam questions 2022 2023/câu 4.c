//cau 4
/*nhân bản chuỗi*/
#include "stdio.h"
int main(){
    char str[100];
    int n;
    printf("nhap chuoi : ");
    fflush(stdin);
    gets(str);
    printf("\nnhap so lan nhan ban : ");
    scanf("%d",&n);
    printf("\nday nhan ban la : ");
    for(int i=0;i<n;i++){
        printf("%s",str);
    }
    return 0;
}