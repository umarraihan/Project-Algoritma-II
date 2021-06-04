#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <string.h>
using namespace std;

void input();
void output();
void search();
<<<<<<< HEAD
void sorting();
void file();
=======

>>>>>>> 2d9e1520673bf51474fa6469fbd0b476f3908be4
struct headphone{
	int imei, id,harga ;
	char merk[30], tipe[30] ;
	
}data[99],backup, hitung ;

int pilih, jumlahbarang, pilihsearching, bin , programfile, sortingid, metodesort, hasil;
char namafile[30], y,kode, xfile[30], yfile[30], hasilfile[30] ;
FILE *buka, *buka2, *buka3 ;
bool cari ;
int main (){
		do {
	system("cls");
	cout<<"Menu Toko Headphone XYZ"<<endl ;
<<<<<<< HEAD
	cout<<"1. Masukan Data"<<endl;
	cout<<"2. Lihat Data"<<endl ;
	cout<<"3. Cari Data"<<endl ;
	cout<<"4. Sorting Data"<<endl ;
	cout<<"5. Merging Sambung"<<endl ;
	cout<<"6. Merging Urut"<<endl ;
=======
	cout<<"1. Masukan Data";
	cout<<"2. Lihat Data" ;
	cout<<"3. Cari Data" ;
	cout<<"4. Sorting Data" ;
	cout<<"5. Merging Sambung" ;
	cout<<"6. Merging Urut" ;
>>>>>>> 2d9e1520673bf51474fa6469fbd0b476f3908be4
	cout<<"7. Keluar"<<endl<<endl;
	cout<<"Masukkan Pilihan	: "; 
	cin>>pilih;
	switch(pilih){
		case 1:{
			system("cls");
			input();
			break;
		}
		
		case 2:{
			system("cls");
			output();
			break;
		}
		
		case 3:{
			system("cls");
			search();
			break;
		}
		case 4:{
			system("cls");
			sorting();
			break;
		}
		
		case 5:{
			system("cls");
			file();
			break;
		}
		
		case 6:{
			system("cls");
			exit(0);
			break;
		}
}		
		cout<<"Apakah Anda Ingin Kembali Ke Menu Utama "<<endl ;
		cout<<"Jawab pertanyaan dengan Y atau N"<<endl;
		cout<<"Apakah Ingin Kembali ke Menu : " ;
		cin>>y ;
	}while (y == 'Y' || y == 'y');
}
	
void input(){
	cout<<"Nama File"<<setw(20-9)<<": ";
	cin>>namafile;
	buka=fopen(namafile,"w");
	cout<<endl ;
	if (buka == NULL){
		cout<<"File Tersebut Tidak ada"<<endl ;
	}
	else {
		cout<<"Jumlah Barang Yang Ingin Dibeli : " ;
		cin>>jumlahbarang ;
		for(int i = 0 ; i <jumlahbarang ; i++){
			cout<<"Kode Product : ";
			cin>>data[i].id ;
			cout<<"IMEI : " ;
			cin>>data[i].imei ;
			cin.ignore() ;
			cout<<"Merk Product : " ;
			cin.getline(data[i].merk,30);
			cout<<"Tipe Product : ";
			cin.getline(data[i].tipe,30) ;
			cout<<"Harga Product : " ;
			cin>>data[i].harga ;
			cout<<endl ;
			fflush(stdin);
			fwrite(&data[i],sizeof (data[i]),1, buka);
		}
	}
	fclose(buka);
}

void output(){
	cout<<"Nama File"<<setw(20-9)<<": ";
	cin>>namafile;
	buka=fopen(namafile,"r");
	cout<<endl ;
	if (buka == NULL){
		cout<<"File Tersebut Tidak ada"<<endl ;
	}
	else {	
	int i = 0 ;
	cout<<"Kode Product"<<setw(12)<<"IMEI"<<setw(20)<<"Merk Product"<<setw(20)<<"Tipe Product"<<setw(20)<<"Harga Product"<<endl ;
		while(fread (&data[i], sizeof (data[i]), 1,buka)){
			cout<<setw(10)<<data[i].id<<setw(18)<<data[i].imei<<setw(13)<<data[i].merk<<setw(18)<<data[i].tipe<<setw(23)<<data[i].harga<<endl ;
			cout<<endl ;
			i++ ;
		}
	}
	fclose(buka);
}

