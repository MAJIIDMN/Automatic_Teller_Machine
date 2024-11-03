#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void menu()
{
	
	printf("MENU PENARIKAN CEPAT\nSILAHKAN PILIH JUMLAH PENARIKAN\n");
	printf(" 1. 250.000\n 2. 500.000\n 3. 1.000.000\n 4. JUMLAH PENARIKAN LAIN\n 5. SETORAN TUNAI\n 6. MENU LAIN\n");
}

void next_menu()
{
	printf("PILIH TRANSAKSI YANG ANDA INGINKAN\n");
	printf(" 7. TRANSFER\n 8. INFORMASI SALDO\n 9. UBAH PIN\n 10. GANTI NOMOR\n 11. MENU SEBELUMNYA\n");
}

void setor(){
	
	
	printf("PASTIKAN UANG TIDAK LUSUH, TIDAK TERLIPAT, TIDAK BER-KLIP\nPECAHAN UANG YANG DAPAT DISETOR 50.000, 100.000\n\n");
	printf("JIKA ADA MASALAH PADA SAAT ANDA BERTANSAKSI\nHUBUNGI CABANG TERDEKAT ATAU BANK CALL 109202");
	getch();
	system("cls");
	printf("PILIH JENIS SETORAN ANDA\n");
	printf(" 1. REKENING GIRO\n 2. REKENING TABBUNGAN\n 3. KE MENU UTAMA\n");
}

void tarik()
{
	
	printf("MASUKAN NOMINAL YANG INGIN DITARIK\n");
	printf("(MASIMAL PENARIKAN SEJUMLAH 2.500.000)\n");
}
void nomc()
{
	printf("PILIH NOMINAL PECAHAN\n");
	printf(" 1. PECAHAN 50.000\n 2. PECAHAN 100.000\n");
}

