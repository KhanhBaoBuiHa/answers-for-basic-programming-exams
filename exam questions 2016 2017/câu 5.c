//cau 5
//Hãy viết một hàm cho phép đảo thứ tự các kí tự của một chuỗi. Sau đó viết chương trình cho phép
//nhập một chuỗi và in ra chuỗi bị đảo ngược.
#include "stdio.h"
#include "string.h"
int main(){
    char chuoi[100];
    char temp;
    printf("nhap chuoi: ");
    fgets(chuoi,sizeof(chuoi),stdin);
    chuoi[strcspn(chuoi, "\n")] = 0;
    int L = strlen(chuoi);
    int start = 0;
    int end = L-1;
    while(start<end){
        temp = chuoi[start];
        chuoi[start] = chuoi[end];
        chuoi[end] = temp;
        start++;
        end--;
    }
    printf("\nchuoi dao nguoc la: %s",chuoi);
}