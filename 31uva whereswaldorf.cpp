#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main(){
	int t,m,n,k,i,j,l,l2,x,y,xi,yj,z,count,print,nl,nl1;
	nl=nl1=0;
	char word[55],ua,ub;
	cin>>t;
	while(t--){
		if(nl)
		cout<<endl;
		nl++;
		char a[55][55] = {0};
		cin>>m>>n;
		for(i=0;i<m;i++){
			cin>>a[i];
		//	strupr(a[i]);
		}
		cin>>k;
		while(k--){
			if(nl1)
			cout<<endl;
			nl1++;
			print=0;
			cin>>word;
			l=strlen(word);
			for(i=0;i<m;i++){
				for(j=0;j<n;j++){
					ua = toupper(a[i][j]);
					ub = toupper(word[0]);
					if( ua == ub ){
						for(x=-1;x<2;x++){
							for(y=-1;y<2;y++){
								l2=l;
								count=0;
								while(l2){
									z=l2-1;
									xi = (z*x) + i;
									yj = (z*y) + j;
									ua = toupper(a[xi][yj]);
									ub = toupper(word[z]);
									if( ua == ub ){
										count++;
										l2--;
									}
									else
									break;
								}
								if(count == l){
									cout<<++i<<" "<<++j;
									print=1;
									break;
								}
							}
						}
					/*	if(count == l){
							cout<<++i<<" "<<++j<<endl;
							print=1;
							break;
						}  */
					}
					if(print == 1)
					break;
				}
				if(print == 1)
				break;
			}
		}
	}
	return 0;
}


/*
1
8 11
abcDEFGhigg
hEbkWalDork
FtyAwaldORm
FtsimrLqsrc
byoArBeDeyv
Klcbqwikomk
strEBGadhrb
yUiqlxcnBjf
4
Waldorf
Bambi
Betty
Dagbert
*/

// Input: Number of test cases. MxN for matrix. The input matrix. Number of words to find. The words.
//1 8 11 abcDEFGhigg hEbkWalDork FtyAwaldORm FtsimrLqsrc byoArBeDeyv Klcbqwikomk strEBGadhrb yUiqlxcnBjf 4 Waldorf Bambi Betty Dagbert
