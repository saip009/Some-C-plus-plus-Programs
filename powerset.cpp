//subsets of a set of numbers

#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;


int main(){
	int n,i,a[1000],c,j,tot;
	cout<<"Enter the number of elements: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)	cin>>a[i];
	tot = 1<<n;
	cout<<"\nTotal number of subsets are: "<<tot;
	cout<<"\n\nSubsets are: \n";
	for(i=0;i<tot;i++){
		cout<<"Subset "<<i+1<<": ";
		for(j=0;j<n;j++){
			c = 1<<j;
			if(c & i)	cout<<a[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

