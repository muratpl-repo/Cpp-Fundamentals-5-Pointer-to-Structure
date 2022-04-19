#include <iostream>

using namespace std;


struct Ogrenci {
    int numara;
    string isim;

};

void isimdegistir(Ogrenci* ismidegistirilecekogrenci, string yeniisim){
    ismidegistirilecekogrenci->isim = yeniisim;

}


void ogrenciOlustur(Ogrenci* olusturulacakOgrenci, int numara, string isim) {
    olusturulacakOgrenci -> numara = numara;
    olusturulacakOgrenci -> isim = isim;

}

void ogrenciyiGoster(Ogrenci basilacakOgrenci) {
    cout<<"Ogrencinin adi: "<< basilacakOgrenci.isim<<endl;
    cout<<"Ogrencinin numarasi "<<basilacakOgrenci.numara<<endl;


}

void ogrenciyiSil(Ogrenci* silinecekOgrenci){
    silinecekOgrenci->isim = "";
    silinecekOgrenci->numara = 0;
}

int main()
{
    Ogrenci ogr1;
    Ogrenci ogr2;

    ogr1.isim = "Murat";
    ogrenciyiGoster(ogr1);
    isimdegistir(&ogr1,"Mehmet");
    ogrenciyiGoster(ogr1);

    ogrenciOlustur(&ogr2, 1589, "Fatih");
    ogrenciyiGoster(ogr2);

    ogrenciyiSil((&ogr2));
    ogrenciyiGoster(ogr2);

    return 0;
}
