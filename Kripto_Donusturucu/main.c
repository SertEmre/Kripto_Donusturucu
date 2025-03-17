#include <stdio.h>

int main(){
char kaynakCoin[20], hedefCoin[20];
double kaynakMiktar, kaynakFiyat, hedefFiyat, hedefMiktar;

printf("Donusturmek istediginiz coinin ismini giriniz:");
scanf("%s", &kaynakCoin);
printf("Kac adet %s cevireceginizi giriniz:", kaynakCoin);
scanf("%lf",&kaynakMiktar);
printf("%s'nin birim fiyatini giriniz(USDT):",kaynakCoin);
scanf("%lf",&kaynakFiyat);

printf("Hangi coine cevirmek istiyorsunuz?:");
scanf("%s",&hedefCoin);
printf("%s'nin birim fiyatini giriniz(USDT): ",hedefCoin);
scanf("%lf",&hedefFiyat);

double toplam= kaynakMiktar * kaynakFiyat;
hedefMiktar = toplam/ hedefFiyat;

printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("  %s --> %s Donusturme Sonucu  \n", kaynakCoin, hedefCoin);
printf("  %lf %s = %lf %s \n", kaynakMiktar, kaynakCoin, hedefMiktar, hedefCoin);
printf("  (Toplam Deger: %.2f USDT \n", toplam);
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
return 0;
}
