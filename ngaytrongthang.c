#include <conio.h>
#include <stdio.h>

void main(){
    int thang,nam,ngay;
    printf("\nNhap vao nam: ");
    scanf("%d",&nam);
    printf("Nhap vao thang: ");
    scanf("%d",&thang);
    
    switch (thang){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        ngay = 31;
        break;
    
    case 4:
    case 6:
    case 9:
    case 11:
        ngay = 30;
        break;
    case 2:
        if(nam%400 == 0 || ( (nam%4==0) && (nam%100!=0) )){
            ngay = 29;
        } else {
            ngay = 28;
        }
    default:
        break;
    }
    printf("Thang %d cua nam %d co %d ngay",thang,nam,ngay);
    getch();
}