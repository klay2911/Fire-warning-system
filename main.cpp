#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
#include <iomanip>
#include<time.h>
#include<stdlib.h>
using namespace std;

void textcolor(int x){
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}
void gotoxy(int x,int y){
	HANDLE hConsoleOutput;
	COORD Cursor_an_Pos = {x-1,y-1};
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput , Cursor_an_Pos);
}
class Doam{
	protected:
        int doam;
    public:
	    void tao_doam(){
        	doam = rand()%47+4 ;
		}
		void hienthi_doam(){
			cout<<"\nDo am hien tai: "<<doam<<" %";
		}
		int getdoam(){
			return doam;
		}
		void in_doam0(){
			cout<<"\nCap : 0";
			cout<<"\nKha nang chay: Khong co kha nang chay";
		}
		void in_doam1(){
			cout<<"\nCap : I";
			cout<<"\nToc do chay: Chay cham";
			cout<<"\nKha nang chay: It co kha nang chay, khong nguy hiem";
			cout<<"\nHuong phoi: Dong Bang va Dong Bac";
		}
		void in_doam2(){
			cout<<"\nCap : II";
			cout<<"\nToc do chay: Chay tuong doi nhanh";
			cout<<"\nKha nang chay: Co kha nang chay, tuong doi nguy hiem";
			cout<<"\nHuong phoi: Phia Bac";
		}
		void in_doam3(){
			cout<<"\nCap : III";
			cout<<"\nToc do chay: Chay trung binh";
			cout<<"\nKha nang chay: Co nhieu kha nang chay de dang";
			cout<<"\nHuong phoi: Phia Dong";
		}
		void in_doam4(){
			cout<<"\nCap : IV";
			cout<<"\nToc do chay: Chay nhanh";
			cout<<"\nKha nang chay: Rat de xay ra chay rung lon";
			cout<<"\nHuong phoi: Dong Nam, Nam va Tay Bac";
		}
		void in_doam5(){
			cout<<"\nCap : V";
			cout<<"\nToc do chay: Chay rat nhanh";
			cout<<"\nKha nang chay: Co nguy co chay lon, cuc ky nguy hiem";
			cout<<"\nHuong phoi: Tay Nam va Phia Tay";
		}
		int thongtin_doam(){
			if(doam>45){
				return 0;
			}else if (doam>35){
				return 1;
			}else if (doam>25){
				return 2;
			}else if (doam>15){
				return 3;
			}else if (doam>10){
				return 4;
			}else if (doam<=10){
				return 5;
			}
		}
		void in_doam(){
			switch(thongtin_doam()){
				case 0:in_doam0();break;
				case 1:in_doam1();break;
				case 2:in_doam2();break;
				case 3:in_doam3();break;
				case 4:in_doam4();break;
				case 5:in_doam5();break;
			}
		}
};
class Chitieup{
	protected:
        int chitieu_p;
    public:
	    public:
		void tao_chitieu_p(){
        	chitieu_p = rand()%26+1;
		}
		void hienthi_chitieu_p(){
			cout<<"\nChi tieu Pi: "<<chitieu_p;
		}
		int getchitieu_p(){
			return chitieu_p;
		}
		void in_1(){
			cout<<"\nCap : I";
			cout<<"\nNguy co: Cap thap";
			cout<<"\nKha nang chay: It co kha nang chay rung";
		}
		void in_2(){
			cout<<"\nCap : II";
			cout<<"\nNguy co: Cap trung binh";
			cout<<"\nKha nang chay: Co kha nang chay";
		}
		void in_3(){
			cout<<"\nCap : III";
			cout<<"\nNguy co: Cap cao";
			cout<<"\nKha nang chay: Co kha nang chay de chay";
		}
		void in_4(){
			cout<<"\nCap : IV";
			cout<<"\nNguy co: Cap nguy hiem";
			cout<<"\nKha nang chay: Rat de xay ra chay rung lon";
		}
		void in_5(){
			cout<<"\nCap : V";
			cout<<"\nNguy co: Cap cuc ki nguy hiem";
			cout<<"\nKha nang chay: Co kha nag chay lon va lan nhanh";
		}
		int thongtin_chitieu_p(){
			if (chitieu_p>20){
				return 5;
			}else if (chitieu_p>15){
				return 4;
			}else if (chitieu_p>10 ){
				return 3;
			}else if (chitieu_p>5){
				return 2;
			}else if (chitieu_p<=5 ){
				return 1;
			}
		}
		void in_chitieu_p(){
			switch(thongtin_chitieu_p()){
				case 1:cout<<" \nNhiet do: "<<rand()%10+12<<"'C";in_1();break;
			    case 2:cout<<" \nNhiet do: "<<rand()%2+22<<"'C";in_2();break;
				case 3:cout<<" \nNhiet do: "<<rand()%3+24<<"'C";in_3();break;
				case 4:cout<<" \nNhiet do: "<<rand()%10+27<<"'C";in_4();break;
				case 5:cout<<" \nNhiet do: "<<rand()%6+37<<"'C";in_5();break;
			}
		}
};
class ChiTieuTongHop: public Doam, public Chitieup{
    protected:
        bool k;
        float chitieu_th;
	public:
		bool tao_k(){
			return k=doam>45?false:true;
		}
		void tao_chitieu_th(){
			chitieu_th = tao_k()*((chitieu_p*1.0)*100/(doam*1.0));
		}
		void hienthi_chitieu_th(){
			cout<<"\nChi tieu tong hop chay rung (P'): "<<chitieu_th;
		}
		float getchitieu_th(){
			return chitieu_th;
		}
		int thongtin_chitieu_th(){
			if (chitieu_th>200){
				return 5;
			}else if (chitieu_th>100){
				return 4;
			}else if (chitieu_th>40){
				return 3;
			}else if (chitieu_th>14){
				return 2;
			}else if (chitieu_th>=0){
				return 1;
			}
		}
		void in_chitieu_th(){
			switch(thongtin_chitieu_th()){
				case 1:in_1();break;
			    case 2:in_2();break;
				case 3:in_3();break;
				case 4:in_4();break;
				case 5:in_5();break;
			}
		}
};
class Khuvuc: public ChiTieuTongHop{
	protected:
		char name[100];
	public:
		void hienthi_name(){
            cout <<"\n\t\t"<< name;
        };
		void muccanhbao(int i){
			switch(i){
				case 0: cout<<" rung Thong ->";break;
				case 1: cout<<" rung Bach Dan ->";break;
				case 2: cout<<" rung Tram ->";break;
				case 3: cout<<" rung Khop ->";break;
				case 4: cout<<" rung Tre, Nua ->";break;
				case 5: cout<<" rung Thong ->";break;
				case 6: cout<<" rung Lo O ->";break;
				case 7: cout<<" rung Tram ->";break;
				case 8: cout<<" rung Bach Dan ->";break;
				case 9: cout<<" rung Thuong Xanh ->";break;
			}
			switch(thongtin_chitieu_th()){
				case 5:textcolor(12);cout<<" NGUY CO CHAY CUC KY CAO\n";break;
			    case 4:textcolor(14);cout<<" NGUY CO CHAY RAT CAO\n";break;
				case 3:textcolor(13);cout<<" NGUY CO CHAY CAO\n";break;
				case 2:textcolor(10);cout<<" NGUY CO CHAY TRUNG BINH\n";break;
				case 1:textcolor(11);cout<<" NGUY CO CHAY THAP\n";break;
			}
			textcolor(15);
		}
		void mau(){
			switch(thongtin_chitieu_th()){
				case 5:textcolor(12);break;
			    case 4:textcolor(14);break;
				case 3:textcolor(13);break;
				case 2:textcolor(10);break;
				case 1:textcolor(11);break;
			}
		}
		void warning(){
			mau();
			cout<<" WARNING";
			textcolor(15);
		}
		void hienthi_them(){
			if (chitieu_th>200){
				cout<<" \nDo doc: "<<rand()%16+35<<"\t|";
				cout<<"\nDo cao: "<<rand()%45+5<<" m    |=> Kha nang chay rat cao";
				cout<<" \nThuy van: "<<rand()%101+800<<" m |";
			}else if (chitieu_th>100){
				cout<<" \nDo doc: "<<rand()%10+25<<"\t|";
				cout<<"\nDo cao: "<<rand()%50+50<<" m    |=> Kha nang chay cao";
				cout<<" \nThuy van: "<<rand()%200+600<<" m |";
			}else if (chitieu_th>40){
				cout<<" \nDo doc: "<<rand()%10+15<<"\t|";
				cout<<"\nDo cao: "<<rand()%200+100<<" m   |=> Kha nang chay trung binh";
				cout<<" \nThuy van: "<<rand()%200+400<<" m |";
			}else if (chitieu_th>14){
				cout<<" \nDo doc: "<<rand()%10+5<<" \t|";
				cout<<"\nDo cao: "<<rand()%200+300<<" m   |=> Kha nang chay thap";
				cout<<" \nThuy van: "<<rand()%200+200<<" m |";
			}else if (chitieu_th>=0){
				cout<<" \nDo doc: "<<rand()%5<<"\t|";
				cout<<"\nDo cao: "<<rand()%101+500<<" m   |=> It kha nang chay";
				cout<<" \nThuy van: "<<rand()%195+5<<" m |";
			}
		}
		void tao_khuvuc(){
			tao_doam();
			tao_chitieu_p();
			tao_chitieu_th();
		}
//		void hienthi_khuvuc(){
//			cout<<"==========================================\n";
//			hienthi_them();
//			cout<<"\n==========================================\n";
//			hienthi_doam();
//			in_doam();
//			cout<<"\n==========================================\n";
//			hienthi_chitieu_p();
//			in_chitieu_p();
//			cout<<"\n==========================================\n";
//			hienthi_chitieu_th();
//			in_chitieu_th();
//			cout<<"\n==========================================\n";
//		}
		void hienthi_khuvuc1(){
			cout<<"\n==========================================\n";
			hienthi_doam();
			in_doam();
			cout<<"\n==========================================\n";
		}
		void hienthi_khuvuc2(){
			cout<<"\n==========================================\n";
			hienthi_chitieu_p();
			in_chitieu_p();
			cout<<"\n==========================================\n";
		}
		void hienthi_khuvuc3(){
			cout<<"\n==========================================\n";
			hienthi_them();
			cout<<"\n==========================================\n";
			hienthi_chitieu_th();
			in_chitieu_th();
			cout<<"\n==========================================\n";
		}
		void chi_tiet(){
			int level;
            while(true){
            	cout<< "\n\t________________LUA CHON___________________" << endl;
                cout<<endl<<"\t1. Xem Chi Tiet Do Am ";
                cout<<endl<<"\t2. Xem Chi Tiet Chi Tieu Pi";
                cout<<endl<<"\t3. Xem Tinh Trang Chay ";
                cout<<endl<<"\t0. Thoat ";
                cout<<endl<<"\n\tLua Chon: "; cin >> level;
                switch(level){
                    case 1:
                    	strcpy(name, "DO AM");
                        hienthi_name();
                        hienthi_khuvuc1();
                        getch();
                        break;
                    case 2:
                    	strcpy(name, "CHI TIEU Pi");
                        hienthi_name();
                        hienthi_khuvuc2();
                        getch();
                        break;
                    case 3:
                    	strcpy(name, "TINH TRANG CHAY");
                        hienthi_name();
                        hienthi_khuvuc3();
                        getch();
                        break;
                    case 0:
                        cout << "\nBan da thoat";
                        return;
                    default:
                        cout << "\nKhong co lua chon nay!";
                        cout << "\nHay Chon Lai: \n";
                        getch();
                        break;
                }
            }
		}
		void get_tatca(int i){
			cout<<endl<<"|-------------|----------|--------------|--------------|";
            cout<<endl<<"|"<<setw(7)<<i+1<<setw(7)<<"|"<<setw(5)<<getdoam()<<" %"<<setw(4)<<"|"<<setw(8)<<getchitieu_p()<<setw(7)<<"|"<<setw(9)<<getchitieu_th()<<setw(6)<<"|";//warning();
		}
};
class Tonghopkhuvuc{
	protected:
		Khuvuc k[10];
	public:
		void tao_dongho(int gio, int phut, int giay, int i){
			while(true){
                if(giay!=0){
        	        giay--;
		        }else{
			        if(phut!=0){
				        giay = 60;
			            phut--;
			        }else{
				        if(gio!=0){
				        	phut=60;
				        	gio--;
			       	    }else{
			       	    	break;
			         	}
		 	        }
		        }
                system("cls");
                cout<<"\t                                     //\\\n";
                cout<<"\t           __                       |/ \\|\n";
                cout<<"\t  ____    /_/   ____         _____   ____  _   _  _____ \n";
                cout<<"\t |  _ \\   /\\   / __ \\       |  __ \\ / __ \\| \\ | |/ ____|\n";
                cout<<"\t | |_) | /  \\ | |  | |    __|_|_ | | |  | | |\\| | |  __ \n";
                cout<<"\t |  _ < / /\\ \\| |  | |   |______|  | |  | | |   | | |_ |\n";
                cout<<"\t | |_) / ____ \\ |__| |      | |__| | |__| | |\\  | |__| |\n";
                cout<<"\t |____/_/    \\_\\____/       |_____/ \\____/|_| \\_|\\_____|\n";
                cout<<"\t                                      _ \n";
                cout<<"\t                                     (_)";
                cout<<"\n\nKHU VUC "<<i+1<<": ";k[i].muccanhbao(i);
                k[i].hienthi_doam();k[i].hienthi_chitieu_p();k[i].hienthi_chitieu_th();
                textcolor(79);
                gotoxy(30,23);
                cout<<gio<<":"<<phut<<":"<<giay<<"\n\n";
                textcolor(15);
                Sleep(800);
            }
            textcolor (15);
		}
		void dongho(){
	    	for (int i=0;i<10;i++){
	    	    switch(k[i].thongtin_chitieu_th()){
	    	    	case 5:case 4: tao_dongho(00,00,11,i);break;
	    	    	default:break;
				}
			}
		}
	    void tao(){
	    	for (int i=0;i<10;i++){
	    	    k[i].tao_khuvuc();
			}
		}
		void hienthi(){
			for (int i=0;i<10;i++){
				cout<<"\nKHU VUC "<<i+1<<":";
				k[i].muccanhbao(i);
			}
		}
		void hienthi_tatca(){
			for (int i=0;i<10;i++){
				k[i].get_tatca(i);
			}
		}
		void chitiet(){
			hienthi();
			int key;
            while(true){
            	cout<<endl<<"============================================\n";
            	cout<<endl<<"Chon tu 1->10 de xem chi tiet khu vuc\n ";
            	cout<<endl<<"Chon 0 neu muon thoat\n ";
                cout<<endl<<"=>Lua chon cua ban: "; cin >> key;
                if(key == 0){
                    system ("cls");
                    return;
                }else if(key>=1 && key<=10){
                	system("cls");
                    cout << "\n\tKHU VUC "<<key<<":";
                    k[key-1].muccanhbao(key-1);
					map_mini(key-1);

					k[key-1].chi_tiet();
                    //k[key-1].hienthi_khuvuc();

                    cout<<"\nHay an bat nut ki de tiep tuc!";
                    getch();
                    system("cls");
                    hienthi();
				}else{
                	cout<<"\nKhong co khu vuc nay\n";
				}
            }
        }
        void bang_khuvuc(){
        	cout<<endl<<"\n|=============|==========|==============|==============|";
            cout<<endl<<"|"<<setw(10)<<"KHU VUC"<<setw(4)<<"|"<<setw(6)<<"DO AM (%)"<<setw(2)<<"|"<<setw(6)<<" CHI TIEU Pi "<<setw(2)<<"|"<<setw(4)<<"CHI TIEU P'"<<setw(4)<<"|";
			hienthi_tatca();
			cout<<endl<<"|-------------|----------|--------------|--------------|\n";
		}
		void map(){
            cout<<"....................................................................................................\n";
            cout<<"....................................................................................................\n";
            cout<<"............................................... .^~^  .~7!^   ~~....................................\n";
            cout<<"....................     ..................    !Y~7P!!J!~5P::7J7J ..................................\n";
            cout<<"...............   ..:^~7: .          ..... .!~!7P. ::^: :?!~7~ 7Y.  .....  .........................\n";
            cout<<"............   :~777!~:Y!  .^^:.   ...   .^JJ~^^^               ~Y!!.   .:: ........................\n";
            cout<<"........   .:!77~:     !Y~~Y~~!77?:  .^~!?!: !:         3         :P7!7!7!J!J!J! ...................\n";
            cout<<".....   .^77!^         ^!^^:    .??7777^:    !:    Do Am:";cout<<k[2].getdoam();cout<<"      7::        :J7!~~^ ................\n";
            cout<<".....^!77~:            :!                   :!    Chi Tieu:";cout<<k[2].getchitieu_p();cout<<"   ~~            ^^^?5~ ...............\n";
            cout<<".. .Y!^         1      !^        2        ^^:::                :^:^:      6       ~G:...............\n";
            cout<<"... 5^    Do Am:";cout<<k[0].getdoam();cout<<"    .^!  Do Am:";cout<<k[1].getdoam();cout<<"       ^^::......::::.::~!~~^                 :P: ...............\n";
            cout<<"... :Y~ Chi Tieu:";cout<<k[0].getchitieu_p();cout<<"   :7   Chi Tieu:";cout<<k[1].getchitieu_p();cout<<"   ^!^.:^^^^^^:^^::^:...^!^   Do Am:";cout<<k[5].getdoam();cout<<"     Y?.................\n";
            cout<<"... .P^                ^7               ^~~                   !^:  Chi Tieu:";cout<<k[5].getchitieu_p();cout<<"   !P: ...............\n";
            cout<<".....P~.               ..~^            :!            4         ~!               Y7. ................\n";
            cout<<".... ^77J.              .!:           !^      Do Am:";cout<<k[3].getdoam();cout<<"       .7.                 JJ^: ..............\n";
            cout<<".... ^77J.               .!:           !^   Chi Tieu:";cout<<k[3].getchitieu_p();cout<<"      .7.                 JJ^: ..............\n";
            cout<<".... ^77J.^~^^~^^~~..^~^^.!:           !^                       .7.                 JJ^: ...........\n";
            cout<<".....   ~Y!7!577~^?J^^^.^~~~::^^~^^^~!^:...::...:^:^^!^^:~^^^^~.~^....::.:^~^.7Y??7J77?^:  .........\n";
            cout<<"........ .^!7^     !5.              !^:^!^                      :7^!~!^                ~~J7. .......\n";
            cout<<"........ .^!7^     !5.              !^:^!^           5         :7^!~!          7        ~~J7. ......\n";
            cout<<".................. .P:  Do Am:";cout<<k[7].getdoam();cout<<"       ~~:    Do Am:";cout<<k[4].getdoam();cout<<"     :^!~                        7J!~ .........\n";
            cout<<".................. .P: Chi Tieu:";cout<<k[7].getchitieu_p();cout<<"     ~~:  Chi Tieu:";cout<<k[4].getchitieu_p();cout<<"   :^!~       Do Am:";cout<<k[6].getdoam();cout<<"        7J!~...........\n";
            cout<<"................... !J                   ^!:~^          ~^:: :~^        Chi Tieu:";cout<<k[6].getchitieu_p();cout<<"    ?Y^..........\n";
            cout<<"................... :J!^~?Y~:.        8      !~::~^!!:!^         7^:.                       Y!^~:...\n";
            cout<<".................... .^~^:!!!J!                    ^!            ^~^                        ^!5^....\n";
            cout<<"......................       :P.                    7:             ~~:.^!^^::.                5^....\n";
            cout<<"............................ :P^!!!~^~!7.           7                ~^7:   :^~~  :^::        ?Y....\n";
            cout<<"............................. ~J^.:^~^:!??~:..:^^^^^^        9        ~7      .7^.!  :!     !Y!!....\n";
            cout<<"..............................          .7PY                         ^^        ::^^   7.  J7~:  ....\n";
            cout<<"........................................ !Y      Do Am:";cout<<k[8].getdoam();cout<<"           ^!.               !Y77J5........\n";
            cout<<"........................................ ?Y~    Chi Tieu:";cout<<k[8].getchitieu_p();cout<<"       .7.             ~??:~!J. .........\n";
            cout<<"......................................... !P.                      ::.             ~5: .............\n";
            cout<<"........................................ JJ           5^ !J     :!:                ^P^..............\n";
            cout<<"........................................ ~?7!77!J~!?!~^ .Y7.  :^~.       10      ~J!................\n";
            cout<<".........................................  ....:^~^.   .. 7Y  .^~:              :G^.................\n";
            cout<<"..............................................     ...... ?? ^!.    Do Am:";cout<<k[9].getdoam();cout<<"    ^G..................\n";
            cout<<"......................................................... ~J!?J~~. Chi Tieu:";cout<<k[9].getchitieu_p();cout<<"   ?J:................\n";
            cout<<"..........................................................  . .^~5~::.            ^57...............\n";
            cout<<"..............................................................   ^!!7J!.          ^P! ..............\n";
            cout<<".................................................................    !Y7?^        :5^ ..............\n";
            cout<<".....................................................................   ^5::^~7!77?7 ...............\n";
            cout<<"....................................................................................................\n";
            cout<<"....................................................................................................\n";
		}
		void nguyhiem(){
            cout<<"\n....................................................................................................\n";
            cout<<"....................................................................................................\n";
            cout<<"............................................... .^~^  .~7!^   ~~....................................\n";
            cout<<"....................     ..................    !Y~7P!!J!~5P::7J7J ..................................\n";
            cout<<"...............   ..:^~7: .     .......... .!~!7P. ::^: :?!~7~ 7Y.  .....  .........................\n";
            cout<<"............   :~777!~:Y!  .^^:.   ...   .^JJ~^^^               ~Y!!.   .:: ........................\n";
            cout<<"........   .:!77~:     !Y~~Y~~!77?:  .^~!?!: !:         3         :P7!7!7!J!J!J! ...................\n";
            cout<<".....   .^77!^         ^!^^:    .??7777^:    !:                  7::        :J7!~~^ ................\n";
            cout<<".....^!77~:            :!                   :!    ";k[2].warning();cout<<"      ~~            ^^^?5~ ...............\n";
            cout<<".. .Y!^         1      !^        2        ^^:::                :^:^:      6       ~G:...............\n";
            cout<<"... 5^                .^!                 ^^::......::::.::~!~~^                 :P: ...............\n";
            cout<<"... :Y~    ";k[0].warning();cout<<"   :7     ";k[1].warning();cout<<"     ^!^.:^^^^^^:^^::^:...^!^                Y?................\n";
            cout<<"... .P^                ^7               ^~~                   !^:    ";k[5].warning();cout<<"    !P: ...............\n";
            cout<<".....P~.               ..~^            :!            4         ~!               Y7. ................\n";
            cout<<".... ^77J.              .!:           !^                     .7.                 JJ^: ..............\n";
            cout<<".... ^77J.               .!:           !^    ";k[3].warning();cout<<"        .7.                 JJ^: ..............\n";
            cout<<".... ^77J.^~^^~^^~~..^~^^.!:           !^                       .7.                 JJ^: ...........\n";
            cout<<".....   ~Y!7!577~^?J^^^.^~~~::^^~^^^~!^:...::...:^:^^!^^:~^^^^~.~^....::.:^~^.7Y??7J77?^:  .........\n";
            cout<<"........ .^!7^     !5.              !^:^!^                      :7^!~!^                ~~J7. .......\n";
            cout<<"........ .^!7^     !5.              !^:^!^           5         :7^!~!          7        ~~J7. ......\n";
            cout<<".................. .P:                 ~~:     ";k[4].warning();cout<<"    :^!~                        7J!~.........\n";
            cout<<".................. .P:     ";k[7].warning();cout<<"    ~~:                :^!~       ";k[6].warning();cout<<"        7J!~...........\n";
            cout<<"................... !J                   ^!:~^          ~^:: :~^                       ?Y^..........\n";
            cout<<"................... :J!^~?Y~:.        8      !~::~^!!:!^         7^:.                       Y!^~:...\n";
            cout<<".................... .^~^:!!!J!                    ^!            ^~^                        ^!5^....\n";
            cout<<"......................       :P.                    7:             ~~:.^!^^::.                5^....\n";
            cout<<"............................ :P^!!!~^~!7.           7                ~^7:   :^~~  :^::        ?Y....\n";
            cout<<"............................. ~J^.:^~^:!??~:..:^^^^^^        9        ~7      .7^.!  :!     !Y!!....\n";
            cout<<"..............................          .7PY                         ^^        ::^^   7.  J7~:  ....\n";
            cout<<"........................................ !Y         ";k[8].warning();cout<<"        ^!.               !Y77J5........\n";
            cout<<"........................................ ?Y~                      .7.             ~??:~!J. .........\n";
            cout<<"......................................... !P.                      ::.             ~5: .............\n";
            cout<<"........................................ JJ           5^ !J     :!:                ^P^..............\n";
            cout<<"........................................ ~?7!77!J~!?!~^ .Y7.  :^~.       10      ~J!................\n";
            cout<<".........................................  ....:^~^.   .. 7Y  .^~:              :G^.................\n";
            cout<<"..............................................     ...... ?? ^!.    ";k[9].warning();cout<<"    ^G..................\n";
            cout<<"......................................................... ~J!?J~~.               ?J:................\n";
            cout<<"..........................................................  . .^~5~::.            ^57...............\n";
            cout<<"..............................................................   ^!!7J!.          ^P! ..............\n";
            cout<<".................................................................    !Y7?^        :5^ ..............\n";
            cout<<".....................................................................   ^5::^~7!77?7 ...............\n";
            cout<<"....................................................................................................\n";
            cout<<"....................................................................................................\n";
		}
		void map1(){
			cout<<endl;
			cout<<"\t...............................\n";
            cout<<"\t.................. .:^~7: .....\n";
            cout<<"\t.............  :~777!~:Y! .....\n";
            cout<<"\t..........  :!77~:     !Y .....\n";
            cout<<"\t....... .^77!^         ^! .....\n";
            cout<<"\t.....^!77~:            :! .....\n";
            cout<<"\t.. .Y!^         1      !^ .....\n";
            cout<<"\t... 5^                .^! .....\n";
            cout<<"\t... :Y~    WARNING    :7  .....\n";
            cout<<"\t... .P^                ^7 .....\n";
            cout<<"\t.....P~.               ..~^ ...\n";
            cout<<"\t.... ^77J.              .!: ...\n";
            cout<<"\t.... ^77J.               .!: ..\n";
            cout<<"\t.... ^77J.^~^^~^^~~..^~^^.!: ..\n";
            cout<<"\t......  ~Y!7!577~^?J^^^.^~~~ ..\n";
            cout<<"\t......... ^!7^  ...............\n";
            cout<<"\t......... ^!7^ ................\n";
            textcolor(15);
		}
		void map2(){
			cout<<endl;
			cout<<"\t.............................\n";
            cout<<"\t.. Y!  .^^:.   ...   .^JJ~^ .\n";
            cout<<"\t.. !Y~~Y~~!77?:  .^~!?!: !: .\n";
            cout<<"\t.. ^!^^:    .??7777^:    !: .\n";
            cout<<"\t.. :!                   :! ..\n";
            cout<<"\t.. !!^        2        ^^::: \n";
            cout<<"\t.. ^!                 ^^:: ..\n";
            cout<<"\t. :7     WARNING     ^!^ ....\n";
            cout<<"\t.. ^7               ^~~ .....\n";
            cout<<"\t.... ~^            :! .......\n";
            cout<<"\t.... !:           !^ ........\n";
            cout<<"\t..... !:           !^ .......\n";
            cout<<"\t..... !:           !^ .......\n";
            cout<<"\t..... ~~::^^~^^^~!^: ........\n";
            textcolor(15);
		}
		void map3(){
			cout<<endl;
			cout<<"\t........ .....  .............\n";
            cout<<"\t.......^~^  .~7!^   ~~.......\n";
            cout<<"\t.....!Y~7P!!J!~5P::7J7J......\n";
            cout<<"\t..!~!7P. ::^: :?!~7~ 7Y......\n";
            cout<<"\t..J~^^^               ~Y!!...\n";
            cout<<"\t...!:         3         :P7..\n";
            cout<<"\t...!:                  7::...\n";
            cout<<"\t..:!    WARNING       ~~.....\n";
            cout<<"\t..:::                :^:.....\n";
            cout<<"\t....::......::::.::~!~~^.....\n";
            textcolor(15);
		}
		void map4(){
            cout<<endl;
            cout<<"\t....... ......  ...............\n";
            cout<<"\t....^!^.:^^^^^^:^^::^:...^!^...\n";
            cout<<"\t...^~~                   !^:...\n";
            cout<<"\t..:!            4         ~!...\n";
            cout<<"\t.!^                     .7.....\n";
            cout<<"\t..!^    WARNING         .7.....\n";
            cout<<"\t..!^                       .7..\n";
            cout<<"\t..:...::...:^:^^!^^:~^^^^~.~^..\n";
            cout<<"\t...............................\n";
            textcolor(15);
		}
		void map5(){
            cout<<endl;
            cout<<"\t.........................................\n";
            cout<<"\t..... ~Y!7!577~^?J^^^.^~~~::^^~^^^~!^: ..\n";
            cout<<"\t...... !^:^!^                      :7^! .\n";
            cout<<"\t...... !^:^!^           5         :7^! ..\n";
            cout<<"\t......... ~~:     WARNING     :^!~ ......\n";
            cout<<"\t......... ~~:                :^!~ .......\n";
            cout<<"\t........... ^!:~^          ~^:: .........\n";
            cout<<"\t................ !~::~^!!:!^ ............\n";
            cout<<"\t.........................................\n";
            textcolor(15);
		}
		void map6(){
            cout<<endl;
            cout<<"\t.....................................\n";
            cout<<"\t.......... :P7!7!7!J!J!J! ...........\n";
            cout<<"\t........ 7::        :J7!~~^ .........\n";
            cout<<"\t....... .~~            ^^^?5~ .......\n";
            cout<<"\t...... :^:^:      6       ~G: .......\n";
            cout<<"\t...... ^                 :P: ........\n";
            cout<<"\t..... ^!^                Y? .........\n";
            cout<<"\t..... !^:    WARNING     !P: ........\n";
            cout<<"\t...... ~!               Y7. .........\n";
            cout<<"\t..... 7.                 JJ^: .......\n";
            cout<<"\t..... 7.                 JJ^: .......\n";
            cout<<"\t....... .7.                 JJ^: ....\n";
            cout<<"\t....... ~^....::.:^~^.7Y??7J77?^: ...\n";
            cout<<"\t.....................................\n";
            textcolor(15);
		}
		void map7(){
            cout<<endl;
            cout<<"\t...............................................\n";
            cout<<"\t................ ::.:^~^.7Y??7J77?^: ..........\n";
            cout<<"\t.......... :7^!~!^                ~~J7. .......\n";
            cout<<"\t......... :7^!~!          7        ~~J7. ......\n";
            cout<<"\t..... :^!~                        7J!~ ........\n";
            cout<<"\t.... :^!~       WARNING         7J!~ ..........\n";
            cout<<"\t. ~^:: :~^                       ?Y^. .........\n";
            cout<<"\t.......... 7^:.                       Y!^~: ...\n";
            cout<<"\t.......... ^~^                        ^!5^ ....\n";
            cout<<"\t............ ~~:.^!^^::.                5^ . ..\n";
            cout<<"\t.............. ~^7:   :^~~  :^::        ?Y . ..\n";
            cout<<"\t......................  7^.!  :!     !Y!! .....\n";
            cout<<"\t....................... ::^^   7.  J7~:  ......\n";
            cout<<"\t.............................. !Y77J5..........\n";
            cout<<"\t.......................... ~??:~!J. ...........\n";
            cout<<"\t........................... ~5: ...............\n";
            textcolor(15);
		}
        void map8(){
            cout<<endl;
            cout<<"\t...................................................\n";
            cout<<"\t.. ~Y!7!577~^?J^^^.^~~~::^^~^^^~!^: ...............\n";
            cout<<"\t.... ^!7^ ... !5.              !^:^!^ .............\n";
            cout<<"\t.... ^!7^ ... !5.              !^:^!^ .............\n";
            cout<<"\t............. .P:                 ~~: .............\n";
            cout<<"\t............. .P:     WARNING     ~~: .............\n";
            cout<<"\t.............. !J                   ^!:~^ .........\n";
            cout<<"\t.............. :J!^~?Y~:.        8      !~::~^!!: .\n";
            cout<<"\t............... .^~^:!!!J!                    ^! ..\n";
            cout<<"\t....................... :P.                    7: .\n";
            cout<<"\t....................... :P^!!!~^~!7.           7 ..\n";
            cout<<"\t........................ ~J^.:^~^:!??~:..:^^^^^^. .\n";
            textcolor(15);
		}
		void map9(){
            cout<<endl;
            cout<<"\t......................... .............\n";
            cout<<"\t....................... :^!~ ..........\n";
            cout<<"\t...................... .:^!~. .........\n";
            cout<<"\t.................. ....:: :~^ .........\n";
            cout<<"\t............. !!:!^         7^: .......\n";
            cout<<"\t............. .!            ^~^^!5^ ...\n";
            cout<<"\t............. 7:              ~~:.^ ...\n";
            cout<<"\t............ .7                ~^7: ...\n";
            cout<<"\t.. ?~:..:^^^^^^        9        ~7 ....\n";
            cout<<"\t.... 7PY                         ^^ ...\n";
            cout<<"\t.. !Y         WARNING         ^!. .....\n";
            cout<<"\t.. ?Y~                      .7. .......\n";
            cout<<"\t.... !P.                      :: ......\n";
            cout<<"\t.... JJ           5^ !J     :!: .......\n";
            cout<<"\t.... ~?7!77!J~!?!~^ .Y7.  :^~. ........\n";
            cout<<"\t.......... :^~^. .... 7Y  .^~: ........\n";
            cout<<"\t..................... ?? ^!. ..........\n";
            cout<<"\t..................... ~J!?J~~ .........\n";
            textcolor(15);
		}
		void map10(){
            cout<<endl;
            cout<<"\t............. ^!^^:: .................\n";
            cout<<"\t............ ^7:   :^~~  :^:: ........\n";
            cout<<"\t........... .~7      .7^.!  :! .......\n";
            cout<<"\t.......... .^^        ::^^   7: ......\n";
            cout<<"\t......... .^!.               !Y ......\n";
            cout<<"\t........ .7.             ~??:~!J .....\n";
            cout<<"\t......... ::.             ~5: ........\n";
            cout<<"\t...... .!:                ^P^ ........\n";
            cout<<"\t.... :^~.       10      ~J! ..........\n";
            cout<<"\t.... .^~:              :G^ ...........\n";
            cout<<"\t... .!.    WARNING     ^G ............\n";
            cout<<"\t.... J~~.               ?J: ..........\n";
            cout<<"\t......^~5~::.            ^57 .........\n";
            cout<<"\t........ !!7J!.          ^P! .........\n";
            cout<<"\t........... !Y7?^        :5^ .........\n";
            cout<<"\t.............. ^5::^~7!77?7 ..........\n";
            cout<<"\t......................................\n";
            textcolor(15);
		}
		void map_mini(int i){
			k[i].mau();
			switch(i){
				case 0:map1();break;
				case 1:map2();break;
				case 2:map3();break;
				case 3:map4();break;
				case 4:map5();break;
				case 5:map6();break;
				case 6:map7();break;
				case 7:map8();break;
				case 8:map9();break;
				case 9:map10();break;
			}
		}
};
class Rung{
    protected:
    	Tonghopkhuvuc t;
        char luachon[255];
    public:
    	Rung(){
    		t.tao();
		}
        void hienthi_luachon(){
            cout <<"\n\t"<< luachon<<endl;
        };
        void caidat_luachon(){
            int key;
            t.map();
            getch();
            t.bang_khuvuc();
            getch();
            t.nguyhiem();
            getch();
            //Sleep(2000);
            //dongho(00,00,11);
            t.dongho();
            system ("cls");
            while (true){
            	//t.bang_khuvuc();
            	//getch();
            	//t.map();
            	t.nguyhiem();
                cout << "\n________________CANH BAO___________________" << endl;
                cout << "1. BAO DONG" << endl;
                cout << "2. CAC KHU VUC" << endl;
                cout << "0. THOAT CHUONG TRINH" << endl;
                cout << "\nCHON LUA CHON: ";
                cin >> key;
                switch(key)
                {
                    case 1:
                    	system ("cls");
                        t.dongho();
                        system("cls");
                        break;
                    case 2:
                    	system ("cls");
                        strcpy(luachon, "CAC KHU VUC");
                        hienthi_luachon();
                        t.chitiet();
                        break;
                    case 0:
                        return;
                    default:
                        cout << "\nKhong co che do nay!";
                        cout << "\n=>Bam phim bat ky de tiep tuc!";
                        getch();
                        system("cls");
                        break;
                }
            }
        };
};
int main(){
    srand(time(NULL));
    Rung c;
    c.caidat_luachon();
//    int n=1;
//    while(n<=5){
//    	Rung c;
//        c.caidat_luachon();
//        n++;
//        system ("cls");
//	}
	return 0;
}


