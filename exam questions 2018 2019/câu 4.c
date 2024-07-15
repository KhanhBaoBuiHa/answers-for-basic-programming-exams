//cau 4
#include "stdio.h"
#include "string.h"
void inputStates(char TTM[][30], char VT[][3]){
    for(int i=0;i<5;i++){
        printf("nhap ten tieu bang thu %d",i+1);
        fflush(stdin);
        gets(TTM[i]);
        printf("nhap ten viet tat");
        fflush(stdin);
        gets(VT[i]);
    }
}
void Search(char input[], char VT[][3], char TTM[][30]){
    printf("nhap ten viet tat :");
    fflush(stdin);
    gets(input);
    for(int i=0;i<5;i++){
        if(strcmp(input,VT[i])==0){
            printf("ten bang : %s",TTM[i]);
            return 0;
        }
    }
    printf("ky hieu khong ton tai");
}
int main(){
    char TTM[5][30];
    char VT[5][3];
    char input[10];
    inputStates(TTM,VT);
    Search(input, VT, TTM);
    return 0;
}