#include<stdio.h>
#include<string.h>
#include<windows.h>
struct SanPham{
	char tensanpham[30];
	int soluong;
	int gia;
	
};
typedef struct SanPham SANPHAM;
struct GioHang{
	char tenkhachhang[30];
	char diachi[30];
	int sosanpham;
	SANPHAM S[100];
};
typedef struct GioHang GIOHANG;

void nhap1(struct GioHang &gh){
	printf("\nNhap ten khach hang: ");
	fflush(stdin);
	gets(gh.tenkhachhang);
	printf("\nnhap dia chi: ") ;
	gets(gh.diachi) ;
	printf("\nnhap so san pham: ");
	 scanf("%d",&gh.sosanpham);
}
   void nhap2(SANPHAM &sp){
   	printf("\nNhap ten san pham :");
   	fflush(stdin);
   	gets(sp.tensanpham);
   	printf("\nNhap so luong san pham :");
   	scanf("%d",&sp.soluong);
   	printf("\Nhap gia : ");
   	scanf("%d",&sp.gia);
   }
    int  main(){
    GIOHANG A;
    SANPHAM S[30];
	printf("\n......MEMU......\n");
	printf("\n*.1 Tao gio hang \n");
    printf("\n*.2 Chon hang \n");
    printf("\n*.3 Xem chi tiet gio hang \n");
    printf("\n*.4 Loai bo mot mat hang \n");
    printf("\n*.5 Luu lai nhung mat hang da chon \n");
    printf("\n*.6 Exit \n");
	int chon;
    scanf("%d",&chon);
     switch (chon){
     	case 1 :
     		system("cls");
     		 nhap1(A);
     		
     	case 2 :
		    for (int i=0; i<A.sosanpham;i++) {
		    	nhap2(S[i]);
			}
			break;
		case 3 :
			printf("ket qua la");
			break;
		case 4 :
			printf("ket qua la ");
	        break;
	    case 5 :
			printf("ket qua la ");
	        break;
	    case 6 :
			printf("ket qua la ");
	        break;
}
}