int main(){
	
	srand(time(NULL));
			
	int a, b, c, i, j, k, leght;
	int wd;
	int l;
	int acc1;
	int bal1;
	int nom[100];
	int indx = 0;
	int max = 50000;
	int sizeNom = sizeof(nom)/sizeof(nom[0]);
	system("color 1E");
	j = 0;
	k = 0;
	
	FILE *us, *acc, *bal, *num;
	int buff1;
	int buff2;
	int buff3;
	char buff4[13];
	int size = 15;
	int user[100];
	int account[100];
	int balance[100];
	char number[100][13];
	int n = 0;
	int ii = 0;
	int jj = 0;
	int kk= 0;
	int nn = 0;
	
	while (5000000>=max)
	{
		nom[indx] = max;
		max = max + 50000;
		indx++;
	}
	
	int idx = rand()%sizeNom;
	
	while(j<1){
		us = fopen("user.txt", "r");
		acc = fopen("account.txt", "r");
		bal = fopen("balance.txt", "r");
		num = fopen("num.txt", "r");
		while (fscanf(us, "%d",&buff1) != EOF && ii<30)
		{
			user[ii] = buff1;
			ii++;
		}
		while (fscanf(acc, "%d",&buff2) != EOF && jj<30)
		{
			account[jj] = buff2;
			jj++;
		}
		while (fscanf(bal, "%d",&buff3) != EOF && kk<30)
		{
			balance[kk] = buff3;
			kk++;
		}
		while (fscanf(num, "%s", number[nn]) != EOF &&nn<30)
		{
			nn++;
		}
		leght = sizeof(user)/sizeof(user[0]);
		printf("Masukan pin ATM : ");
		scanf("%d",&c);
		system("cls");
		
		for(i = 0; i<leght; i++)
		{
			if (user[i] == c)
				{
					menu();
					printf("SILAHKAN  MASUKAN PILIHAN : ");
					scanf("%d", &a);
					system("cls");
					switch(a){
						case 1:
							nomc();
							printf("SILAHKAN  MASUKAN PILIHAN : ");
							scanf("%d", &b);
							system("cls");
							if(b == 1||b == 2)
							{
								balance[i] = balance[i] - 250000;
								
								printf("SALDO ANDA SEJUMLAH RP%d\n\n", balance[i]);
								
								printf("APAKAH ANDA INGIN MELANJUTKAN TRANSAKSI\n");
								printf(" 1. YA\n 2. TIDAK\n");
								printf("SILAHKAN  MASUKAN PILIHAN : ");
								scanf("%d", &b);
								system("cls");
								if(b == 1){
									j = 0;
							 	}else if(b == 2){
							 		j = 1;
								}else{
									printf("PILIHAN TIDAK TERSEDIA");
									i = i - 1;
									getch();
									system("cls");
								}
							}else{
								printf("PILIHAN TIDAK TERSEDIA");
								i = i - 1;
								getch();
								system("cls");
							}
						break;
						case 2:
							nomc();
							printf("SILAHKAN  MASUKAN PILIHAN : ");
							scanf("%d", &b);
							system("cls");
							if(b == 1||b == 2)
							{
								balance[i] = balance[i] - 500000;
								printf("SALDO ANDA SEJUMLAH RP%d\n\n", balance[i]);
								
								printf("APAKAH ANDA INGIN MELANJUTKAN TRANSAKSI\n");
								printf(" 1. YA\n 2. TIDAK\n");
								printf("SILAHKAN  MASUKAN PILIHAN : ");
								scanf("%d", &b);
								system("cls");
								if(b == 1){
									j = 0;
							 	}else if(b == 2){
							 		j = 1;
								}else{
									printf("PILIHAN TIDAK TERSEDIA");
									i = i - 1;
									getch();
									system("cls");
								}
							}else{
								printf("PILIHAN TIDAK TERSEDIA");
								i = i - 1;
								getch();
								system("cls");
							}
						break;
						case 3:
							nomc();
							printf("SILAHKAN  MASUKAN PILIHAN : ");
							scanf("%d", &b);
							system("cls");
							if(b == 1||b == 2)
							{
								balance[i] = balance[i] - 1000000;
								printf("SALDO ANDA SEJUMLAH RP%d\n\n ", balance[i]);
								printf("APAKAH ANDA INGIN MELANJUTKAN TRANSAKSI\n");
								printf(" 1. YA\n 2. TIDAK\n");
								printf("SILAHKAN  MASUKAN PILIHAN : ");
								scanf("%d", &b);
								system("cls");
								if(b == 1){
									j = 0;
							 	}else if(b == 2){
							 		j = 1;
								}else{
									printf("PILIHAN TIDAK TERSEDIA");
									i = i - 1;
									getch();
									system("cls");
								}
							}else{
								printf("PILIHAN TIDAK TERSEDIA");
								i = i - 1;
								getch();
								system("cls");
							}
						break;
						case 4:
							tarik();
							scanf("%d", &wd);
							system("cls");
							if (wd > 0 && wd<2500000)
							{
								nomc();
								printf("SILAHKAN  MASUKAN PILIHAN : ");
								scanf("%d", &b);
								system("cls");
								if(b == 1||b == 2)
								{
									balance[i] = balance[i] - wd;
									printf("SALDO ANDA SEJUMLAH RP%d\n\n", balance[i]);
									
									printf("APAKAH ANDA INGIN MELANJUTKAN TRANSAKSI\n");
									printf(" 1. YA\n 2. TIDAK\n");
									printf("SILAHKAN  MASUKAN PILIHAN : ");
									scanf("%d", &b);
									system("cls");
									if(b == 1){
										j = 0;
								 	}else if(b == 2){
								 		j = 1;
									}else{
										printf("PILIHAN TIDAK TERSEDIA");
										i = i - 1;
										getch();
										system("cls");
									}
								}else{
									printf("PILIHAN TIDAK TERSEDIA");
									i = i - 1;
									getch();
									system("cls");
								}
							}else
							{
								printf("EROR 404");
								i = i - 1;
								getch();
								system("cls");
							}
						break;
						case 5:
							setor();
							printf("SILAHKAN  MASUKAN PILIHAN : ");
							scanf("%d", &b);
							system("cls");
							if (b == 1){
								printf("UANG YANG ANDA SETORKAN SEBESAR RP%d\n", nom[idx]);
								printf("SALDO ANDA SEJUMLAH RP%d\n\n ", balance[i]);
								getch();
								system("cls");
								printf("APAKAH ANDA INGIN MELANJUTKAN TRANSAKSI\n");
								printf(" 1. YA\n 2. TIDAK\n");
								printf("SILAHKAN  MASUKAN PILIHAN : ");
								scanf("%d", &b);
								system("cls");
								if(b == 1){
									j = 0;
							 	}else if(b == 2){
							 		j = 1;
								}else{
									printf("PILIHAN TIDAK TERSEDIA");
									i = i - 1;
									getch();
									system("cls");
								}
							}else if(b == 2)
							{
								printf("UANG YANG ANDA SETORKAN SEBESAR RP%d\n", nom[idx]);
								balance[i] = balance[i] + nom[idx];
								printf("SALDO ANDA SEJUMLAH RP%d\n ", balance[i]);
								getch();
								system("cls");
								printf("APAKAH ANDA INGIN MELANJUTKAN TRANSAKSI\n");
								printf(" 1. YA\n 2. TIDAK\n");
								printf("SILAHKAN  MASUKAN PILIHAN : ");
								scanf("%d", &b);
								system("cls");
								if(b == 1){
									j = 0;
							 	}else if(b == 2){
							 		j = 1;
								}else{
									printf("PILIHAN TIDAK TERSEDIA");
									i = i - 1;
									getch();
									system("cls");
								}	
							}
							else if(b == 3)
							{
								i = i-1;
							}else{
								printf("PILIHAN TIDAK TERSEDIA");
								i = i - 1;
								getch();
								system("cls");
							}
						break;
						case 6:
							next_menu();
							printf("SILAHKAN  MASUKAN PILIHAN : ");
							scanf("%d", &b);
							system("cls");
							if (b == 7)
							{
								printf("PILIH BANK TUJUAN\n");
								printf(" 1. SESAMA BANK\n 2. BANK LAIN\n");
								printf("SILAHKAN  MASUKAN PILIHAN : ");
								scanf("%d", &b);
								if (b == 1)
								{
									a = 0;
									while(a<1)
									{
										system("cls");
										printf("MASUKAN NOMOR REKENNG TUJUAN\n");
										scanf("%d", &acc1);
										for(ii = 0; ii<30; ii++)
										{
											if(acc1 == account[ii])
											{
												system("cls");
												printf("MASUKAN NOMINAL TRANSFER\n");
												scanf("%d", &bal1);
												if (bal1 > 0 && bal1 <balance[i])
												{
													balance[ii] = balance[ii] + bal1;
													balance[i] = balance[i] - bal1;
													system("cls");
													printf("TRANFER BERHASIL\n");
													printf("SALDO ANDA SEJUMLAH RP%d\n", balance[i]);
													getch();
													system("cls");
													printf("APAKAH ANDA INGIN MELANJUTKAN TRANSAKSI\n");
													printf(" 1. YA\n 2. TIDAK\n");
													printf("SILAHKAN  MASUKAN PILIHAN : ");
													scanf("%d", &b);
													system("cls");
													if(b == 1){
														j = 0;
														a = 1;
												 	}else if(b == 2){
														j = 1;
														a = 1;
													}else{
														printf("PILIHAN TIDAK TERSEDIA");
														i = i-1;
														a = 1;
														getch();
														system("cls");
													}
												}else
												{
													printf("EROR 404");
													i = i - 1;
													getch();
													system("cls");
												}	
											} 
										}
										if(a == 0)
										{
											system("cls");
											printf("NOMOR REKENING SALAH");
											getch();
											system("cls");
										}
									}	
								}else if( b == 2)
								{
									system("cls");
									printf("MASUKAN NOMOR REKENNG TUJUAN\n");
									scanf("%d", &acc1);
									system("cls");
									printf("MASUKAN NOMINAL TRANSFER\n");
									scanf("%d", &bal1);
									if (bal1>0)
									{
										balance[i] = balance[i] - bal1;
										system("cls");
										printf("TRANFER BERHASIL\n");
										printf("SALDO ANDA SEJUMLAH RP%d\n", balance[i]);
										getch();
										system("cls");
										printf("APAKAH ANDA INGIN MELANJUTKAN TRANSAKSI\n");
										printf(" 1. YA\n 2. TIDAK\n");
										printf("SILAHKAN  MASUKAN PILIHAN : ");
										scanf("%d", &b);
										system("cls");
										if(b == 1){
											j = 0;
											a = 1;
									 	}else if(b == 2){
											j = 1;
											a = 1;
										}else{
											printf("PILIHAN TIDAK TERSEDIA");
											i = i-1;
											a = 1;
											getch();
											system("cls");
										}
									}else
									{
										printf("EROR 404");
										i = i - 1;
										getch();
										system("cls");
									}
								}
							}
							else if(b == 8)
							{
								printf("SALDO ANDA SEJUMLAH RP%d\n", balance[i]);
								getch();
								system("cls");
								i = i-1;
							}
							else if(b == 9)
							{
								a = 0;
								while(a<1)
								{
									printf("MASUKAN PIN BARU ANDA\n");
									scanf("%d", &user[i]);
									system("cls");
									printf("KONFIRMASI PIN ANDA\n");
									scanf("%d", &a);
									system("cls");
									if (user[i] == a)
									{
										printf("PIN ANDA TELAH DIGANTI");
										a = 1;
									}
									else
									{
										printf("MASUKAN PIN YANG SAMA");
									}
									getch();
									system("cls");
								}	
							}
							else if (b == 10)
							{
								printf("NOMOR ANDA SAAT INI ADALAH %s\n", number[i]);
								printf("MASUKAN NOMOR BARU ANDA\n");
								scanf("%s", &number[i]);
								system("cls");
								printf("NOMOR ANDA TELAH DIGANTI");
								getch();
								system("cls");
								printf("NOMOR ANDA SAAT INI ADALAH %s\n", number[i]);
								getch();
								system("cls");
							}
							else if (b == 11)
							{
								i = i-1;
							}else
							{
								printf("MASUKAN PILIHAN YANG TERSEDIA");
								getch();
								system("cls");
								i = i - 1;
							}
						break;
						default:
							printf("MASUKAN PILIHAN YANG TERSEDIA\n");
							i = i-1;
							getch();
							system("cls");
						break;
					}
					k = 1;	
				}
		}
		if (k == 0)
		{
			printf("PIN SALAH!");
			getch();
			system("cls");
			j = 0;
		}
		
		fclose(us);
		fclose(acc);
		fclose(bal);
		fclose(num);
		us = fopen("user.txt", "w");
		acc = fopen("account.txt", "w");
		bal = fopen("balance.txt", "w");
		num = fopen("num.txt", "w");
		ii=0;
		jj=0;
		kk=0;
		nn = 0;
		while(ii<30)
		{
			fprintf(us, "%d\n", user[ii]);
			ii++;
		}
		while(jj<30)
		{
			fprintf(acc, "%d\n", account[jj]);
			jj++;
		}
		while(kk<30)
		{
			fprintf(bal, "%d\n", balance[kk]);
			kk++;
		}
		while(nn<30)
		{
			fprintf(num, "%s\n", number[nn]);
			nn++;
		}
		fclose(us);
		fclose(acc);
		fclose(bal);
		fclose(num);	
	}
	printf("TERIMA KASIH:)");
	return 0;
}
