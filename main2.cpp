//���� ������� mxn,���������� ������������� � � ���������� ������ � ������� ���������� �������� �������.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,i,j;
	cout<<"������� ������ �������:  ";
	cin>>n>>m;
	cout<<endl;
	int **matrix=new int *[n];				//������ ������� �� ��������� ����� 
	for(i=0;i<n;i++)
	matrix[i]=new int [m];
	for(int i=0; i<n;i++)
		for( j=0;j<m;j++){
			matrix[i][j]=((rand()%100));}
	cout<<"���� �������: "<<endl;			//������� �������
	for( i=0; i<n;i++){
		for( j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	int t=n*m;
	cout<<"������ � ����� ���������� ������: "<<endl;
	for( j=0; j<m;j++){						//������ ���������� ������ �������� t=n*m � ���������� � ������� 
		for( i=0;i<n;i++){					//�� ����� ������ �������, �� ��� ������ � �.�.
			int *arr = new int[t];
			arr[i] = matrix[i][j];                		 
			cout << arr[i] << " ";
		}
	}
}
