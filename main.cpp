#include <iostream>
#include <stdio.h>
#include<conio.h>

using namespace std;

int main()
{
    char nama[30];
    int a,b;
    cout<<"====================================================================================================================="<<endl;
            cout<<"NAMA\t : 1. AKHMAD SAIFUL ANAM"<<endl;
           cout<<"KAMPUS\t : STT PELITA BANGSA 2018/2019"<<endl;
            cout<<"CLASS\t  : TI 18.E1"<<endl;
            cout<<"JURUSAN\t    : TEKNIK INFORMATIKA"<<endl;
    cout<<"====================================================================================================================="<<endl;
    cout<<"KONVERSI NILAI PRODI ALGORITMA PEMROGRAMAN"<<endl;
    do
    {
        printf("Masukan Nama :");
        scanf("%s",&nama);
        printf("\nMasukan nilai Angka   :");
    scanf("%i",&a);
    if(a<0)
    {
        printf("Angka Valid");
    }
    else if(a>=80&&a<=100)
        {

            printf("Grade Nilai : A");
        }
        else if(a>=65&&a<=79)
        {
            printf("Grade Nilai : B");
        }
        else if(a>=50&&a<=64)
        {
            printf("Grade Nilai : C");
        }
        else if(a>=35&&a<=49)
        {
            printf("Grade Nilai : D");
        }
        else if(a>=0&&a<=35)
        {
            printf("Grade Nilai : E");
        }
        else if(a>100)
        {
            printf("Nilai Invalid");
        }
        printf("\n\nNext? Tekan 1 bila ya\n");
        scanf("%i",&b);
    }

    while(b==1);
    getch();
}
