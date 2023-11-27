#include <iostream>


using namespace std;

int main()
{
	const int N = 4;
	int M[N][N];
	int M1[N][N];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			M[i][j] = 0;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			M[i][j] = rand() % 2;
		}
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			M[i][j] = M[j][i];
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << M[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\n";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			M1[i][j] = 0;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			M1[i][j] = rand() % 2;
		}
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			M1[i][j] = M1[j][i];
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << M1[i][j] << "\t";
		}
		cout << "\n";
	}
}
