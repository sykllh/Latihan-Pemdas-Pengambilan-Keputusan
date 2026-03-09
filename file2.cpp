#include <iostream>
using namespace std;

float Rata-rata(float a, floatb){
    return (a+b)/2;
}

string Status_lulus(float r){
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}

int main(){
    float nilBI,nilMT,rerata;
    string status;

    cout <<"Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;
    cout <<"Masukkan nilai Matematika = ";
    cin >> nilMT;

    //rerata = (nilBI+nilMT)/2;
    //if (rerata >= 60)
    //  status = "Lolos";
    //else
      // status = "Gagal";
    rerata = Rata_rata(nilBI,nilMT);
    //status = status_lulus(rerata);

    cout
}

