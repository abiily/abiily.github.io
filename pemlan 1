#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;
typedef struct{
int kode;
char nama[50];
int stock;
char jenis[50];
}

brg;
brg barang[5];
brg jenis[5];
brg temp;
int n, i, b, cari, ada;

int main()
{
	cout<<"\t\t"<<"wufebyiiiiiiiiiiiiiiiii"<<endl;
	cout<<"\t\t"<<"wufebyiiiiiiiiiiiiiiiii"<<endl;
	cout<<"\t\t"<<"wufebyiiiiiiiiiiiiiiiii"<<endl;
	cout<<"\t"<<"masukkan banyak data = ";
	cin>>n;
	
	for(i=0; i<n; i++){
		cout<<endl;
		cout<<"data ke"<<(i+1)<<":"<<endl;
		cout<<"input kode sepatu : ";cin>>barang[i].kode;
		cout<<"input nama sepatu : ";cin>>gets(barang[i].nama);
		cout<<"input stock sepatu : ";cin>>barang[i].stock;
		cout<<"input jenis sepatu : ";cin>>gets(barang[i].jenis);
		cout<<endl;
		}	
		
		cout<<"\t\t\t"<<"data sepatu anda"<<endl;
		cout<<"\t\t\t"<<"===================================="<<endl;
		cout<<"\t\t\t"<<"| kode sepatu | nama sepatu | stock sepatu | jenis sepatu |"<<endl;
		cout<<"\t\t\t"<<"===================================="<<endl;
		
		for (b=0; b<n; b++){
			cout<<"\t\t\t"<<"|         "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t"<<barang[b].stock<<"\t\t"<<barang[b].jenis<<"      |"<<endl;
			
		}
		
		cout<<endl;
		cout<<"\t\t\t"<<"===================================================="<<endl;
		for(i=0; i<n; i++){
			for(b=0; b<n-1; b++){
				if(barang[b].kode > barang[b+1].kode){
					temp.kode=barang[b].kode;
					barang[b].kode=barang[b+1].kode;
					barang[b+1].kode=temp.kode;
					
					strcpy(temp.nama,barang[b].nama);
					strcpy(barang[b].nama,barang[b+1].nama);
					strcpy(barang[b+1].nama,temp.nama);
					
					temp.stock=barang[b].stock;
					barang[b].stock=barang[b+1].stock;
					barang[b+1].stock=temp.stock;
					
					strcpy(temp.jenis,barang[b].jenis);
					strcpy(barang[b].jenis,barang[b+1].jenis);
					strcpy(barang[b+1].jenis,temp.jenis);
					
				}
			}
		}
		cout<<endl;
		
		
		
		
		
		
		
		
		
	cout<<endl;
	
	
	cout<<"\t\t\t"<<"setelah data diurutkan berdasarkan kode terkecil :"<<endl;
	cout<<"\t\t\t"<<"-------------------------------------------------"<<endl;
	cout<<"\t\t\t"<<"| kode sepatu | nama sepatu | stock sepatu | jenis sepatu |"<<endl;
	cout<<"\t\t\t"<<"-------------------------------------------------------------"<<endl;
	
	for(b=0; b<n; b++){
	cout<<"\t\t\t"<<"|    "<<barang[b].kode<<"\t\t"<<barang[b].nama<<"\t\t "<<barang[b].stock<<"\t\t"<<barang[b].jenis<<"     |"<<endl;
	
    }
    cout<<endl;
    cout<<"\t\t\t"<<"--------------------------------------------------------------------------"<<endl;
    
    cout<<endl;
    cout<<"\t\t\t"<<"masukkan kode barang untuk mencari : ";
    cin>>cari;
    
    ada = 0;
    
    for(b=0; b<n; b++){
    	if(barang[b].kode==cari){
    		ada=1;
    		
    		cout<<"\t\t\t"<<"==================================="<<endl;
    		cout<<"\t\t\t"<<"| kode sepatu | stock sepatu | jenis sepatu |"<<endl;
    		cout<<"\t\t\t"<<"| "<<barang[b].kode<<"\t\t"<<barang[b].stock<<"\t\t"<<barang[b].jenis<<"    |"<<endl;
		}
	}
	        cout<<"\t\t\t"<<"=========================================================="<<endl;
	if (ada==0){
		cout<<"data tidak ditemukan"<<endl;
	}
	getch();
	
	
}
