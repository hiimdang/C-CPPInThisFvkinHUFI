#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
  int namduonglich,can,chi;
  char nam1[10],nam2[10];
  printf("Nhap vao so nam duong lich: ");
  scanf("%d", &namduonglich);
  can = (namduonglich-3)%10;
      switch(can){
      case 0:
          strcpy(nam1, "Quy");
        break;
      case 1:
          strcpy(nam1, "Giap");
        break;
      case 2:
          strcpy(nam1, "At");
        break;
      case 3:
          strcpy(nam1, "Binh");
        break;
      case 4:
          strcpy(nam1, "Dinh");
        break;
      case 5:
          strcpy(nam1, "Mau");
        break;
      case 6:
          strcpy(nam1, "Ky");
        break;
      case 7:
          strcpy(nam1, "Canh");
        break;
      case 8:
          strcpy(nam1, "Tan");
        break;
      case 9:
          strcpy(nam1, "Nham");
        break;
        
      default:
        break;
      }
chi = (namduonglich-3)%12;
      switch(chi){
      case 0:
        strcpy(nam2, "Hoi");
        break;
      case 1:
        strcpy(nam2, "Ty");
        break;
      case 2:
        strcpy(nam2, "Suu");
        break;
      case 3:
        strcpy(nam2, "Dan");
        break;
      case 4:
        strcpy(nam2, "Mao");
        break;
      case 5:
        strcpy(nam2, "Thin");
        break;
      case 6:
        strcpy(nam2, "Ty");
        break;
      case 7:
        strcpy(nam2, "Ngo");
        break;
      case 8:
        strcpy(nam2, "Mui");
        break;
      case 9:
        strcpy(nam2, "Than");
        break;
      case 10:
        strcpy(nam2, "Dau");
        break;
      case 11:
        strcpy(nam2, "Tuat");
        break;
      
      default:
        break;
      }
    printf("%s %s",nam1,nam2);
    getch();
}
