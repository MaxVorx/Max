#include<iostream>
#include<ctime>
using namespace std;
float*  PtrFloat(float* a);
void PtrDel(float* a);
template<typename T>
void Tempptr(T* a);
int* ArrNew(int* arr, int size);
int* ArrElement(int* arr, int size, int a);
int main() {
	//1.
	/*int* ptrint = new int;
	long* ptrlong = new long;
	double* ptrdouble = new double;
	bool* ptrbool = new bool;
	char* ptrchar = new char;
	delete ptrint;
	delete ptrdouble;
	delete ptrlong;
	delete ptrbool;
	delete ptrchar;*/

	
	//2.
	/*float* ptrfloat = new float;
	cout << PtrFloat(ptrfloat) << endl;
	delete ptrfloat;*/


	//3.
	/*float* ptrdel = new float;
	PtrDel(ptrdel);*/


	//5.
	srand(time(0));
	/*int size = 5;
	int* arrnew = new int[size];
	for (int i = 0; i < size; i++)
	{
		arrnew[i] = rand()% 100;
	}
	cout << ArrNew(arrnew, size) << endl;*/



	//6.
	int sizeel = 5;
	int a = 0;
	int* arrel = new int[sizeel];
	for (int i = 0; i < sizeel; i++)
	{
		arrel[i] = rand() % 100;
	}
	cin >> a;
	cout << ArrElement(arrel, sizeel, a) << endl;

	return 0; 
}
int* ArrElement(int* arr, int size, int a) {
	int* arr2 = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[size] = a;
	delete[] arr;
	return arr2 + size;
}


int* ArrNew(int* arr, int size) {
	int* arr2 = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr[i];
	}
	delete[] arr;
	return arr2;
}
template<typename T>
void Tempptr(T* a) {
	T* tempptr = new T(a);
}

void PtrDel(float* a) {
	delete a;
}


float*  PtrFloat(float* a) {
	return a;
}

