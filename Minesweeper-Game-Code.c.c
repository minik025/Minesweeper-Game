#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int mayinsatir,mayinsutun;   //May�n�n sakland��� yer
	int secimsatir,secimsutun;  //Kullan�c�n�n se�ti�i yer
	int hak = 80;                //81 kutudan biri may�n,80 hak
	srand(time(NULL));
	mayinsatir=rand() %9;
	mayinsutun=rand() %9;
	printf("MAY�N TARLAS� OYUNU (9x9)\n");
	printf("Bir tane gizli may�n var.Mayina basmadan kutulari a�maya �alisin!\n");
	printf("Satir ve sutun sirasi giriniz(0 ve 8)\n");
	while(hak>0){
		printf("Hamle hakkiniz: %d\n",hak);
		printf("Sat�r gir (0-8):");
        scanf("%d",&secimsatir);
        printf("S�tun gir (0-8):");
        scanf("%d",&secimsutun);

        if (secimsatir == mayinsatir && secimsutun == mayinsutun) {
            printf("MAY�NA BAST�N! Oyun bitti.\n");
            break;
        } else {
            printf("Temiz kutu! Devam et.\n");
        }

        hak--;
    }

    if (hak == 0) {
        printf("Tebrikler! Tum kutulari mayina basmadan a�tin!\n");
    }
	
	return 0;
}
