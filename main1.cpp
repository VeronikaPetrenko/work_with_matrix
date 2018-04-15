//«адана произвольна€ матрица размером n,необходимо найти положительные элементы главной диагонали этой матрицы.
#include <iostream>
#include <cstdlib>
#include<math.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,i,j;
	cout<<"¬ведите размер матрицы:  ";
	cin>>n;
	cout<<endl;
	int **matrix=new int *[n];				//создаЄм квадратную матрицу из рандомных чисел 
	for(i=0;i<n;i++)
	matrix[i]=new int [n];
	for(int i=0; i<n;i++)
		for( j=0;j<n;j++){
			matrix[i][j]=((rand()%10-5));}
	cout<<"¬аша матрица: "<<endl;			//выводим матрицу
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			if(matrix[i][j]>=0){
				cout<<" ";
			}
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	cout<<"ѕоложительные элементы на главной диагонали: "<<endl;
	for( i=0; i<n;i++){						//проходим по индексам главной диагонали и ищем положительный элементы  
		j=i;
		if(matrix[i][j]>0){
			cout<<matrix[i][j]<<" ";}
	}
}

