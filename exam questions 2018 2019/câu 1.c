//cau 1
#include "stdio.h"
int main(){
    int values[8]={126,64,32,16,8,4,2,1};
    int decimal = 224;
    int index = 0;
    int binary;
    for( ;index<8;index++){
        if(decimal>=values[index]){
            decimal=decimal-values[index];
            binary=1;
        }else{
            binary=0;
        }
        printf("%d",binary);
    }
    return 0;
}