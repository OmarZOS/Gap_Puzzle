#include<iostream>
using namespace std;






/* Notes: --------------------- 
//26/09/2020 : each cell should have 2n-1 variables, find the pattern someday..
1 for filling boolean , n-1 for vertical combinations, n-1 for horizontal combinations.


// 12/10/2020 : After I have discovered many things about np-completeness using graph theory..
	I made a model in which, every I will only have 64*2 variables for N=8;
	now, each cell will have only 2n variables
	I have 











**By Zaidi Omar.. solved in 12/10/2020
-----------------------------*/




int main() {

	int n;
	cin >>n;
	cout<<"p cnf "<<n*n*2<<" h"<<endl;
	
	//Varriable part
	
	for(int i=1;i<=n*n*2;i++){
		cout << i<<" ";
		if(i%n==0)
			cout<<" 0\n";
	}
	
	//now for the constraints.. no neighbouring cells
	
	for(int i=1;i<=n*n*2;i++){
		for(int j=-1;j<2;j++){
			if(i+j<=2*n*n&&i+j>0)
				if(j!=0)	// a cell shouldn't have a problem with itself..
					cout<<"-"<<i<<" -"<<i+j<<" 0\n";
			if(i+2*n+j<=2*n*n&&i+j+2*n>0)
				cout<<"-"<<i<<" -"<<i+j+2*n<<" 0\n";
			if(i-2*n+j<=2*n*n&&i+j-2*n>0)
				cout<<"-"<<i<<" -"<<i+j-2*n<<" 0\n";
			if(i+n+j<=2*n*n&&i+j+n>0)
				cout<<"-"<<i<<" -"<<i+j+n<<" 0\n";
			if(i-n+j<=2*n*n&&i+j-n>0)
				cout<<"-"<<i<<" -"<<i+j-n<<" 0\n";
			if(i+3*n+j<=2*n*n&&i+j+3*n>0)
				cout<<"-"<<i<<" -"<<i+j+3*n<<" 0\n";
			if(i-3*n+j<=2*n*n&&i+j-3*n>0)
				cout<<"-"<<i<<" -"<<i+j-3*n<<" 0\n";
			
			
			

		}
	}
	
	
	
	
	
	
	
	
	






	return 0;
}



















