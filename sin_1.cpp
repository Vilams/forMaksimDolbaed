#include <iostream>
#include <cmath>	
#include <fstream>

#include <fstream>
using namespace std;


int main(){
int variant[4][4];
int couthy;
for (int i = 0; i < 4; ++i){
	couthy = i;
	for (int j = 0; j < 4; ++j)
	{
		variant[i][3-j]=couthy%2;
		couthy=couthy/2;
		cout<<variant[i][j];
	}
}
for (int i = 0; i < 4; ++i)
{
	for (int j = 0; j < 4; ++j)
	{
		cout<<variant[i][j];
	}
	cout<<endl;
}
return 0;
}


