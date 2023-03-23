#include <iostream>
#include "Queue.h"
//#include "Stack.h"
#include "List.h"
#include <conio.h>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
void RunStack();
void RunQueue();
void RunList();
void RunVector();
using namespace std;
int main()
{
	std::string userInput;

	std::cout << "Bienvenue! Veuillez choisir parmis les options suivantes: \n";
	std::cout << "\tPile\n\tFile\n\tListe\n\tVector\n";
	std::cin >> userInput;

	if (userInput == "Pile" || userInput == "pile") {
		RunStack();
	}
	else if (userInput == "File" || userInput == "file") {
		RunQueue();
	}
	else if (userInput == "Liste" || userInput == "liste") {
		RunList();
	}
	else if (userInput == "Vector" || userInput == "vector") {
		RunVector();
	}
	else {
		std::cout << "Desole, cette commande n'est pas supportee!\n";
		return 0;
	}
}

void RunStack() {
	std::string userInput;
	//Stack stack;
	std::stack<std::string> stack;
	std::cout << "Les items vont etre affiches en LIFO\n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";

	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit")
			break;

		/*	if (GetKeyState('q') & 0x8000*/
		stack.push(userInput);
	}

	std::cout << "\n******************\nVoici le resultat!\n******************\n";

	while (!stack.empty()) {
		std::cout << "\t" << stack.top() << "\n";
		stack.pop();
	}
}

void RunQueue() {
	std::string userInput;
	//Queue queue;
	queue<string>queue;
	std::cout << "Les items vont etre affiches en FIFO\n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";

	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit" || userInput == "exit")
			break;

		//queue.Add(userInput);
	}

	std::cout << "\n******************\nVoici le resultat!\n******************\n";

	while (!queue.empty()) {
		std::cout << "\t" << queue.front() << "\n";
	}
	queue.pop();
}

void RunList() {
	std::string userInput;
	list<string>list1;
	list<string>list2;
	//List list1, list2;

	std::cout << "Les items vont etre affiches en ordre alphabetique \n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";
#pragma warning(suppress : 92).
	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit")
			break;

		list1.push_back(userInput);//.Add(userInput);
		list2.push_back(userInput);//.Add(userInput);
	}

	std::cout << "\n******************\nVoici le resultat de debut!\n******************\n";

	while (!list1.empty()) {
		std::cout << list1.front();
		//std::cout << "\n";
		list1.pop_front();
	}

	std::cout << "\n******************\nVoici le resultat de la fin!\n******************\n";

	while (!list2.empty()) {
		std::cout << list2.back();
		if (list2.empty()) std::cout << std::endl;
		//std::cout << "\n";
		list2.pop_back();
	}
}

void RunVector() {
	std::string userInput;
	vector<string> vector;

	std::cout << "Les items vont etre affiches  \n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";
#pragma warning(suppress : 133).
	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit")
			break;
		vector.push_back(userInput);
		//vector.insert(vector.begin(), userInput);
	}
	sort(begin(vector), end(vector));
	std::cout << "\n******************\nVoici le resultat!\n******************\n";
	while (!vector.empty()) {
		std::cout << vector.front();
		//std::cout << "\n";
		vector.erase(vector.begin());
	}
}