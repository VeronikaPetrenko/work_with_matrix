//���������� ������������ ������� mxn �� ����� �� 0 �� 999 ��������: 
//1)������� ��� ������� �� ����� 
//2)��������� ���������� 2-� ������� ��������� 
//3)��������� ���������� 3-� ������� ��������� 
//4)����� ��.�������������� 2-� ������� ��-�� � 3-� ������� ��-�� �������.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,m,i,j,kold,kolt;					//kold-���������� 2-� ������� ;kolt- ���������� 3-� �������;
	kold=0,kolt=0;
	cout<<"������� ������ �������:  ";
	cin>>n>>m;
	cout<<endl;
	int **matrix=new int *[n];				//������ ������� �� ��������� ����� 
	for(i=0;i<n;i++)
	matrix[i]=new int [m];
	for(int i=0; i<n;i++)
		for( j=0;j<m;j++){
			matrix[i][j]=((rand()%1000));}
	cout<<"���� �������: "<<endl;			//������� �������
	for( i=0; i<n;i++){
		for( j=0;j<m;j++){
			cout<<matrix[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	for(int i=0; i<n;i++){					//������� ���������� � ������� ������� 
		for( j=0;j<m;j++){					//��� 2-� ������� >9 � <100
			if(matrix[i][j]>9&&matrix[i][j]<100){
				kold++;}
			if(matrix[i][j]>99){			//��� 3-� ������� >99
				kolt++;}
		}
	}
	cout<<"���������� 2-� �������: "<<kold<<endl;
	cout<<"���������� 3-� �������: "<<kolt;
}
