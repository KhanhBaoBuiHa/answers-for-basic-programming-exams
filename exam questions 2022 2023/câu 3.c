//cau 3
/*thông báo các điểm xuất hiện nhiêu lần*/
#include "stdio.h"
int main(){
    int count[100]={0};
    int grade;
    
    printf("nhap cac diem");
    do{
    scanf("%d",&grade);
    count[grade]++;
    } while(grade<0);
    
    printf("\nThong ke so luong diem :");
    for (int i = 0; i <= 10; i++){
        printf("\nDiem %d co %d", i, count[i]);
    }
}