#include <iostream.h>

class AnPham{
	private:
	 	char MaHang[8];
	 	
		char TenNXB[30];
		
		char NgayXB[15];
		
		float dongia;
		
	public:
		void nhap()
		{
			cout<<"\nNhap ma hang: ";
			cin.getline(MaHang, 8);
			
			cout<<"\nNhap ten nha xuat ban: ";
			cin.getline(TenNXB, 30);
			
			cout<<"\nNhap ngay xuat ban: ";
			cin.getline(NgayXB, 15);
			
			cout<<"\nNhap don gia: ";
			cin>>dongia;
			fflush(stdin);
		}
		
		~AnPham()
		{
			
		}
		void xuattt()
		{
			cout<<"Ma hang: "<<MaHang
				<<"Ten nha xuat ban: "<<TenNXB
	            <<"Ngay xuat ban: "<<NgayXB
				<<"Don gia: "<<dongia
				<<endl;
		}
		
		void in()
		{
			cout<<"\nIn thong tin an pham: ";			
			
				xuattt();
			
		}
};
    
     	
     
 main()
{
	int n;
	cout<<"\nNhap so luong an pham: ";
	cin>>n;
	AnPham a[n];
	fflush(stdin);
	cout<<"\nNhap thong tin hang hoa: "<<endl;
	for(int i = 0; i < n; i++){
		cout<<"\nan pham thu "<<i+1<<endl;
		a[i].nhap();
	}
	
	cout<<"\nXuat thong tin an pham: "<<endl;
	for(int i = 0; i < n; i++){
		cout<<"\nan pham thu "<<i+1<<endl;
		a[i].in();
	}
	 return 0;
}