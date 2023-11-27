#include <iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
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
	cout << "\n";

	cout << "Выберите какую оперцию вы хотите выполнить: " << "\n" << "1 - Операцию объединения матриц" << "\n" << "2 - операцию пересечения матриц";
	cout << "\n" << "3 - операцию кольцевой суммы" << "\n";

	int vibor;
	cin >> vibor;
	
	if (vibor == 1) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (M[i][j] + M1[i][j] != 2) {
					M[i][j] = M[i][j] + M1[i][j];
				}
			}
		}	
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << M[i][j] << "\t";
			}
			cout << "\n";
		}
	}
	if (vibor == 2) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if ((M[i][j] == 1) && (M1[i][j] == 1)) {
					M[i][j] = 1;
				}
				else {
					M[i][j] = 0;
				}
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << M[i][j] << "\t";
			}
			cout << "\n";
		}
	}
	if (vibor == 3) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (M[i][j] != M1[i][j]) {
					M[i][j] = 1;
				}
				else {
					M[i][j] = 0;
				}
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cout << M[i][j] << "\t";
			}
			cout << "\n";
		}
	}
}
