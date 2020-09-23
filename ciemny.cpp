#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
	string x;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int compare_str(void const *a,void const *b){
    char const *aa=(char const *)a;
    char const *bb=(char const *)b;

    if(*aa==*bb) return 0;
    else if(*aa>*bb) return 1;
    else return -1;
}
int main(int argc, char** argv) {
		int wybor;
	do{
	
	
	

       ifstream plik1;
       ofstream plik2;
	
	
	cout<<"----MENU----"<<endl;
	cout<<"1.Wczytaj plik"<<endl;
	cout<<"2.Sortuj alfabetycznie"<<endl;
	cout<<"3.Sortuj od Z-A"<<endl;
	cout<<"4.Sortuj wedlug dlugosci"<<endl;
	cout<<"5.Sortuj wedlug wagi"<<endl;
	
	cout<<"Wybierz";

	cin>>wybor;
	
	switch(wybor){
		
		case 1:
			
			
	plik1.open("plik1.txt");
	
 while(!plik1.eof())
    {
     plik1>>x;
     cout<<x<<",";
     
	}
		break;
		
case 2:

string str = x;
 int len=str.length();

    qsort(str.c_str(),len,sizeof(str[0]),compare_str);
 break;	
		
	
	case 3:
		 std::string s("cake");

    std::sort(s.begin(), s.end());

    std::cout << s << std::endl;
		break;
	
}
}while(wybor!=0);
	return 0;
	
}

