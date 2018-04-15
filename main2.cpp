//Дана матрица mxn,необходимо преобразовать её в одномерный массив в порядке следования столбцов матрицы.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,i,j;
	cout<<"Введите размер матрицы:  ";
	cin>>n>>m;
	cout<<endl;
	int **matrix=new int *[n];				//создаём матрицу из рандомных чисел 
	for(i=0;i<n;i++)
	matrix[i]=new int [m];
	for(int i=0; i<n;i++)
		for( j=0;j<m;j++){
			matrix[i][j]=((rand()%100));}
	cout<<"Ваша матрица: "<<endl;			//выводим матрицу
	for( i=0; i<n;i++){
		for( j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	int t=n*m;
	cout<<"Запись в новый одномерный массив: "<<endl;
	for( j=0; j<m;j++){						//создаём одномерный массив размером t=n*m и записываем в строчку 
		for( i=0;i<n;i++){					//по схеме первый столбец, за ним второй и т.д.
			int *arr = new int[t];
			arr[i] = matrix[i][j];                		 
			cout << arr[i] << " ";
		}
	}
}
