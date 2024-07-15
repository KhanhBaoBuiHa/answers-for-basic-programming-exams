//cau 3
/*Hãy viết một hàm nhận 2 tham số là 2 chuỗi và so sánh 2 chuỗi xem có giống nhau hay không. Nếu
2 chuỗi truyền vào giống nhau thì hàm trả về 1, ngược lại thì trả về 0. Sau đó viết chương trình cho
phép nhập 2 chuỗi, xuất ra “Giống nhau” nếu 2 chuỗi giống nhau và xuất ra “Khác nhau” nếu 2
chuỗi khác nhau.*/
#include "stdio.h"
#include "string.h"
int soSanh(char x[], char y[]){
    int i = 0;
    while(x[i] != '\0' && y[i] != '\0'){
        if(x[i] != y[i]){
            return 0;
        }
        i++;
    }
    if(x[i] == '\0' && y[i] == '\0'){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    char a[100], b[100];
    printf("Nhap hai chuoi:\n");
    scanf("%s", a);
    scanf("%s", b);

    int La = strlen(a);
    int Lb = strlen(b);

    if(La != Lb){
        printf("Khac nhau\n");
        return 0;
    }
    if(soSanh(a, b)){
        printf("Giong nhau\n");
    } else {
        printf("Khac nhau\n");
    }
    return 0;
}