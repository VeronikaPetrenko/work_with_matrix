//���� ��� ������� ������ n ����������� ��������,���������� ������������ 3-� ������� ������ �� �������,
//� ������ ������� �������� ������� �������� �� ��������������� ����� ���� ������ ������.
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	setlocale(LC_ALL,"Russian");
	int n,i,j;
	cout<<"������� ������ �������:  ";
	cin>>n;
	if(n<=0){								//������ �� ������
		cout<<"������!"<<endl;
		system("pause");
		return 0;
	}
	cout<<endl;
	int **arr1=new int *[n];				//������ 1 ���������� ������� �� ��������� ����� 
	for(i=0;i<n;i++)
	arr1[i]=new int [n];
	for(int i=0; i<n;i++){
		for( j=0;j<n;j++){
			arr1[i][j]=((rand()%10-5));}}
	cout<<endl;
	cout<<"������ �������: "<<endl;			//������� 1 �������
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			cout<<arr1[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	int **arr2=new int *[n];				//������ 2 ���������� ������� �� ��������� ����� 
	for(i=0;i<n;i++)
	arr2[i]=new int [n];
	for(int i=0; i<n;i++){
		for( j=0;j<n;j++){
			arr2[i][j]=((rand()%20-10));}}
	cout<<"������ �������: "<<endl;			//������� 2 �������
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			cout<<arr2[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
	int **arr3=new int *[n];				//������ 3 ���������� ������� �� ������� ��������� ���� ������
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
	cout<<"������ �������: "<<endl;			//������ 3 ������� ��������� �� ������� ��������� ���� ������
	for( i=0; i<n;i++){
		for( j=0;j<n;j++){
			cout<<arr3[i][j]<<" ";}
		cout<<endl;}
	cout<<endl;
}
