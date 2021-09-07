#include <stdio.h>
#include <string.h>

struct pasien
{
    char name[100];
    int umur;
    long long int nik;
    char notelepon;
    int guladarah;
    float beratbadan;
    double tinggibadan;
    char bpjs;
    float bmi;
};

void namapasien()
{
    char nama[100];
    scanf("%s",nama);
    FILE *fp = fopen("Pasien.txt", "a");
    fprintf(fp, "%s\n",nama);
    fclose(fp);
}

void umur()
{
    int umur;
    scanf("%d",&umur);
    FILE *fp = fopen("Pasien.txt", "a");
    fprintf(fp, "%d\n",umur);
    fclose(fp);
}

//char *nikpasien()
//{
//	char n[17];
//	do
//	{
//		scanf("%s",n);
//		if(strlen(n) < 16 || strlen(n) > 16)
//    	{
//        	puts("INVALID INPUT");
//    	} else if (strlen(n) == 16){
//    		printf("this is your nik\n");
//		}
//	}while(strlen(n) < 16 || strlen(n) > 16);
//
//	FILE *fp = fopen("Pasien.txt", "a");
//	fprintf(fp, "%s\n",nikpasien);
//    fclose(fp);
//    return n;
//}

void nomertelp()
{
	char telp[13];
    scanf("%s",telp);
    FILE *fp = fopen("Pasien.txt", "a");
    fprintf(fp, "%s\n",telp);
    fclose(fp);
}

void guladarahpasien()
{
    int gula;
    scanf("%d", &gula);
    FILE *fp = fopen("Pasien.txt", "a");
    fprintf(fp, "%d\n",gula);
    fclose(fp);
}

void beratbadan()
{
    float berat;
    scanf("%f", &berat);
    FILE *fp = fopen("Pasien.txt", "a");
    fprintf(fp, "%f\n",berat);
    fclose(fp);
}

void tinggipasien()
{
    double tinggi;
    scanf("%lf", &tinggi);
    FILE *fp = fopen("Pasien.txt", "a");
    fprintf(fp, "%lf\n",tinggi);
    fclose(fp);
}

//char bpjs()
//{
//	char S[100];
//	scanf("%s", S);
//	printf("This is your BPJS number : %s\n", S);
//	FILE *fp = fopen("Pasien.txt", "a");
//	fprintf(fp, "%s\n", bpjs);
//	fclose(fp);
//}
//rio 18 08975780373 110 75 185 1234567890123
//
//void bmipasien()
//{
//	struct pasien;
//	float bmi;
//	bmi = beratbadan / (tinggibadan*tinggibadan);
//	
//	if (bmi >= 18 && bmi <= 21) 
//	{
//		printf("Berat badan Anda normal.");
//	} 
//	else if(bmi <= 18) 
//	{
//		printf("Underweight");
//	} 
//	else 
//	{
//		printf("Overweight");
//	}
//	
//	
//}

void inputdata()
{
	namapasien();
	umur();
//	nikpasien();
	nomertelp();
	guladarahpasien();
	beratbadan();
	tinggipasien();
//	bpjs();
//	bmipasien();
}

int main()
{
	struct pasien;
	int pilihan;
	
    do
	{
        puts("1. Input Data");
        puts("2. Hitung BMI");
        scanf("%d", &pilihan);
        switch(pilihan)
		{
            case 1:
			{
                inputdata();
                break;
            }
            case 2:
			{
//				bmipasien();
                break;
            }        
        }
    }while(pilihan != 3);	
	return 0;
}
