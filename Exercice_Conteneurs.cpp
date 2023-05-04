#include <iostream>
#include "Queue.h"
#include "Stack.cpp"
#include "List.h"
#include <conio.h>
#include "objet.h"
#include <sstream>
#include <algorithm>
#include <search.h>
int main();
void RunStack();
void RunQueue();
void RunList();
void RunVec();

int main()
{
	std::string userInput;

	std::cout << "Bienvenue! Veuillez choisir parmis les options suivantes: \n";
	std::cout << "\tPile\n\tFile\n\tListe\n\tVecteur\n";
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
	else if (userInput == "vecteur" || userInput == "Vecteur") {
		RunVec();
	}
	else {
		std::cout << "Desole, cette commande n'est pas supportee!\n";
		return 0;
	}
}

void RunStack() {
	std::string userInput;
	Stack<int> stack;
	Stack<objet> stack1;
	objet obj;
	std::string str = obj.display();

	//objet obj(str);

	stack1.Add(obj);
	std::cout << stack1.Remove().display() << std::endl;
	std::cout << "Les items vont etre affiches en LIFO\n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";

	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit")
			break;

		//stack.Add(std::stoi(userInput));
		stack += std::stoi(userInput);
		std::string str = "test";
		std::string str1 = "allo";
		objet obj(str);
		objet obj1(str1);

		;

		//objet obj;
		//obj = objet(obj.display());
		//stack1.Add(obj);
		stack1 += obj;
		bool i = obj1 == obj;

		//obj == str;
	}

	//print display

	std::cout << "\n******************\nVoici le resultat!\n******************\n";

	while (!stack.IsEmpty()) {
		std::cout << "\t" << --stack << "\n";

		std::cout << "\t" << (--stack1).display() << "\n";
	}
}

void RunQueue() {
	std::string userInput;
	Queue queue;
	queue.Add("a");
	queue.Add("b");
	queue.Add("c");
	queue.Add("d");
	std::cout << "Les items vont etre affiches en FIFO\n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";

	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit" || userInput == "exit")
			queue += userInput;

		break;
	}

	// search queue for userinput

	int index = queue.Find(userInput);
	if (index != -1) {
		std::cout << "L'element '" << userInput << "' a ete trouve a l'index " << index << std::endl;
	}
	else {
		std::cout << "L'element '" << userInput << "' n'a pas ete trouve dans la queue." << std::endl;
	}

	std::cout << "\n******************\nVoici le resultat!\n******************\n";

	while (!queue.IsEmpty()) {
		std::cout << "\t" << --queue << "\n";
	}
}

void RunVec() {
	std::cout << "Les items vont etre affiches en ordre alphabetique \n";
	std::cout << "Voici les commandes possibles: \n";
	std::cout << "\t[item a ajouter]\n";
	std::cout << "\tExit\n";

	std::vector<objet> objets = { objet("B"), objet("A"), objet("C") };

	std::string userInput;
	while (true) {
		std::cin >> userInput;
		if (userInput == "Exit" || userInput == "exit")
			break;
		objets.push_back(objet(userInput));
	}

	std::sort(objets.begin(), objets.end());
	for (int i = 0; i < objets.size(); i++) {
		bool ii = objets[i] == objets[i];

		// use of < overloaded operator
		bool iii = objets[i] < objets[1];

		std::cout << objets[i].display() << " " << ii << " " << iii << std::endl;
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

		list1 += userInput;
		list2 += userInput;
	}

	std::cout << "\n******************\nVoici le resultat de debut!\n******************\n";

	while (!list1.IsEmpty())
		std::cout << --list1;

	//std::cout << "\n";

	std::cout << "\n******************\nVoici le resultat de la fin!\n******************\n";

	while (!list2.IsEmpty())
		std::cout << list2.RemoveFromEnd();
	if (list2.IsEmpty()) std::cout << std::endl;

	//std::cout << "\n";
}