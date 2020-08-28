//Sefa Enes Ergin-sefaenesergin@gmail.com
#include <stdio.h>
double usBul(double x,double y){
    double sonuc=1.0; //sonradan hata almamak için sonuc'a 1 atadık.
    for(int i=0;i<y;i++){
        sonuc*=x;
    }
    return sonuc;
}
int main(int argc, const char * argv[]) {
    double taban,us,sonuc;
    printf("Tabanı giriniz...\n");
    scanf("%lf",&taban);  //double olduğu için %f ile okutun.
    printf("Üssü giriniz...\n");
    scanf("%lf",&us);
    sonuc=usBul(taban,us); //fonksiyonu çağırıp sonuc'a atadık. not:fonksiyondaki sonuc ile buradaki sonuc farklı değişkenler.
    printf("%.2lf üzeri %.2lf = %.2lf ",taban,us,sonuc);
    return 0;
}


