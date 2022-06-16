#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>	
#include <fstream>
using namespace std;

int sum_sun(int** arr_ma, int row3){
int sum_alll = 0;
	for (int i = 0; i < row3; ++i)
	{
		for (int j = 0; j < row3; ++j)
		{
			sum_alll += arr_ma[i][j];
		}
	}
	return sum_alll;

}
int sum_matrix (int** arr_mat, int row2){
	int sum_all = 0;
	for (int i=0; i<row2; i++){
		for (int j=0; j<row2; j++){
			if (j==row2-1 && i!=row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[i][0]+arr_mat[i][j]*arr_mat[i+1][j];
				
			}else if (i==row2-1 && j!=row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[0][j]+arr_mat[i][j]*arr_mat[i][j+1];
				
			}else if (i==row2-1 && j==row2-1){
				sum_all+=arr_mat[i][j]*arr_mat[i][0]+arr_mat[i][j]*arr_mat[0][j];
				
			}else {
				sum_all+=arr_mat[i][j]*arr_mat[i][j+1]+arr_mat[i][j]*arr_mat[i+1][j];
				
			}
		}	
	}
	return sum_all;
}

void print(int arr[][4], int row){
	for (int i=0; i<row; i++){
		for (int j=0; j<row; j++) {
			cout<<arr[i][j]<<'\t';
		}
		cout<<'\n';
	}
	cout<<'\n';
}



int main(){
	ofstream fout;
	ofstream f;
	fout.open("matrix_summ.txt ");
	f.open("b.txt");
	int flag=0;
	//fout<<"sam1"<<' '<<"sum2"<<" "<<"matrix"<<endl;
	int a, num,ggg;
	cin>>a;
	int variant[a][a]; 
	//int couthy;
	  
int count=pow(2,a);
int couthy,yyy;
int matrix1[a] {0};
	
int  **arr = new int* [a];
for (int i = 0; i < a; ++i)
{
	arr[i]=new int [i];
}
while(true){
	ggg=0;
	for (int i = 0; i <a ; ++i)
	{
		if (matrix1[i]==(count-1))
		{
			ggg++;
		}else{break;}

	}
	if(ggg==a){
		break;
	}
	matrix1[0]++;
	for (int i = 0; i <a;++i)
	{
		
		if (matrix1[i]==(count) && flag==0){
			num=i;
			flag=1;
			
		}else if (flag==1 && matrix1[i]!=count)
		{	
			flag=0;
			matrix1[i]+=1;
			for (int j = 0; j < i; ++j)
			{
				matrix1[j]=0;

			}
		}
		
	}
	


	for (int i1 = 0; i1 < a; ++i1)
				{	
					couthy=matrix1[i1];
					for (int bbb = 0; bbb < a; ++bbb)
					{
						arr[i1][3-bbb]=couthy%2;
						//f<<couthy%2;
						couthy/=2;
					}//f<<endl;
				}
				f<<sum_sun(arr,a)<<' '<<sum_matrix(arr,a)<<endl;
				for (int i1 = 0; i1 < 4; ++i1)
				{
					for (int i2 = 0; i2 < 4; ++i2)
					{
						f<<arr[i1][i2];
					}f<<endl;
				}f<<endl;
				//fout<<endl;
				yyy++;


}
/*
	for (int i = 0; i < count; ++i){
		matrix1[3]=i;
		for (int j = 0;j < count; ++j){
			matrix1[2]=j;
		for (int k = 0; k < count; ++k){
			matrix1[1]=k;
			for (int l = 0; l < count; ++l){
				matrix1[0]=l;

				for (int i1 = 0; i1 < 4; ++i1)
				{	

					//fout<<matrix1[i1]<<" ";
					couthy=matrix1[i1];
					for (int bbb = 0; bbb < 4; ++bbb)
					{
						variant[i1][3-bbb]=couthy%2;
						//f<<couthy%2;
						couthy/=2;
					}//f<<endl;
				}
				f<<sum_sun(variant,4)<<' '<<sum_matrix(variant,4)<<endl;
				for (int i1 = 0; i1 < 4; ++i1)
				{
					for (int i2 = 0; i2 < 4; ++i2)
					{
						f<<variant[i1][i2];
					}f<<endl;
				}f<<endl;
				//fout<<endl;
				yyy++;


				
			
		}
		
		}
	}
	
}
cout<<yyy;*/
return 0;
}







