#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>
using namespace std;



void copy (int arr[][6],int arr2[][6], int row)
{
    for (int i = 0; i < row; i++){
    	for (int j = 0; j < row; j++){
    		
    		arr2[i][j] = arr[i][j];
		}
	}
}
int main()
{
	const int a = 6;

	int x,y;
	int j,i,b,fg;
	float T = 0.5;
	double W,P;
	int sum = 0;
	int sum2 = 0;
	int choose =0;
	int delta;
	srand(time(NULL));
	
	int matrix[a][a];	
	int matrix2[a][a];
	int glav[a][a];
	cin>>b;
	for (i=0; i<a; i++){
		for (j=0; j<a; j++){
			choose= rand()%2;
			if (choose==0){
				choose= -1;
			}else choose= 1;			
			matrix[i][j]=choose;
			matrix2[i][j]=choose;
		}
	}

	for (i=0; i<a; i++){
			for (j=0; j<a; j++){
			cout<<matrix[i][j]<<'\t';
		}
		cout<<'\n';
	}	
	copy(matrix,glav,a);

	for (fg=0; fg<b; fg++){
		x= rand()%a;
		y= rand()%a;
		matrix2[x][y]*= -1;
		
			for (i=0; i<a; i++){
				for (j=0; j<a; j++){
					if (j==a-1 && i!=a-1){
						sum+=matrix[i][j]*matrix[i][0]+matrix[i][j]*matrix[i+1][j];
						sum2+=matrix2[i][j]*matrix2[i][0]+matrix2[i][j]*matrix2[i+1][j];
					}else if (i==a-1 && j!=a-1){
						sum+=matrix[i][j]*matrix[0][j]+matrix[i][j]*matrix[i][j+1];
						sum2+=matrix2[i][j]*matrix2[0][j]+matrix2[i][j]*matrix2[i][j+1];
					}else if (i==a-1 && j==a-1){
						sum+=matrix[i][j]*matrix[i][0]+matrix[i][j]*matrix[0][j];
						sum2+=matrix2[i][j]*matrix2[i][0]+matrix2[i][j]*matrix2[0][j];
					}else {
						sum+=matrix[i][j]*matrix[i][j+1]+matrix[i][j]*matrix[i+1][j];
						sum2+=matrix2[i][j]*matrix2[i][j+1]+matrix2[i][j]*matrix2[i+1][j];
					}
				}	
			}

		delta = -1*(sum2-sum); //#рвзность суии матриц
	        
	    if (delta<=0){    //#заменяет Е старую на е новую 
	    	copy(matrix2,matrix,a);
	        copy(matrix,glav,a);
	       
	    }else if (delta>0){// # мат. дейсвия 
	        W=exp(-delta/T);
	         double rnd= rand()%100;
	       	 P= 1 / (rnd + 1);

	        if (W>=P){   //# Е остаеться без изменения, main сохраняет значение E
	        	copy(matrix,glav,a);
	            
	        }else if (W<0){  // # Е принимает значеине самой первой матрицы
	        	copy(glav,matrix,a); 
	        }
	    }
	

	
	
	}
cout<<'\n';
for (i=0; i<a; i++){
			for (j=0; j<a; j++){
			cout<<matrix[i][j]<<'\t';
		}
		cout<<'\n';
	}	









			return 0;

}
