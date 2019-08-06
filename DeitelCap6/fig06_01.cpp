// Cria uma estrutura, inicializa seus membros e imprime a estrutura
#include <iostream>

using namespace std;

struct Time {		// definição da estrutua
	int hour;	// 0-23
	int minute;	// 0-59
	int second;	// 0-59
};

void printMilitary(const Time &);	// prototipo
void printStandard(const Time &);	// prototipo

int main()
{
	Time dinnerTime;		// variável do novo tipo Time

	// inicializa os membros com valores válidos
	dinnerTime.hour = 18;
	dinnerTime.minute = 30;
	dinnerTime.second = 0;
	
	cout << "O jantar será servido às ";
	printMilitary(dinnerTime);
	cout << " , hora militar,\nque é ";
	printStandard(dinnerTime);
	cout << " na hora padrão.\n";

	// inicializa os membros com valores inválidos
	dinnerTime.hour = 29;
	dinnerTime.minute = 73;

	cout << "\nHora com valores inválidos: ";
	printMilitary(dinnerTime);
	cout << endl;
	return 0;
}

// Imprime a hora no formato militar
void printMilitary(const Time &t)
{
	cout << (t.hour < 10 ? "0" : "") <<t.hour << ":"
	     << (t.minute < 10 ? "0": "") << t.minute;
}

// Imprime a hora no formato padrão
void printStandard(const Time &t)
{
	cout << ((t.hour == 0 || t.hour == 12) ? 12: t.hour % 12)
	     << ":" << (t.minute < 10 ? "0" : "") << t.minute
	     << ":" << (t.second < 10 ? "0" : "") << t.second
	     << (t.hour < 12 ? " da manhã" : " da tarde");
}
