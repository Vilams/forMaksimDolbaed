#include <iostream>
#include <string>
#include <cstdlib> //библиотека для рандома
#include <ctime>	
using namespace std;


int main()
{
int g,g2;
srand(time(NULL));
int sizes= 100;
int arr[sizes];
int arr2[100] {0};
for (int i = 0; i < sizes; ++i)
{
	arr[i]=rand()%100;
}
for (int i = 0; i < sizes; ++i)
{
	for (int j = 0; j < 100; ++j)
	{
		if (arr[i]==j){

			arr2[j]+=1;
		}
	}
	
}
for (int i = 0; i < 100; ++i)
{	
	g+=arr2[i]/2;
	g2+=arr2[i]/3;
	cout<<i<<' '<<arr2[i]/2<<' '<<arr2[i]/3<<endl;		
}
cout<<"tripl"<<g2<<endl;
cout<<"double"<< g;
return 0;
}	