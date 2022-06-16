#include <iostream>
#include <string>
#include <cstdlib> //библиотека для рандома
#include <ctime>	
using namespace std;


int main()
{
int i,j,k;
char i1,j1,k1;
srand(time(NULL));
char jjj[3];
int hhh[3];
char ggg[3];
cin >> ggg;
for (int i =0 ; i<3 ;i++){
	hhh[i]=ggg[i];



	cout<<hhh[i]<<endl;;
}
 int count=178;	
for (i = 33; i < count; ++i)
for (j = 33; j < count; ++j)
for (k = 33; k < count; ++k)
{
	if (hhh[0]==i && hhh[1]==j && hhh[2]==k){
		jjj[0]=i;
		jjj[1]=j;
		jjj[2]=k;
		
		cout<<"nashel"<< endl;
		break;

	}
}
while(true){
	i=i1=rand()%178;
	j=j1=rand()%178;
	k=k1=rand()%178;
	if(hhh[0]==i && hhh[1]==j && hhh[2]==k){
		cout<<i1<<j1<<k1<<endl;
		break;
	}
}
for (int i = 0; i < 3; ++i)
{
	cout<<jjj[i];
}
}