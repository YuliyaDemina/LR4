#include <iostream>
using namespace std;
extern "C" float* SumR(int, float*);
int main(int argc, char** argv)
{
	int n = 11;//число элементов массива
	float* x = nullptr;//массив иксов
	double eps = -0.1;
	x = new float[n];
	x[0] = 0;
	for (int i = 0; i < n; i++) {
		cout << "x[" << i << "] = ";
		eps += 0.1;
		x[i] = x[0] + eps;//получаем иксы
		cout << x[i]<<'\n';
	}
	float* R = nullptr;
	R = SumR(n, x);//получаем из ассемблера результирующий массив

	std::cout << "\nResult R:\n";
	for (int i = 0; i < n; i++) {
		cout << "R[" << i << "] = " << R[i] << std::endl;//вывод на экран
	}
	return 0;


	/*int n = 11;
	//int a = 0.1;
	float x[11] = { 0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1 };
	float *R =nullptr;
	R = SumR(n,x);
	cout << "\nResult R:\n";
	for (int i = 0; i <= n; i=i+0.1) {
		cout << "R[" << i << "] = " << R[i] << std::endl;//вывод на экран
	}
	return 0;
	*/
}
