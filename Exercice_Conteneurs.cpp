#include <iostream>
#include "Queue.h"
#include "Stack.cpp"
#include "List.h"
#include <conio.h>
void RunStack();
void RunQueue();
void RunList();

int main()
{
	std::string userInput;

	std::cout << "Bienvenue! Veuillez choisir parmis les options suivantes: \n";
	std::cout << "\tPile\n\tFile\n\tListe\n";
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
	else {
		std::cout << "Desole, cette commande n'est pas supportee!\n";
		return 0;
	}
}

void RunStack() {
	std::string userInput;
	Stack<std::string> stack;

	std::cout << "Les items vont etre affiches en LIFO\n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";

	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit")
			break;

		stack.Add(userInput);
	}

	std::cout << "\n******************\nVoici le resultat!\n******************\n";

	while (!stack.IsEmpty()) {
		std::cout << "\t" << stack.Remove() << "\n";
	}
}

void RunQueue() {
	std::string userInput;
	Queue queue;

	std::cout << "Les items vont etre affiches en FIFO\n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";

	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit" || userInput == "exit")
			break;

		queue.Add(userInput);
	}

	std::cout << "\n******************\nVoici le resultat!\n******************\n";

	while (!queue.IsEmpty()) {
		std::cout << "\t" << queue.Remove() << "\n";
	}
}

void RunList() {
	std::string userInput;
	List list1, list2;

	std::cout << "Les items vont etre affiches en ordre alphabetique \n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";
#pragma warning(suppress : 92).
	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit")
			break;

		list1.Add(userInput);
		list2.Add(userInput);
	}

	std::cout << "\n******************\nVoici le resultat de debut!\n******************\n";

	while (!list1.IsEmpty())
		std::cout << list1.RemoveFromStart();

	//std::cout << "\n";

	std::cout << "\n******************\nVoici le resultat de la fin!\n******************\n";

	while (!list2.IsEmpty())
		std::cout << list2.RemoveFromEnd();
	if (list2.IsEmpty()) std::cout << std::endl;

	//std::cout << "\n";
}