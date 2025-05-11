#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Hang_hoa{
	char ten_hang[100];
	int so_luong;
	char loai_hang[50];
}Hang_hoa;
void nhap_danh_sach(Hang_hoa ds[],int *n);
void xuat_danh_sach_hang_hoa_file_van_ban(Hang_hoa *ds,int n,const char *filename);
int tong_so_luong_tat_ca_hang_hoa(Hang_hoa ds[],int n);
void tim_kiem_theo_ten(Hang_hoa ds[],int n, const char *ten_can_tim);
void sap_xep_theo_ten(Hang_hoa ds[], int n);
void xuat_file_nhi_phan(Hang_hoa ds[], int n, const char *filename);

