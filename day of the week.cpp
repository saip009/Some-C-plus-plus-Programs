// day of the week for jan 1 from 1900 to 2015

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

void dayOfYear (int d,int m,int y){
	int day,t[] = {0,3,2,5,0,3,5,1,4,6,2,4};
	y -= m<3;
	day = (y + y/4 + y/400 - y/100 + t[m-1] + d )%7;
	cout<<"1st Jan "<<y+1<<" was on ";
	switch(day){
		case 0 : cout<<"Sunday\n";			break;
		case 1 : cout<<"Monday\n";			break;
		case 2 : cout<<"Tueday\n";			break;
		case 3 : cout<<"Wednesday\n";		break;
		case 4 : cout<<"Thursday\n";		break;
		case 5 : cout<<"Friday\n";			break;
		case 6 : cout<<"Saturday\n";		break;
	}
}

int main(){
	int y;
	for(y=1900;y<2016;y++)	dayOfYear(1,1,y);
	return 0;
}

