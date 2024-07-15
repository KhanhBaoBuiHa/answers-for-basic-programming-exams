//cau 3
//Sử dụng mảng để lưu danh sách mã môn học và tên môn học ở trên. Hãy viết chương trình cho
//phép nhập vào mã một môn học và in ra tên môn học tương ứng.
#include "stdio.h"
#include "string.h"
int main(){
    char input[10];
    char *a[]={"MTH00055","TTH105","TTH802","TTH573"};
    char *b[]={"Co so lap trinh","Toan roi rac","Mang may tinh","Lap trinh Web"};
    printf("nhap ma mon hoc: ");
    scanf("%s",input);
    for(int i=0;i<4;i++){
        if(strcmp(input, a[i]) == 0){
            printf("ten mon hoc: %s",b[i]);
            return 0;
        }
        printf("khong tim thay ma mon hoc");
    }
    return 0;
}