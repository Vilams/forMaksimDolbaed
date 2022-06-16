#include <iostream>
#include <string>
#include <cstdlib> //библиотека для рандома
#include <ctime>	
#include <cstring>
using namespace std;

void print(char arr[], int row){
	for (int i = 0; i < row; ++i)
	{
		cout<<arr[i];
	}
	cout<<endl;
}


int main()
{
	int flag=0;
	int a,b,num;
	b=0;
	string hhh;
	cin>>hhh;
	for(char c:hhh){
		a++;
	}
	cout<<a;
	char ggg[a];
	char ggg2[a];
	for (int i = 0; i < a; ++i)
	{
		ggg[i]=hhh[i];
		ggg2[i]=33;
	}
	//print(ggg2,a);
	//print(ggg,a);

while (true){
	ggg2[0]+=1;
	b=0;
	for (int i = 0; i < a; ++i)
	{
		if (ggg2[i]==ggg[i])
		{
			b++;
		}else if(b-1!=i){
			break;
		}
	}
	if (b==a)
	{
		break;
	}
	for (int i = a-1; i >= 0; --i)
	{
		if(ggg2[a-1]==126 && ggg2[0]==126){
			break;
		}
		else if (ggg2[i]==126 && flag==0){
			num=i;
			flag=1;
			
		}else if (flag==1 && ggg2[i]==126)
		{
			b++;
		}
		if (b==num+1){
			ggg2[num+1]+=1;
			flag=0;
			for (int j = 0; j < num; ++j)
			{
				ggg2[j]=31;

			}
		}
	}
	//print(ggg2,a);
	if(ggg2[a]==126 && ggg2[0]==126){
			break;
		}
}
/*srand(time(NULL));

while(true){
	b=0;
	for (int i = 0; i < a; ++i)
	{
		ggg2[i]=rand()%96+32;
	}
	//print(ggg2,a);
	for (int i = 0; i < a; ++i)
	{
		if (ggg2[i]==ggg[i])
		{
			b++;
		}else if(b-1!=i){
			break;
		}
	}
	if(b==a){
		break;
	}
}*/

//print(ggg,a);
//print(ggg2,a);
}