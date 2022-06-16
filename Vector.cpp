#include <iostream>
#include <vector>	
using namespace std;

int main()
{

	int count;
	cout<<"Matrix size: ";
	cin>>count;
	int h,g;
	vector<vector<int>> Matrix;	

	for (int i = 0; i < count; ++i)
	{
		vector<int> temp;
		for (int j = 0; j < count; ++j)
		{
			cin>>h;
			temp.push_back(h);
		}
		Matrix.push_back(temp);
	}
	//Matrix[1][0]=100;



	
	for (int i = 0; i < count; ++i)
	{	
		swap(Matrix[i][i],Matrix[i][count-1-i]);
			
			
	}

for (int i = 0; i < count; ++i)
	{
		for (int j = 0; j < count; ++j)
		{
			cout<<Matrix[i][j]<<' ';
		}
		cout<<endl;
	}

	


	return 0;
}