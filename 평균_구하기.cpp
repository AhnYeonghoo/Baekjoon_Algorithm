#include <iostream>

using namespace std;

int main()
{
	int N;
	int A[1000];
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	long sum = 0, max = 0;
	
	for (int i = 0; i < N; i++) {
		if (A[i] > max) {
			max = A[i];
		}
		sum = sum + A[i]; // ÃÑÁ¡ °è»ê
	}
	
	double result = sum * 100 / max / N;
	cout << result << endl;

	return 0;
	
	
}