#include <iostream>
#include <cstdlib> //библиотека для рандома
#include <ctime>   //тоже для рандома
#include <cmath>
using namespace std;



int main()
{
	const int a = 6;

	int x,y;
	int j,i,b,fg,chet;
	float T = 0.5;
	double W,P;
	int sum = 0;
	int sum2 = 0;
	int choose =0;
	int delta;
	srand(time(NULL));
	chet=0;
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
	for (int i = 0; i < a; i++){
    	for (int j = 0; j < a; j++){
    		
    		glav[i][j]=matrix[i][j];
		}
	}

	//copy(matrix,glav,a);

	for (fg=0; fg<b; fg++){
		x= rand()%a;
		y= rand()%a;
		sum=0;
		sum2=0;
		matrix2[x][y]= matrix2[x][y]* (-1) ;
		chet++;
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
		//cout<<sum<<' '<<sum2<<endl;

		delta = sum2-sum; //#рвзность суии матриц
	     //cout<<delta<<endl; 
	    if (delta<=0){    //#заменяет Е старую на е новую 
	    	for (int i = 0; i < a; i++){
    			for (int j = 0; j < a; j++){
    		
    				matrix[i][j]=matrix2[i][j];
    				glav[i][j]=matrix2[i][j];

					}	
			}
		
	    	//copy(matrix2,matrix,a);
	        //copy(matrix,glav,a);
	       
	    }else{  // # мат. дейсвия 
	        W=exp(-delta/T);
	        double rnd= rand()%10000000;
	       	P= 1 / (rnd + 1);
	     
	        if (W>=P){   //# Е остаеться без изменения, main сохраняет значение E
	        	for (int i = 0; i < a; i++){
    				for (int j = 0; j < a; j++){
    		
    					//matrix[i][j]=matrix2[i][j];
    					glav[i][j]=matrix[i][j];

					}
				}
	        	//copy(matrix,glav,a);
	            
	        }else if (W<0){  // # Е принимает значеине самой первой матрицы
	        	for (int i = 0; i < a; i++){
    				for (int j = 0; j < a; j++){
    		
			    		//matrix[i][j]=matrix2[i][j];
			    		matrix[i][j]=glav[i][j];

					}
				}
	        	//copy(glav,matrix,a); 
	        }
	    
		


	
	
		}
	}
	cout<<chet<<'\n';
	for (i=0; i<a; i++){
		for (j=0; j<a; j++) {
			cout<<matrix[i][j]<<'\t';
		}
		cout<<'\n';
	}	

}