void search(){
	cout<<"searching"<<endl ;
	cout<<"1. Sequential Search"<<endl ;
	cout<<"2. Binary Search"<<endl ;
	cout<<"Program Searching Yang Anda Pilih : ";
	cin>>pilihsearching ;
	switch (pilihsearching){
		case 1 :
			cout<<"Nama File"<<setw(20-9)<<": ";
	cin>>namafile;
	buka=fopen(namafile,"r");
	cout<<endl ;
	if (buka == NULL){
		cout<<"File Tersebut Tidak ada"<<endl ;
	}
	else {
			int i = 0 ;
			cari = false ;
			cout<<"Cari Kode Product : ";
			cin>>kode;
			
		while(	fread (&data[i], sizeof (data[i]), 1,buka) ){
			while((i < jumlahbarang )&&(!cari)){
			
			if(kode == data[i].id)
				cari = true ;
			else {
				i=i+1 ;
			}
		}
			if(true){
			
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;	
			}
			else {
				cout<<"Data Tersebut Tidak Ada"<<endl ;
				cout<<"Silahkan Cari Kembali"<<endl ;
			}
			
		}
	}
	break ;
	case 2 :
		cout<<"Nama File"<<setw(20-9)<<": ";
	cin>>namafile;
	buka=fopen(namafile,"r");
	cout<<endl ;
	if (buka == NULL){
		cout<<"File Tersebut Tidak ada"<<endl ;
	}
	else {
			int i = 0 ;
			cari = false ;
			cout<<"Cari Kode Product : ";
			cin>>kode;
			
		while(	fread (&data[i], sizeof (data[i]), 1,buka) ){
		while((i <= jumlahbarang)&& (!cari) ){
			bin = (jumlahbarang+i)/2 ;
			if( kode == data[i].id)
				cari = true ;
			else if (cari < data[i].id)
			jumlahbarang = i-1 ;
			else {
				i = i+1 ;
			}
				
		}
			if(true){
			
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;	
			}
			else {
				cout<<"Data Tersebut Tidak Ada"<<endl ;
				cout<<"Silahkan Cari Kembali"<<endl ;
			}	
}
        }
}
fclose(buka);
}
void sorting(){
	int i ;
	int z = 0 ;
	cout<<"Nama File"<<setw(20-9)<<": ";
	cin>>namafile;
	buka=fopen(namafile,"rb");
	cout<<"Simpan Hasil Sorting Dengan Nama File : ";
	cin>>xfile ;
	cout<<endl ;
	if (buka == NULL){
		cout<<"File Tersebut Tidak ada"<<endl ;
	}
	else {
	cout<<"Metode Sorting"<<endl ;
	cout<<"1. Buble Short"<<endl ;
	cout<<"2. Selection Sort"<<endl ;
	cout<<"3. Insertion Sort"<<endl ;
	cout<<"4. Shell Sort"<<endl ;
	cout<<"5. Quick Sort"<<endl ;
	cout<<"Metode Sorting Yang Anda Pilih : " ;
	cin>>metodesort ;
	switch(metodesort){
		case 1 :
			while(fread (&data[i], sizeof (data[i]), 1,buka)){
			cout<<"Sorting Menggunakan ID PRODUCT "<<endl ;
			cout<<endl ;
			cout<<"Sebelum Sorting "<<endl ;
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;
			i++ ;
			z++ ;
		}
		fclose(buka);
			cout<<"Setelah Sorting"<<endl ;
			for (int x=0; x<z; x++) {
			for (y=0; y<z-1; y++) {
				if (data[y+1].id < data[y].id) {
					backup = data[y+1];
					data[y+1]=data[y];
					data[y]= backup;
	
}
}
}
buka2 = fopen(xfile,"wb+");	
 	if (buka2 == NULL) {
		cout<<"File Tidak Ada"<<endl;	
	}
	else{
	for(i=0; i<z;i++){
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;
		fflush (stdin);
		fwrite (&data[i], sizeof(data[i]), 1,buka2) ;
		cout<<endl;
	}
}
fclose(buka2);
	break ;
	
	case 2 :
			while(fread (&data[i], sizeof (data[i]), 1,buka)){
			cout<<"Sorting Menggunakan ID PRODUCT "<<endl ;
			cout<<endl ;
			cout<<"Sebelum Sorting "<<endl ;
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;
			i++ ;
			z++ ;
		}
		fclose(buka);
			cout<<"Setelah Sorting"<<endl ;
			cout<<"HASIL"<<endl;
		
		for (int  x=0; x<z; x++){
			for (int y=x+1; y<z; y++){
				if (data[x].id> data[y].id) {
				backup = data[x];
				data[x]=data[y];
				data[y]=backup;
				}
			}
		}
buka2 = fopen(xfile,"wb+");	
 	if (buka2 == NULL) {
		cout<<"File Tidak Ada"<<endl;	
	}
	else{
	for(i=0; i<z;i++){
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;
		fflush (stdin);
		fwrite (&data[i], sizeof(data[i]), 1,buka2) ;
		cout<<endl;
	}
}
fclose(buka2);
	break ;
	
	case 3 :
			while(fread (&data[i], sizeof (data[i]), 1,buka)){
			cout<<"Sorting Menggunakan ID PRODUCT "<<endl ;
			cout<<endl ;
			cout<<"Sebelum Sorting "<<endl ;
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;
			i++ ;
			z++ ;
		}
		fclose(buka);
			cout<<"Setelah Sorting"<<endl ;
			cout<<"HASIL"<<endl;
		
		for (int x=1; x<z; x++) {
				hasil = data[x].id;
				backup=data[x];
				y=x-1;
				while ((hasil< data[y].id) && (y>=0)){
				data[y+1] = data[y];
				y=y-1;
				data[y+1] = backup;
				}
			}
buka2 = fopen(xfile,"wb+");	
 	if (buka2 == NULL) {
		cout<<"File Tidak Ada"<<endl;	
	}
	else{
	for(i=0; i<z;i++){
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;
		fflush (stdin);
		fwrite (&data[i], sizeof(data[i]), 1,buka2) ;
		cout<<endl;
	}
}
fclose(buka2);
	break ;
	
	case 4 :
			while(fread (&data[i], sizeof (data[i]), 1,buka)){
			cout<<"Sorting Menggunakan ID PRODUCT "<<endl ;
			cout<<endl ;
			cout<<"Sebelum Sorting "<<endl ;
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;
			i++ ;
			z++ ;
		}
		fclose(buka);
			cout<<"Setelah Sorting"<<endl ;
			cout<<"HASIL"<<endl;
		
		for (int x= z/2; x>0; x/=2) {
			for (int y=x ; y<z; y++) { 
				for (int v=y-x; v>=0; v-=x) {
					if (data[v+x].id> data[v].id){
						break;
					}
					else {
						hitung = data[v] ;
						data[v]=data[v+x];
						data[v+x]=hitung;
					} 
				} 
			}
		}
buka2 = fopen(xfile,"wb+");	
 	if (buka2 == NULL) {
		cout<<"File Tidak Ada"<<endl;	
	}
	else{
	for(i=0; i<z;i++){
			cout<<"Kode Product : "<<data[i].id<<endl ;
			cout<<"IMEI : "<<data[i].imei<<endl ;
			cout<<"Merk Product  : "<<data[i].merk<<endl ;
			cout<<"Tipe Product  : "<<data[i].tipe<<endl ;
			cout<<"Harga Product : "<<data[i].harga<<endl ;
			cout<<endl ;
		fflush (stdin);
		fwrite (&data[i], sizeof(data[i]), 1,buka2) ;
		cout<<endl;
	}
}
fclose(buka2);
	break ;
	

	
}
}
}


void file(){
	int i = 0 ;
	cout<<"1. Merging Urut "<<endl ;
	cout<<"2. sadasdsadsa"<<endl ;
	cout<<"Program Yang Anda Pilih : ";
	cin>>programfile ;
	switch(programfile){
		case 1 :
			cout<<"Nama File : ";
			cin>>xfile; 
			cout<<"Nama File 2 : ";
			cin>>yfile ;
			cout<<"Nama File Setelah di Merge Sambung : " ;
			cin>>hasilfile;
			if ((buka = fopen(xfile,"r"))==NULL || (buka2 = fopen(yfile,"r"))==NULL || (buka3 = fopen(hasilfile,"w"))==NULL)
{
				cout<<"File Gagal!"<<endl ;
				exit(1);
			}
			while(	fread (&data[i], sizeof (data[i]), 1,buka)==1 ){
				fwrite(&data[i], sizeof data[i],1,buka3);
				}
			while(	fread (&data[i], sizeof (data[i]), 1,buka2)==1 ){
				fwrite(&data[i], sizeof data[i],1,buka3);
				}
				cout<<"File Berhasil Di merging Urut"<<endl ;
				break ;
				
//		case 2 :
		
	}
	fclose(buka);	fclose(buka2);	fclose(buka3);
}
