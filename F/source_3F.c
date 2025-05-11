
void nhap_ma_tran_tu_ban_phim(float **matran,int dong,int cot){
	int i, j;
	for(i = 0;i < dong;i++){
		for(j = 0;j < cot;j++){
			printf("a[%d][%d]: ",i + 1,j + 1);
			scanf("%f",&matran[i][j]);
		}
	}
}
void nhap_ma_tran_tu_file_van_ban(float **matran,const char *filename,int *dong,int *cot){
	FILE *f = fopen(filename,"r");
	if(!f){
		printf("khong the mo duoc file%s \n");
		return;
	}
	fscanf(f,"%d %d",dong,cot);
	int i, j;
	for(i = 0;i < *dong;i++){
		for(j = 0;j < *cot;j++){
			fscanf(f,"%f",&matran[i][j]);
		}
	}
	fclose(f);
}
void ghi_ra_file_van_ban(float **matran,const char *filename,int dong,int cot){
	FILE *f = fopen(filename,"w");
	if(!f){
		printf("khong the mo file %s\n",filename);
		return ;
	}
	int i,j;
	fprintf(f,"%d %d\n",dong,cot);
	for(i = 0;i < dong;i++){
		for(j = 0;j < cot;j++){
			fprintf(f,"%.2f\t",matran[i][j]);
		}	
		fprintf(f,"\n");
	}
	fclose(f);
}
void ghi_ra_file_nhi_phan(float **matran,const char *filename,int dong,int cot){
	FILE *f = fopen(filename,"wb");
	if(!f){
		printf("khong the mo file %s\n",filename);
		return;
	}
	fwrite(&dong,sizeof(int),1,f);
	fwrite(&cot,sizeof(int),1,f);
	int i;
	for(i = 0;i < dong;i++){
		fwrite(matran[i],sizeof(float),cot,f);
	}
	fclose(f);
}
void nhap_tu_file_nhi_phan(float **matran,const char *filename,int *dong,int *cot){
	FILE *f = fopen(filename,"rb");
	if(!f){
		printf("khong the mo file %s\n",filename);
		return;
	}
	fread(dong,sizeof(int),1,f);
	fread(cot,sizeof(int),1,f);
	int i;
	for(i = 0;i < *dong;i++){
		fread(matran[i],sizeof(float),*cot,f);
	}
		fclose(f);
}
void hien_thi_ma_tran(float **matran,int dong,int cot){
	printf("ma tran: \n");
    int i, j;
	for(i = 0;i < dong;i++){
		for(j = 0; j < cot;j++){
			printf("%5.2f",matran[i][j]);
		}
		printf("\n");
	}
}
