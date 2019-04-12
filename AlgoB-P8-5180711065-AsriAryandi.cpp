#include <iostream>
using namespace std;

struct kita{double uts,uas,tugas,absen;
            float total;
            int nilai;};
 struct kita kita;

double nilai(string txt){
double angka;
cout<<"Masukan nilai "<<txt<<" : ";cin>>angka;
return angka;
}

double hasil(float uts,float uas,float tugas,float absen){
double total;
kita.total=kita.uts*0.2+kita.uas*0.3+kita.tugas*0.35+kita.absen*0.15;
cout<<"total nilai : "<<kita.total;
return kita.total;
}
void huruf(){
    if(kita.total>=81)
        cout<<"A";
    else if(kita.total>=61)
        cout<<"B";
    else if(kita.total>=41)
        cout<<"C";
    else if(kita.total>=21)
        cout<<"D";
    else
        cout<<"E";
}

main(){
double uts,uas,tugas,absen,total;

kita.uts=nilai("uts");
kita.uas=nilai("uas");
kita.tugas=nilai("tugas");
kita.absen=nilai("absen");
hasil(uts,uas,tugas,absen);cout<<endl;
huruf ();
}


