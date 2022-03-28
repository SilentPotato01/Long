#include<iostream>
#include<iomanip>

using namespace std;


class KhachHang{
	private: 
		char HoTen[30];
		struct NamSinh{
		   int ngay ;
	       int thang;
		   int nam;
};
		   char cmt[10];
		   char hoKhau[50];
		   NamSinh ns;
	public:		
		void Nhap(){			
           cin.ignore();
           cout <<"\nTen khach hang: ";
		   cin.getline(HoTen, 30);
	       cout <<"\n\tNhap Ngay Thang Nam Sinh: ";
					cout <<"\n\t\tNgay: ";
					cin >> ns.ngay;					
					cout <<"\t\tThang: ";
					cin >> ns.thang;				
				    cout <<"\t\tNam: ";
				    cin >> ns.nam;
				    cin.ignore();
	        cout <<"\n\tNhap CMT: ";
				    cin.getline(cmt, 10);
		    cout <<"\n\tNhap Ho Khau: ";
				    cin.getline(hoKhau, 50);								
		}
		void Xuat()
		{
			cout <<setw(32)<<HoTen
				 <<setw(22)<<ns.ngay
				 <<setw(1)<<"/"
				 <<setw(2)<<ns.thang
				 <<setw(1)<<"/"
				 <<setw(4)<<ns.nam
				 <<setw(15)<<cmt
				 <<setw(25)<<hoKhau<<endl;
				 
		}
		char  * getHoTen(){
			return HoTen;
		}
		int getthang(){
			return ns.thang;
		}
		
};
void ThongTin()
		{
			cout <<setw(32)<<"Ho Ten"
				 <<setw(30)<<"Ngay Sinh"
				 <<setw(13)<<"CMT"
				 <<setw(25)<<"Ho Khau"<<endl;	
		}
int main()
{
	int n;
	cout <<"So khach hang : ";cin >> n;
	KhachHang a[n];	
	for(int i = 0; i < n; i++){
		a[i].Nhap();
	}
	cout <<"\n\t\t\tIN DANH SACH"<<endl;
	ThongTin();
	for(int i = 0; i < n; i++){
		a[i].Xuat();
	}
	KhachHang tg;
	cout <<"\nSap Xep: ";
	ThongTin();
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(strcmpi(a[i].getHoTen(), a[j].getHoTen()) > 0){
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;	
			}
		}
		a[i].Xuat();
	}
	cout<<endl;
	return 0;
}