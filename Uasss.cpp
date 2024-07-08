#include <iostream>
using namespace std;

class MasukUniversitas
{
    public:
    int uangPendaftaran,uangSemesterPertama,uangBangunan,totalBiaya;
    MasukUniversitas()
    {
        uangPendaftaran = 0;
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
    } 
   
    void setUangPendaftaran(int nilaia)
    {
        this->uangPendaftaran = nilaia;
    }

    float getUangPendaftaran()
    {
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilaib)
    {
        this->uangSemesterPertama = nilaib;
    }

    float getUangSemesterPertama()
    {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilaic)
    {
        this->uangBangunan = nilaic;
    }

    float getUangBangunan()
    {
        return uangBangunan;
    }

    void settotalBiaya()
    {
        this->totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }

    float gettotalBiaya()
    {
        return totalBiaya;
    }

     virtual void namaJalurMasuk()
    {
        return;
    }

    virtual void hitungTotalBiaya()
    {
        return;
    }

    virtual void tampilkanTotalBiaya()
    {
        return;
    }

    virtual void input() = 0;
};

class SNBT : public MasukUniversitas
{
    public:
    void input()
    {
        cout << "Masukan Uang Pendaftaran : " ;
        cin >> uangPendaftaran;

        cout << "Masukan Uang Semester Pertama : " ;
        cin >> uangSemesterPertama;

        cout << "Masukan Uang Bangunan : " ;
        cin >> uangBangunan;
    }
};

class SNBP : public MasukUniversitas
{
    public:
    
    void input()
    {
        cout << "Masukan Uang Pendaftaran : " ;
        cin >> uangPendaftaran;

        cout << "Masukan Uang Semester Pertama : " ;
        cin >> uangSemesterPertama;
    }


};

int main()
{
    MasukUniversitas masuk;
    SNBT tes;
    SNBP prestasi;

    
    while (choice != 4)
    {
        cout << "1. SNBT \n";
        cout << "2. SNBP \n";
        cout << "3. Keluar \n";
        cout << "Pilih : ";
        cin >> choice;

        switch (choice)
        {
            
        case 1:
        ;

        case 2:
        ;

        case 3:
        cout << "Exiting Program. " << endl;
            break;
        default:
        cout << "Invalid Choice. " << endl;
            break;
        }
        cout << endl;
    }
    return 0;
}
