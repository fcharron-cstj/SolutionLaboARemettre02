//But : �crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une
//automobile lou�e.
//Auteur : Fr�d�ric Charron
//Date : 2020-09-15

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");	//Accents

	int jours;		//D�finir les Variables

	int km;


	std::cout << "Veuillez entrer la dur�e du voyage (jours) : ";			//Demander le nombre de jours

	std::cin >> jours;

	std::cout << "Veuillez entrer le kilom�trage parcouru : ";

	std::cin >> km;

	if (km <= 0 || jours <= 0)							//Si l'utilisateur entre un information invalide, alors le programme arr�te ici
	{
			std::cout << "nombre de jours ou/et kilom�tres invalides" << std::endl;
	}
		

	
	
	else
	{
		if (km > 250 * jours)			//Si l'utilisateur � fait plus de 250 km/jour, alors le programme prend en compte les kilom�tres en extra et envoie le message du total
		{
			std::cout << "Le montant total sera de : " << (jours * 45) + ((km - 250) * 0.05) + ((km * 0.076) * 1.25) << "$";		//  0.076 litres/km

		}
		else
		{
			std::cout << "Le co�t sera de :" << (jours * 45) + ((km * 0.076) * 1.25) << "$";	//Cette fois si le programme ne prend pas en compte les kilom�tres suppl�mentaires
		}																						//Puisque dans ce cas l'utilisateur n'as pas d�pass� le nb de km par jour.
	}
	//Test 1	jours:12	km:2500		R�p:777,5$
	//Test 2	jours:5		km:3000		r�p:647.5$
	//Test 3	jours:-12	km:0		r�p:"nombre de jours ou/et kilom�tres invalides"
	
	
	
	



}