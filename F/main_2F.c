#include"header_2F.h"
#include"source_2F.c"
int main_2F(){
	Hang_hoa ds[100];
	int n;
	nhap_danh_sach(ds,&n);
	xuat_danh_sach_hang_hoa_file_van_ban(ds,n,"output_2F.txt");
	printf("\nda ghi vao danh sanh hang hoa vao file output_2F.txt\n");
	int tong = tong_so_luong_tat_ca_hang_hoa(ds,n);
	printf("\ntong tat ca hang hoa trong danh sach la:%d\n",tong);
	char ten_can_tim[100];
	printf("\nnhap ten hang hoa can tim: ");
	
	fflush(stdin); gets(ten_can_tim);
	tim_kiem_theo_ten(ds,n,ten_can_tim);
	sap_xep_theo_ten(ds, n);
    xuat_file_nhi_phan(ds, n, "output_2F.dat");
    printf("\nda ghi vao danh sanh hang hoa vao file output_2F.dat\n");
    return 0;
}


