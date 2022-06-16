/*#include <iostream>
	
using namespace std;

int f(int *arr, int N){


}

int main()
{	int temp;
	int b=100;
	int a=0;
	int *arrt = new int [b] ;
	while (a<5){
		a++;
	cin>>temp;
 	arrt[a]=temp;
	}
 for (int i = 0; i < 5; ++i)
 {
 	cout<<arrt[i];
 }
 
return 0;
}	*/

#include <iostream>
// в заголовочном файле <ctime> содержится прототип функции time()
#include <ctime>
// в заголовочном файле <iomanip> содержится прототип функции setprecision()
#include <iomanip>
using namespace std;
 
int main(int argc, char* argv[])
{
    srand(time(0)); // генерация случайных чисел
    float *ptrarray = new float [10]; // создание динамического массива вещественных чисел на десять элементов
        for (int count = 0; count < 10; count++)
            ptrarray[count] = (rand() % 10 + 1) / float((rand() % 10 + 1)); //заполнение массива случайными числами с масштабированием от 1 до 10
        cout << "array = ";
        for (int count = 0; count < 10; count++)
            cout << setprecision(2) << ptrarray[count] << "    ";
        delete [] ptrarray; // высвобождение памяти
        cout << endl;
    system("pause");
    return 0;
}