//But : Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une
//automobile louée.
//Auteur : Frédéric Charron
//Date : 2020-09-15

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");	//Accents

	int jours;		//Définir les Variables

	int km;


	std::cout << "Veuillez entrer la durée du voyage (jours) : ";			//Demander le nombre de jours

	std::cin >> jours;

	std::cout << "Veuillez entrer le kilométrage parcouru : ";

	std::cin >> km;

	if (km <= 0 || jours <= 0)							//Si l'utilisateur entre un information invalide, alors le programme arrête ici
	{
			std::cout << "nombre de jours ou/et kilomètres invalides" << std::endl;
	}
		

	
	
	else
	{
		if (km > 250 * jours)			//Si l'utilisateur à fait plus de 250 km/jour, alors le programme prend en compte les kilomètres en extra et envoie le message du total
		{
			std::cout << "Le montant total sera de : " << (jours * 45) + ((km - 250) * 0.05) + ((km * 0.076) * 1.25) << "$";		//  0.076 litres/km

		}
		else
		{
			std::cout << "Le coût sera de :" << (jours * 45) + ((km * 0.076) * 1.25) << "$";	//Cette fois si le programme ne prend pas en compte les kilomètres supplémentaires
		}																						//Puisque dans ce cas l'utilisateur n'as pas dépassé le nb de km par jour.
	}
	//Test 1	jours:12	km:2500		Rép:777,5$
	//Test 2	jours:5		km:3000		rép:647.5$
	//Test 3	jours:-12	km:0		rép:"nombre de jours ou/et kilomètres invalides"
	
	
	
	



}