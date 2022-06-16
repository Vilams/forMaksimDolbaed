#include <iostream>
#include <vector>	
using namespace std;

int main()
{
 cout<<"Matrix size: ";
 	int count;
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

int j=0;
	for (int i = 0; i < count; ++i)
	{	
		for (int k = 0; k < count; ++k)
		{
			/* code */
		
		
			h*=Matrix[i][j];
			j++
		}
	}

	return 0;
}