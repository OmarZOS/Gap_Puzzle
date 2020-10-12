#include <iostream>
#include<fstream>


using namespace std;



int main(){

int** M;
int n,in=9;



int k=1;
cin >> n;

M=new int*[n];

for(int i=0;i<n;i++){
	M[i]=new int[n];

	for (int j=0;j<n;j++)
		M[i][j]=0;
}
ifstream file("vars");

while(file>>in){
		if(in==0)
			break;				

	if(in>0){
/*
*/		cout<<in<<"   "<<(in)%(n)<<"   "<<(in)/(2*n)<<endl; 
		M[(in)%(n)][(in)/(2*n)]=1;
	}
}


for(int i=0;i<n;i++){
	for (int j=0;j<n;j++)
		{
				cout<<M[i][j]<<"  ";
		}
	cout<<endl;
}	














return 0;
}





















































