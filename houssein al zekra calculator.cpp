#include<iostream>
#include<cstring>

using namespace std ;
void myfunction(int x , int y){
	cout << "enter your numbers respectevlly "<<endl;
	cin >> x >> y ;
	cout << "your awnser is :   " ;
	int minus = x  - y ;
	cout << minus<<endl ;
}
void myfunction1(int x , int y){
	cout << "enter your numbers respectevlly "<<endl;
	cin >> x >> y ;
	cout << "your awnser is :   " ;
	int plus = x + y ;
	cout << plus << endl ;
}
void myfunction3(int x , int y){
	cout << "enter your numbers respectevlly "<<endl;
	cin >> x >> y ;
	cout << "your awnser is :   " ;
	int darb = x * y ;
	cout << darb << endl ;
}
void myfunction4(int x , int y){
	cout << "enter your numbers respectevlly "<<endl;
	cin >> x >> y ;
	cout << "your awnser is :   " ;
	int esme = x / y;
	cout << esme << endl ;
}


main ( ){
	
	cout << "welcom to my program  ya ... \n \n can i know your name ?\n";
	string name ;
	cin >> name ;
	cout << "lk ya welcom bl governement a7la "<< name <<"  bl manta2a"<<endl;
	 
	cout << "\ntfadal ya " << name << "  staamel l calculator \n\n";
	
	int x , y,b ;
	char a ;
	
	do{
     cout <<" 7ot eza bdk - or + or * or /  "<<endl ;
	cin >> a ;
	if(a== '-')
	 myfunction(x,y);
	 else if(a=='+')
	myfunction1(x,y);
	else if(a='/')
	myfunction3(x,y);
	else if(a='*'){	
	myfunction4(x,y);

		
}
	cout << "if you want to try again kindelly enter 1 or any other number to stop \n "<<endl;
	
	cin >>b ;
	b++;
}
while(b<=2) ;
	cout << "finish";
}

