//
//  main.c
//  MyTool
//
//  Created by ECREN on 12.10.2026.
//

#include <stdio.h>
#include <math.h>

int main(void) {
    // --- GIRDILER ---
    float urun_tutari = 18.70f;
    float odenen_para = 20.00f;

    
    int kupur200tl = 20000;
    int kupur100tl = 10000;
    int kupur50tl  = 5000;
    int kupur20tl  = 2000;
    int kupur10tl  = 1000;
    int kupur5tl   = 500;
    int madenipara1tl  = 100;
    int madenipara50kr = 50;
    int madenipara25kr = 25;
    int madenipara10kr = 10;
    int madenipara5kr  = 5;
    int madenipara1kr  = 1;


    float dogrudan_fark = odenen_para - urun_tutari;
    int hatali_kurus = (int)(dogrudan_fark * 100);
    
    
    printf("urun tutari : %.2f TL\n", urun_tutari);
    printf("odenen para : %.2f TL\n", odenen_para);
    printf("Hesaplanan Kurus: %d kurus\n", hatali_kurus);

    int toplam_kurus = (int)roundf((odenen_para - urun_tutari) * 100);
    printf("Dogru Hesaplanan Toplam Kurus : %d kurus\n\n", toplam_kurus);

    
    int kalan = toplam_kurus;
    int toplam_kupur = 0;
    int adet;

    printf("--- EN AZ SAYIDA PARA USTU DAGILIMI ---\n");

    // 200 TL
    adet = kalan / kupur200tl;
    kalan %= kupur200tl;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 15, "200 TL Banknot: ", adet);

    // 100 TL
    adet = kalan / kupur100tl;
    kalan %= kupur100tl;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 15, "100 TL Banknot: ", adet);

    // 50 TL
    adet = kalan / kupur50tl;
    kalan %= kupur50tl;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 14, "50 TL Banknot: ", adet);

    // 20 TL
    adet = kalan / kupur20tl;
    kalan %= kupur20tl;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 14, "20 TL Banknot: ", adet);

    // 10 TL
    adet = kalan / kupur10tl;
    kalan %= kupur10tl;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 14, "10 TL Banknot: ", adet);

    // 5 TL
    adet = kalan / kupur5tl;
    kalan %= kupur5tl;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 13, "5 TL Banknot: ", adet);

    // 1 TL
    adet = kalan / madenipara1tl;
    kalan %= madenipara1tl;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 13, "1 TL Madeni: ", adet);

    // 50 Kr
    adet = kalan / madenipara50kr;
    kalan %= madenipara50kr;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 13, "50 Kr Madeni: ", adet);

    // 25 Kr
    adet = kalan / madenipara25kr;
    kalan %= madenipara25kr;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 13, "25 Kr Madeni: ", adet);

    // 10 Kr
    adet = kalan / madenipara10kr;
    kalan %= madenipara10kr;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 13, "10 Kr Madeni: ", adet);

    // 5 Kr
    adet = kalan / madenipara5kr;
    kalan %= madenipara5kr;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 12, "5 Kr Madeni: ", adet);

    // 1 Kr
    adet = kalan / madenipara1kr;
    kalan %= madenipara1kr;
    toplam_kupur += adet;
    printf("%.*s%d adet\n", adet * 12, "1 Kr Madeni: ", adet);

    
    printf("Musteriye Verilen Toplam Kupur Sayisi: %d adet\n", toplam_kupur);

    return 0;
}
