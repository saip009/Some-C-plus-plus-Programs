//caesar cipher decrypter

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
	int len,key,i,option=3;
	char p[100000],c[10000],ch;
	cout<<"Enter text: ";
	cin.getline(c,100000);
	len = strlen(c);
//	strcpy(p,c);
	while(!(option == 1 || option == 2)){
		cout<<"\nDecrypt using\n1.Known Key\n2.Unknown Key\nChoice: ";
		cin>>option;
		if(option == 1){
			cout<<"Enter key: ";
			cin>>key;
			for(i=0;i<len;i++){
				ch = (((c[i]>='a')&&(c[i]<='z'))?('a'):('A'));
				int temp = c[i] - key - ch;
				if(temp<0)	temp += 26;
				int temp2 = temp%26 + 'a';
				char temp3 = temp2;
//				if(c[i]>=65 && c[i]<=90)			p[i] = ( (c[i] - key - 'A')%26 + 'A');
//				else if(c[i]>=97 && c[i]<=122)		p[i] = ( (c[i] - key - 'a')%26 + 'a');
				if(c[i]>=65 && c[i]<=90)			p[i] = ( temp2 );
				else if(c[i]>=97 && c[i]<=122)		p[i] = ( temp2 );
				else 								p[i] = c[i];
			}
			cout<<"\n\nPlain Text: \n"<<p<<endl<<"Key: "<<key;
		}
		else if(option == 2){
			option = 3;
			while(!(option == 1 || option == 2))
			cout<<"\nDecrypt using\n1.Brute-Force\n2.Frequency Distribution\nChoice: ";
			cin>>option;
			if(option == 1){
				
			}
			else if(option == 2){
				
			}
			else{
				cout<<"\nInvalid Option.\nSelect from 1 or 2.";
			}
		}
		else {
			cout<<"\nInvalid Option.\nSelect from 1 or 2.";
		}
	}
	
	return 0;
}

