//cau 2
/*Viết chương trình C nhập 1 dãy số là các điểm thi học kỳ của một sinh viên, dừng nhập khi điểm thi
nhập vào là số âm. Các điểm thi có thể lẻ đến 0.5, và nằm trong đoạn từ 0 đến 10.
Sau đó chương trình sẽ thống kê và in ra có bao nhiêu điểm: 0; 0.5; 1.0; ⋯*/
#include "stdio.h"
int main(){
    int cnt[21]={0};
    float diemthi[21]={0};
    for(int i=1;i<=20;i++){
        diemthi[i]=diemthi[i-1]+0.5;
    }
    float n;
    while(1){
        printf("Nhap diem thi vao:");
        scanf("%f",&n);
        if(n<0) break;
        int dem;
        for(int i=0;i<21;i++){
            if(diemthi[i]==n) dem=i;
        }
        cnt[dem]++;
    }
    for(int i=0;i<21;i++){
        if(cnt[i]!=0)
        printf("Diem thi %0.1f co %d em\n", diemthi[i], cnt[i]);
    }
    return 0;
}