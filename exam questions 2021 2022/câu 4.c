//cau 4
/*Viết chương trình chuyển đổi một chuỗi (không có dấu câu) thành dạng tiêu đề. Ví dụ: “A simple
string” sẽ trở thành “A Simple String” và chương trình phải loại bỏ các khoảng trắng dư thừa có
trong chuỗi. Ví dụ, “A simple string” trở thành “A Simple String”.*/
#include "stdio.h"
#include "string.h"
int main(){
    char str[100];
    fflush(stdin);
    gets(str);
    int j=0;
    for(int i = 0; i < strlen(str); i++){
        str[j++] = str[i];
        if(str[i] == ' '){
            while(str[i+1] == ' ')
                i++;
        }
    }
    str[j]='\0';
    if(str[0]>=97 && str[0]<=122) str[0]= str[0]-32;
    for(int i = 0; i < strlen(str); i++){
        if(str[i]==' '){
            if(str[i+1]>=97 && str[i+1]<=122) str[i+1]= str[i+1]-32;
        }
    }
    printf("%s", str);
    return 0;
} 