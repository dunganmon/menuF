#include"header_3F.h"
#include"source_3F.c"
int main_3F(){
    int dong, cot;
    float **matran = NULL;
    int da_cap_phat = 0;
    int lua_chon;

    do {
        printf("\n==== MENU ====\n");
        printf("1. Nhap ma tran tu ban phim\n");
        printf("2. Ghi ma tran ra file van ban\n");
        printf("3. Ghi ma tran ra file nhi phan\n");
        printf("4. Doc ma tran tu file van ban\n");
        printf("5. Doc ma tran tu file nhi phan\n");
        printf("6. Hien thi ma tran\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &lua_chon);

        switch(lua_chon) {
            case 1:
                printf("Nhap so dong: ");
                scanf("%d", &dong);
                printf("Nhap so cot: ");
                scanf("%d", &cot);
                if (da_cap_phat) {
                    int i;
					for (i = 0; i < dong; i++) free(matran[i]);
                    free(matran);
                }
                matran = (float**)malloc(dong * sizeof(float*));
                int i;
				for (i = 0; i < dong; i++) {
                    matran[i] = (float*)malloc(cot * sizeof(float));
                }
                da_cap_phat = 1;

                nhap_ma_tran_tu_ban_phim(matran, dong, cot);
                break;

            case 2:
                ghi_ra_file_van_ban(matran, "output_3F.txt", dong, cot);
                break;

            case 3:
                ghi_ra_file_nhi_phan(matran, "output_3F.dat", dong, cot);
                break;

            case 4:
                nhap_ma_tran_tu_file_van_ban(matran, "input_3F.txt", &dong, &cot);
                break;

            case 5:
                nhap_tu_file_nhi_phan(matran, "input_3F.dat", &dong, &cot);
                break;

            case 6:
                hien_thi_ma_tran(matran, dong, cot);
                break;

            case 0:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le\n");
                
		}

    } while (lua_chon != 0);
    if (da_cap_phat) {
        int i;
		for (i = 0; i < dong; i++) free(matran[i]);
        free(matran);
    }

    return 0;
}

