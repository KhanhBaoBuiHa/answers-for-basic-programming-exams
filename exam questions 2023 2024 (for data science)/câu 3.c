/*tính trọng số. input : chuỗi, tìm các số n các số từ có cung độ dài l*/
#include "stdio.h"
#include "string.h"
int main(){
    char str[100];
    float result=0;
    printf("Nhap chuoi : ");
    fflush(stdin);
    gets(str);
    int n = strlen(str);
    int cnt[n];
    for(int i=0;i<n;i++) cnt[i] = 0;
    for(int i=0;i<n;i++){
        int length = 0;
        if (str[i] != ' '){
            while (i<n && str[i] != ' '){
                length++;
                i++;
            }
            cnt[length]++;
        }
    }
    int temp1=0;
    int temp2=0;
    for (int i=0;i<n;i++){
        if(cnt[i]!=0){
            temp1+=i;
            temp2+=cnt[i]*i;
        }
    }
    result =(float)temp2/temp1;
    printf("Trung binh trong so : %.2f",result);
    return 0;
}
