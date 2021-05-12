#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<windows.h>
#include<MMsystem.h>
using namespace std;
void clrscr(){
	system("cls");
}
int main(){
	int x, i, acc, o1, o2, o3, o4, o5, o6, o7, o8, o9, o10;
	int p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
	int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10;
	int f1, f2, f3, f4, f5, f6, f7, f8, f9, f10;
	float gst = 0;
	int y, a1,  z = 0, opt;
	float sum = 0;
	string user, pwd;
	account:
	cout<<"********************************************************************************\n********************************************************************************\n\n\t\t\t\tELECTRONIC SHOP\n\n\n\t1. Employee Login\n\t2. New Customer"<<endl;
	cout<<"\n\n\n\n\n\n\n\n\n\n\n********************************************************************************\n********************************************************************************";
	cin>>acc;
	clrscr();
	if(acc == 1){
		cout<<"Username: ";
		cin>>user;
		cout<<"Password: ";
		cin>>pwd;
		if(user == "Saurabh" && pwd == "Saurabh@124"){
			cout<<"1. Available Stock\n";
			cin>>opt;
			if(opt == 1){
				fstream opt;
				cout<<"---------Mobiles Stock------------\n\nProduct Name\t\tQuantity\n\n----------------------------------\n\n";
				opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\OnePlus_6T.txt", ios::in | ios::out);
    			opt>>o1;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Google_Pixel_3.txt", ios::in | ios::out);
    			opt>>o2;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\iPhone_XS_Max.txt", ios::in | ios::out);
    			opt>>o3;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Samsung_Galaxy_S9_Plus.txt", ios::in | ios::out);
    			opt>>o4;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Mi_A2.txt", ios::in | ios::out);
    			opt>>o5;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Honor_View_20.txt", ios::in | ios::out);
    			opt>>o6;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Huawei_Mate_20_Pro.txt", ios::in | ios::out);
    			opt>>o7;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Samsung_Galaxy_S10_Plus.txt", ios::in | ios::out);
    			opt>>o8;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\iPhone_XS.txt", ios::in | ios::out);
    			opt>>o9;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\LG_V40_ThinQ.txt", ios::in | ios::out);
    			opt>>o10;
    			opt.close();
    			cout<<"OnePlus 6T\t\t"<<o1<<endl;;
    			cout<<"Google Pixel 3\t\t"<<o2<<endl;
    			cout<<"iPhone XS Max\t\t"<<o3<<endl;
    			cout<<"Samsung Galaxy S9 Plus\t"<<o4<<endl;
    			cout<<"Mi A2\t\t\t"<<o5<<endl;
    			cout<<"Honor View 20\t\t"<<o6<<endl;
    			cout<<"Huawei Mate 20 Pro\t"<<o7<<endl;
    			cout<<"Samsung Galaxy S10 Plus\t"<<o8<<endl;
    			cout<<"iPhone XS\t\t"<<o9<<endl;
    			cout<<"LG V40 ThinQ\t\t"<<o10<<endl;

    			cout<<"---------TV Stock------------\n\nProduct Name\t\t\tQuantity\n\n----------------------------------\n\n";
				opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\LG_OLED55C8PTA.txt", ios::in | ios::out);
    			opt>>p1;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\Samsung_NU8000.txt", ios::in | ios::out);
    			opt>>p2;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\Sony_XBR55X900F.txt", ios::in | ios::out);
    			opt>>p3;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\TCL_55.txt", ios::in | ios::out);
    			opt>>p4;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\VIZIO_65.txt", ios::in | ios::out);
    			opt>>p5;
    			opt.close();

    			cout<<"LG OLED55C8PTA 4K Ultra HD\t\t"<<p1<<endl;;
    			cout<<"Samsung NU8000 4K Ultra HD\t\t"<<p2<<endl;
    			cout<<"Sony XBR55X900F 4K Ultra HD\t\t"<<p3<<endl;
    			cout<<"TCL 55 4K UHD HDR 55S425-CA\t\t"<<p4<<endl;
    			cout<<"VIZIO P-Series 65 HDR UHD\t\t"<<p5<<endl;

    			cout<<"---------Laptop Stock------------\n\nProduct Name\t\t\t\tQuantity\n\n----------------------------------\n\n";
				opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Laptops\\Alienware_AAW17R4-7002SLV-PUS.txt", ios::in | ios::out);
    			opt>>i1;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Laptops\\Predator_Helios_500.txt", ios::in | ios::out);
    			opt>>i2;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Laptops\\MSI_Gaming.txt", ios::in | ios::out);
    			opt>>i3;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Laptops\\Asus_ROG.txt", ios::in | ios::out);
    			opt>>i4;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Laptops\\HP_OMEN.txt", ios::in | ios::out);
    			opt>>i5;
    			opt.close();

    			cout<<"Alienware_AAW17R4-7002SLV-PUS\t\t"<<p1<<endl;;
    			cout<<"Acer 17.3 Predator Helios 500\t\t"<<p2<<endl;
    			cout<<"MSI Gaming MSI GT83 8RG-007IN\t\t"<<p3<<endl;
    			cout<<"Asus ROG Strix Hero II\t\t\t"<<p4<<endl;
    			cout<<"HP OMEN X-ap046TX 17-inch FHD\t\t"<<p5<<endl;

    			cout<<"--------- Audio Gadget Stock------------\n\nProduct Name\t\t\t\tQuantity\n\n----------------------------------\n\n";
				opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\JBL_Boom.txt", ios::in | ios::out);
    			opt>>i1;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\Beats_Studio3.txt", ios::in | ios::out);
    			opt>>i2;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\Skullcandy_Hesh.txt", ios::in | ios::out);
    			opt>>i3;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\boAt_600.txt", ios::in | ios::out);
    			opt>>i4;
    			opt.close();
    			opt.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\Apple_AirPods.txt", ios::in | ios::out);
    			opt>>i5;
    			opt.close();

    			cout<<"JBL Boom Box Most-Powerful\t\t"<<p1<<endl;;
    			cout<<"Beats by Dr. Dre Studio3\t\t"<<p2<<endl;
    			cout<<"Skullcandy Hesh 3 Psycho Tropical\t"<<p3<<endl;
    			cout<<"boAt Rockerz 600\t\t\t"<<p4<<endl;
    			cout<<"Apple AirPods\t\t\t\t"<<p5<<endl;	



			}

		}
		else {
			cout<<"Wrong Password!";
			exit(0);

		}
	}
	else{

		for(i=0; i<=10; i++){
		if(i>=1){

			int k;

    		cout<<"1. Continue Shopping!"<<endl;
    		cout<<"2. Billing"<<endl;
    		cin>>k;
    		clrscr();
    		if(k==1){
    			//Restart of Loop
			}
				else
				break;
		}
			here:
				cat:
					tv:
						laptop:
							speaker:

		cout<<"Select the Category of Product."<<endl;
		PlaySound(TEXT("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Auido File\\cat.wav"), NULL, SND_SYNC);
		cout<<"1. Mobiles"<<endl;
		cout<<"2. T.V"<<endl;
		cout<<"3. Laptops"<<endl;
		cout<<"4. Audio Gadgets"<<endl;
		cout<<"5. Go Back !"<<endl;
		cin>>x;
		clrscr();

		if(x==1){
			there:
			PlaySound(TEXT("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Auido File\\M.wav"), NULL, SND_SYNC);
			cout<<"1. OnePlus 6T"<<endl;
			cout<<"2. Google Pixel 3"<<endl;
			cout<<"3. iPhone XS Max"<<endl;
			cout<<"4. Samsung Galaxy S9 Plus"<<endl;
			cout<<"5. Mi A2"<<endl;
			cout<<"6. Honor View 20"<<endl;
			cout<<"7. Huawei Mate 20 Pro"<<endl;
			cout<<"8. Samsung Galaxy S10 Plus"<<endl;
			cout<<"9. iPhone XS"<<endl;
			cout<<"10.LG V40 ThinQ"<<endl;
			cout<<"11.Go Back !"<<endl;
			cin>>a1;
			clrscr();


			if(a1==1){
				fstream write;
	        	int x, p = 41999;
				int y, y1;

    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\OnePlus_6T.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\OnePlus_6T.txt", ios::out);
				write<<x;
 				write.close();
 				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\11_q.txt", ios::out);
 				write<<y;
 				write.close();
 				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\11_q.txt", ios::in);
 				write.close();
				if(x <= -1){
					cout<<"This Product is out of Stock.\n";
					exit(0);
				}
				else{
					z = y * p;



    			}
    		}

			//Second item....
			else if(a1==2){
				fstream write;
	        	int x, p = 59189;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Google_Pixel_3.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Google_Pixel_3.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;


    			}
    		}

    		//Third item....
			else if(a1==3){
				fstream write;
	        	int x, p = 123500;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\iPhone_XS_Max.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\iPhone_XS_Max.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
    		}
    		//Fourth item....
			else if(a1==4){
				fstream write;
	        	int x, p = 64900;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Samsung_Galaxy_S9_Plus.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Samsung_Galaxy_S9_Plus.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
    		}
    		//Fifth item....
			else if(a1==5){
				fstream write;
	        	int x, p = 11999;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Mi_A2.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Mi_A2.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
    		}
    		//Sixth item....
			else if(a1==6){
				fstream write;
	        	int x, p = 37999;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Honor_View_20.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Honor_View_20.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
    		}
    		//Seventh item....
			else if(a1==7){
				fstream write;
	        	int x, p = 64990;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Huawei_Mate_20_Pro.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Huawei_Mate_20_Pro.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
    		}
    		//Eight item....
			else if(a1==8){
				fstream write;
	        	int x, p = 73900;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Samsung_Galaxy_S10_Plus.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Samsung_Galaxy_S10_Plus.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
    		}
    		//Ninth item....
			else if(a1==9){
				fstream write;
	        	int x, p = 99900;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\iPhone_XS.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\iPhone_XS.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
    		}
    		//Tenth item....
			else if(a1==10){
				fstream write;
	        	int x, p = 49990;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\LG_V40_ThinQ.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\LG_V40_ThinQ.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
    		}
    		else if(a1==11){
    			goto cat;
			}
    		else{
    			cout<<"Invalid Item !"<<endl;
    			goto there;
			}
			}

			//Second Category...

		else if(x==2){
			PlaySound(TEXT("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Auido File\\TV.wav"), NULL, SND_SYNC);
			cout<<"1. LG OLED55C8PTA 4K Ultra HD "<<endl;
			cout<<"2. Samsung NU8000 4K Ultra HD"<<endl;
			cout<<"3. Sony XBR55X900F 4K Ultra HD"<<endl;
			cout<<"4. TCL 55 4K UHD HDR 55S425-CA "<<endl;
			cout<<"5. VIZIO P-Series 65 HDR UHD"<<endl;
			cout<<"6. Go Back !"<<endl;
			cin>>a1;
			clrscr();


			if(a1==1){
				fstream write;
	        	int x, p = 151743;
				int y;
    			write.open("vF:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\LG_OLED55C8PTA.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\LG_OLED55C8PTA.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}

			//Second item....
			else if(a1==2){
				fstream write;
	        	int x, p = 121989;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Samsung_NU8000.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\Samsung_NU8000.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}

    		//Third item....
			else if(a1==3){
				fstream write;
	        	int x, p = 126058;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\Sony_XBR55X900F.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\Sony_XBR55X900F.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}
    		//Fourth item....
			else if(a1==4){
				fstream write;
	        	int x, p = 56786;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\TCL_55.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Mobiles\\TCL_55.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}
    		//Fifth item....
			else if(a1==5){
				fstream write;
	        	int x, p = 117595;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\VIZIO_65.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\TV\\VIZIO_65.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}
    		else if(a1==6){
    			goto tv;
			}

		}	//Last category...

		else if(x==3){
			PlaySound(TEXT("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Auido File\\laptop.wav"), NULL, SND_SYNC);
			cout<<"1. Alienware AAW17R4-7002SLV-PUS"<<endl;
			cout<<"2. Acer 17.3 Predator Helios 500"<<endl;
			cout<<"3. MSI Gaming MSI GT83 8RG-007IN"<<endl;
			cout<<"4. Asus ROG Strix Hero II "<<endl;
			cout<<"5. HP OMEN X-ap046TX 17-inch FHD"<<endl;
			cout<<"6. Go Back !"<<endl;
			cin>>a1;
			clrscr();


			if(a1==1){
				fstream write;
	        	int x;
				float p = 224999;
				int y;
    			write.open("Alienware_AAW17R4-7002SLV-PUS.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("Alienware_AAW17R4-7002SLV-PUS.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}

			//Second item....
			else if(a1==2){
				fstream write;
	        	int x;
				 float p = 212840;
				int y;
    			write.open("Predator_Helios_500.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("Predator_Helios_500.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}

    		//Third item....
			else if(a1==3){
				fstream write;
	        	int x;
				float p = 419990;
				int y;
    			write.open("MSI_Gaming.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("MSI_Gaming.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}
    		//Fourth item....
			else if(a1==4){
				fstream write;
	        	int x, p = 164999;
				int y;
    			write.open("Asus_ROG.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("Asus_ROG.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}
    		//Fifth item....
			else if(a1==5){
				fstream write;
	        	int x, p = 296990;
				int y;
    			write.open("HP_OMEN.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("HP_OMEN.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
		}
		else if(a1==6){
			goto laptop;
		}
		else{
			cout<<"Invalid Item!";
		}
	}
		else if(x==4){
			PlaySound(TEXT("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Auido File\\audio.wav"), NULL, SND_SYNC);
			cout<<"1. JBL Boom Box Most-Powerful Portable Speaker"<<endl;
			cout<<"2. Beats by Dr. Dre Studio3"<<endl;
			cout<<"3. Skullcandy Hesh 3 Psycho Tropical"<<endl;
			cout<<"4. boAt Rockerz 600"<<endl;
			cout<<"5. Apple AirPods"<<endl;
			cout<<"6. Go Back !"<<endl;
			cin>>a1;
			clrscr();


			if(a1==1){
				fstream write;
	        	int x;
				float p = 25999;
				int y;
    			write.open("JBL_Boom.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("JBL_Boom.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}

			//Second item....
			else if(a1==2){
				fstream write;
	        	int x;
				 float p = 41080;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\Beats_Studio3.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\Beats_Studio3.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}

    		//Third item....
			else if(a1==3){
				fstream write;
	        	int x;
				float p = 6999;
				int y;
    			write.open("Skullcandy_Hesh.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\Skullcandy_Hesh.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}
    		//Fourth item....
			else if(a1==4){
				fstream write;
	        	int x, p = 2274;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\boAt_600.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\boAt_600.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;
    			}
    		}
    		//Fifth item....
			else if(a1==5){
				fstream write;
	        	int x, p = 12999;
				int y;
    			write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\Apple_AirPods.txt", ios::in | ios::out);
    			write>>x;
    			x=x;
    			write.close();
    			cout<<"Enter the Quantity : ";
				cin>>y;
				clrscr();
				x = x - y;
				write.open("F:\\Documents\\Saurabh\\B.Tech(Projects)\\1. Inteligent Store Management System Written in C++\\Stocks\\Audio\\Apple_AirPods.txt", ios::out);
				write<<x;
				if(x <= -1){
					cout<<"you don't have enough item\n";
					exit(0);
				}
				else{
					write.close();
    				z = y * p;

    			}
		    }
		    else if(a1==6){
		    	goto speaker;
			}
			else{
				cout<<"Invalid Item!";
			}
		}
		else if(x==5){
			goto account;
		}

		else{
		cout<<"Invalid Item"<<endl;
		goto here;
		}


			sum = sum + z;





}

gst = sum*(18/100);
/*if(a1==1 || a1==2 || a1==3 || a1==4 || a1==5 || a1==6 || a1==7 || a1==8 || a1==9 || a1==10){
	cout<<a<<"\t"<<b<<"\t"<<z<<endl;
	cout<<aa<<"\t"<<bb<<"\t"<<cc<<endl;
	cout<<aaa<<"\t"<<bbb<<"\t"<<ccc<<endl;
	cout<<aaaa<<"\t"<<bbbb<<"\t"<<cccc<<endl;
	cout<<aaaaa<<"\t"<<bbbbb<<"\t"<<ccccc<<endl;
	cout<<aaaaaa<<"\t"<<bbbbbb<<"\t"<<cccccc<<endl;
	cout<<aaaaaaa<<"\t"<<bbbbbbb<<"\t"<<ccccccc<<endl;
	cout<<aaaaaaaa<<"\t"<<bbbbbbbb<<"\t"<<cccccccc<<endl;
	cout<<aaaaaaaaa<<"\t"<<bbbbbbbbb<<"\t"<<ccccccccc<<endl;
	cout<<aaaaaaaaaa<<"\t"<<bbbbbbbbbb<<"\t"<<cccccccccc<<endl;
}*/
/*if(a1==1){
	cout<<a<<"\t"<<b<<"t"<<c;
};
if(a1==2){
	cout<<aa<<"\t"<<bb<<"\t"<<cc;
};
if(a1==3){
	cout<<aaa<<"\t"<<bbb<<"\t"<<ccc;
};
if(a1==4){
	cout<<aaaa<<"\t"<<bbbb<<"\t"<<cccc;
};
if(a1==5){
	cout<<aaaaa<<"\t"<<bbbbb<<"\t"<<ccccc;
};
if(a1==6){
	cout<<aaaaaa<<"\t"<<bbbbbb<<"\t"<<cccccc;
};
if(a1==7){
	cout<<aaaaaaa<<"\t"<<bbbbbbb<<"\t"<<ccccccc;
};
if(a1==8){
	cout<<aaaaaaaa<<"\t"<<bbbbbbbb<<"\t"<<cccccccc;
};
if(a1==9){
	cout<<aaaaaaaaa<<"\t"<<bbbbbbbbb<<"\t"<<ccccccccc;
};
if(a1==10){
	cout<<aaaaaaaaaa<<"\t"<<bbbbbbbbbb<<"\t"<<cccccccccc;
};*/
cout<<"Total Bill : "<<sum+gst;

	}


}
