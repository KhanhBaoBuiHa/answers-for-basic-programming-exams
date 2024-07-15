//cau 4
/*Viết chương trình nhập một mảng số nguyên dương, sao cho các phần tử có giá trị từ 0 đến 10. Sau
đó, chương trình sẽ tìm con số xuất hiện nhiều nhất trong mảng vừa nhập vào.*/
#include "stdio.h"
int main(){
    int count[100]={0};
    int a, max, rs;
    printf("nhap chuoi: ");
    do{
        scanf("%d",&a);
        count[a]++;
    }while(a>0 && a<10);
    max=count[0];
    for(int i=0;i<=10;i++){
        if(count[i]>max){
            max=count[i];
            rs=i;
        }       
    }
    printf("so xuat hien nhieu nhat la %d, xuat hien %d lan",rs, count[rs]);
    return 0;
}