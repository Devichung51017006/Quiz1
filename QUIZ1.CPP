#include <iostream.h>
#include <conio.h>

void main()
{
float Nkh,Nt1,Nt2,Nt3,Nmid,NQ,NF,Total_Nilai_Tugas,NA; //nilai kehadiran, nilai tugas 1-3, nilai kuis,nilai final, nilai akhir
char Nm[28],Jur[18];

//input
cout<<"Menghitung Nilai Mahasiswa"<<endl;
cout<<"---------------------------"<<endl;
cout<<"Masukkan Nama Mahasiswa            =  "; cin>>Nm;
cout<<"Masukkan Jurusan Mahasiswa         =  "; cin>>Jur;
cout<<"Masukkan Nilai Kehadiran Mahasiswa =  ";cin>>Nkh;
cout<<"Masukkan Nilai Tugas Pertama       =  ";cin>>Nt1;
cout<<"Masukkan Nilai Tugas Kedua         =  ";cin>>Nt2;
cout<<"Masukkan Nilai Tugas Ketiga        =  "; cin>>Nt3;
cout<<"Masukkan Nilai Mid                 =  "; cin>>Nmid;
cout<<"Masukkan Nilai Quiz                =  ";cin>>NQ;
cout<<"Masukkan Nilai Final               =  ";cin>>NF;
cout<<endl;

//Proses
Total_Nilai_Tugas = (Nt1+Nt2+Nt3)/3 ;
NA = (0.2 * Nkh)+(0.2*Total_Nilai_Tugas)+(0.2*Nmid)+(0.2*NQ)+(0.2 * NF);

clrscr();
//Output
cout<<"Nama Mahasiswa Adalah  "<<Nm<<endl;
cout<<"Jurusan Mahasiswa Adalah  "<<Jur<<endl;
cout<<"Nilai Akhir Mahasiswa Adalah "<<NA<<endl;
getch();
}