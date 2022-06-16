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
	int a,b,num,COUNT,COUNT1;
	b=0;
	
string hhh;
	cin>>hhh;
	for(char c:hhh){
		a++;
	}
	cout<<a<<endl;
	char ggg[a];
	char ggg2[a];
	for (int i = 0; i < a; ++i)
	{
		ggg[i]=hhh[i];
		ggg2[i]=31;
	}
	print(ggg2,a);
	print(ggg,a);

while (true){
	COUNT++;
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
	{ cout<<"b==a"<<endl;
		break;
		
	}
	for (int i = 0; i <a;++i)
	{
		
		if (ggg2[i]==126 && flag==0){
			num=i;
			flag=1;
			
		}else if (flag==1 && ggg2[i]!=126)
		{	
			flag=0;
			ggg2[i]+=1;
			for (int j = 0; j < i; ++j)
			{
				ggg2[j]=31;

			}
		}
		
	}
	//print(ggg2,a);
	
	
}
cout<<"schet"<<COUNT<<endl;
print(ggg,a);
print(ggg2,a);
srand(time(NULL));

while(true){
	COUNT1++;
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
}
cout<<"schet"<<COUNT1<<endl;
print(ggg,a);
print(ggg2,a);
	return 0;
}
