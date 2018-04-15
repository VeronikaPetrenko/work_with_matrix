//ƒано две матрицы размер n заполненные рандомно,необходимо сформировать 3-ю матрицу такого же размера,
//в €чейке которой записать большие элементы из соответствующих €чеек двух других матриц.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,i,j;
	cout<<"¬ведите размер матрицы:  ";
	cin>>n;
	if(n<=0){								//защита от дурака
		cout<<"ќшибка!"<<endl;
		system("pause");
		return 0;
	}
	cout<<endl;
	int **arr1=new int *[n];				//создаЄм 1 квадратную матрицу из рандомных чисел 
	for(i=0;i<n;i++)
	arr1[i]=new int [n];
	for(int i=0; i<n;i++){
		for( j=0;j<n;j++){
			arr1[i][j]=((rand()%10-5));}}
	cout<<endl;
	cout<<"ѕерва€ матрица: "<<endl;			//выводим 1 матрицу
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			cout<<arr1[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	int **arr2=new int *[n];				//создаЄм 2 квадратную матрицу из рандомных чисел 
	for(i=0;i<n;i++)
	arr2[i]=new int [n];
	for(int i=0; i<n;i++){
		for( j=0;j<n;j++){
			arr2[i][j]=((rand()%20-10));}}
	cout<<"¬тора€ матрица: "<<endl;			//выводим 2 матрицу
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			cout<<arr2[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	int **arr3=new int *[n];				//создаЄм 3 квадратную матрицу из больших элементов двух других
	for(i=0;i<n;i++)
	arr3[i]=new int [n];
	for(int i=0; i<n;i++){
		for( j=0;j<n;j++){
			if(arr1[i][j]>arr2[i][j]){
				arr3[i][j]=arr1[i][j];
			}
			else{
				arr3[i][j]=arr2[i][j];
			}
	}}
	cout<<"“реть€ матрица: "<<endl;			//вводим 3 матрицу созданную из больших элементов двух других
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			cout<<arr3[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
}
