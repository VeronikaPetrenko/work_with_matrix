//������ ������������ ������� �������� n,���������� ����� ������������� �������� ������� ��������� ���� �������.
#include <iostream>
#include <cstdlib>
#include<math.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,i,j;
	cout<<"������� ������ �������:  ";
	cin>>n;
	cout<<endl;
	int **matrix=new int *[n];				//������ ���������� ������� �� ��������� ����� 
	for(i=0;i<n;i++)
	matrix[i]=new int [n];
	for(int i=0; i<n;i++)
		for( j=0;j<n;j++){
			matrix[i][j]=((rand()%10-5));}
	cout<<"���� �������: "<<endl;			//������� �������
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			if(matrix[i][j]>=0){
				cout<<" ";
			}
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	cout<<"������������� �������� �� ������� ���������: "<<endl;
	for( i=0; i<n;i++){						//�������� �� �������� ������� ��������� � ���� ������������� ��������  
		j=i;
		if(matrix[i][j]>0){
			cout<<matrix[i][j]<<" ";}
	}
}

