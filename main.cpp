#include <iostream>

using namespace std;

void bubbleSort(string vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
        	
            if (vetor[j] > vetor[j + 1]) {
                string aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main() {
    string nomes[] = {"Maria", "Bruna", "Alberto", "Joao"};
    
    int tamanho = 4;
    
    bubbleSort(nomes, tamanho);

    cout << "Vetor ordenado:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << nomes[i] << " ";
    }
    cout << endl;
	system("pause");
    return 0;
}
