#include<iostream>

using namespace std;

int main(){
	int m=1,n=1,i,j,count,a2[102][102],fields=0;
	
	while(1){
		char a[102][102]={0};
		fields++;
		cin>>m>>n;
		if(m==0 && n==0)
		break;
		for(i=1;i<(m+1);i++){
			for(j=1;j<(n+1);j++){
				cin>>a[i][j];
			}
		}
		for(i=1;i<(m+1);i++){
			for(j=1;j<(n+1);j++){
				count=0;
				if(a[i][j] == '*'){
					a2[i][j] = 999;
				}
				else{
					if(a[i-1][j-1] == '*')
					count++;
					if(a[i-1][j] == '*')
					count++;
					if(a[i-1][j+1] == '*')
					count++;
					if(a[i][j-1] == '*')
					count++;
					if(a[i][j+1] == '*')
					count++;
					if(a[i+1][j-1] == '*')
					count++;
					if(a[i+1][j] == '*')
					count++;
					if(a[i+1][j+1] == '*')
					count++;
					a2[i][j] = count;
				}
			}
		}
		if(fields != 1)
		cout<<endl;
		cout<<"Field #"<<fields<<":\n";
		for(i=1;i<(m+1);i++){
			for(j=1;j<(n+1);j++){
				if(a2[i][j] == 999)
				cout<<"*";
				else
				cout<<a2[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}


// Input: NxM for dimensions. '.' for safe, '*' for a mine.
//4 4 *... .*.. ..*. ...* 4 4 **** **** **** **** 4 4 .... .... .... .... 4 4 *.*. .*.* *.*. .*.* 6 6 ...... ****** ...... ****** ...... ****** 1 1 . 1 1 * 1 7 .*.*.*. 7 1 * . * . * . * 0 0
