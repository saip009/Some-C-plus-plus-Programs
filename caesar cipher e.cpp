// From plaintext to cipher text using caesar cipher

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	int len,key,i;
	char p[100000],c[10000];
	cout<<"Enter text: ";
	cin.getline(p,100000);
	len = strlen(p);
	cout<<"Enter key (-1 for random): ";
	cin>>key;
	if(key == -1){
		srand ( time(NULL) );
		key = rand() % 26;
	}
	for(i=0;i<len;i++){
		if(p[i]>=65 && p[i]<=90)			c[i] = ( (p[i] + key - 'A')%26 + 'A');
		else if(p[i]>=97 && p[i]<=122)		c[i] = ( (p[i] + key - 'a')%26 + 'a');
		else 								c[i] = p[i];
	}
	cout<<"\n\nCipher Text: \n"<<c<<endl<<"Key: "<<key;
	return 0;
}

