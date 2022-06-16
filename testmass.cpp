#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>	
#include <fstream>
using namespace std;

int sum_sun(int arr_ma[][4], int row3){
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
int sum_matrix (int arr_mat[][4], int row2){
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
	
	//fout<<"sam1"<<' '<<"sum2"<<" "<<"matrix"<<endl;
	bool flag=true;
	const int a = 4;
	int variant[4][4];
	//int couthy;
	  
int count=16;
int couthy,yyy;
int fff;
int matrix1[4] {0};
	
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
						fff=couthy%2;
						couthy/=2;
						if (fff==1) {
							variant[i1][3-bbb]=fff;
						}else{
							variant[i1][3-bbb]= -1 ;
						}

						
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
cout<<yyy;
return 0;
}







