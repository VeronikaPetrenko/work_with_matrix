//Необходимо сформировать матрицу mxn из чесел от 0 до 999 рандомно: 
//1)вывести эту матрицу на экран 
//2)посчитать количество 2-х значных элемеетов 
//3)посчитать количество 3-х значных элементов 
//4)найти ср.арифмитическое 2-х значных эл-ов и 3-х значных эл-ов матрицы.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,i,j,kold,kolt,sd,st,su,sy;		//kold-количесвто 2-х значных ;kolt- количество 3-х значных;sd-ср.арифм.2-х значных;st-ср.арифм.3-х значных
	kold=0,kolt=0,su=0,sy=0;
	cout<<"Введите размер матрицы:  ";
	cin>>n>>m;
	cout<<endl;
	int **matrix=new int *[n];				//создаём матрицу из рандомных чисел 
	for(i=0;i<n;i++)
	matrix[i]=new int [m];
	for(int i=0; i<n;i++)
		for( j=0;j<m;j++){
			matrix[i][j]=((rand()%1000));}
	cout<<"Ваша матрица: "<<endl;			//выводим матрицу
	for( i=0; i<n;i++){
		for( j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	for(int i=0; i<n;i++){					//считаем количеству с помощью условии 
		for( j=0;j<m;j++){					//для 2-х значных >9 и <100
			if(matrix[i][j]>9&&matrix[i][j]<100){
				kold++;
				su=su+matrix[i][j];
				}
			if(matrix[i][j]>99){			//для 3-х значных >99
				kolt++;
				sy=sy+matrix[i][j];}
		}
	}
	sd=su/kold;
	st=sy/kolt;
	cout<<"Количесвто 2-х значных: "<<kold<<endl;
	cout<<"Количество 3-х значных: "<<kolt<<endl;
	cout<<"Ср.арифм. 2-х значных: "<<sd<<endl;
	cout<<"Ср.арифм. 3-х значных: "<<st<<endl;
}
