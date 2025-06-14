#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int mayinsatir,mayinsutun;   //Mayýnýn saklandýðý yer
	int secimsatir,secimsutun;  //Kullanýcýnýn seçtiði yer
	int hak = 80;                //81 kutudan biri mayýn,80 hak
	srand(time(NULL));
	mayinsatir=rand() %9;
	mayinsutun=rand() %9;
	printf("MAYÝN TARLASÝ OYUNU (9x9)\n");
	printf("Bir tane gizli mayýn var.Mayina basmadan kutulari açmaya çalisin!\n");
	printf("Satir ve sutun sirasi giriniz(0 ve 8)\n");
	while(hak>0){
		printf("Hamle hakkiniz: %d\n",hak);
		printf("Satýr gir (0-8):");
        scanf("%d",&secimsatir);
        printf("Sütun gir (0-8):");
        scanf("%d",&secimsutun);

        if (secimsatir == mayinsatir && secimsutun == mayinsutun) {
            printf("MAYÝNA BASTÝN! Oyun bitti.\n");
            break;
        } else {
            printf("Temiz kutu! Devam et.\n");
        }

        hak--;
    }

    if (hak == 0) {
        printf("Tebrikler! Tum kutulari mayina basmadan açtin!\n");
    }
	
	return 0;
}
