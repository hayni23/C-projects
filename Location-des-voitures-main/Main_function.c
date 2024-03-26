#include"Menus.c"
#include"header.h"
#include"source.c"

int main()
{
	voiture A;
	client C;
	int c,p,b,t;
	do{
		 p=MenuPrincipal();
	switch (p){
		case 1:
			do{
			  t=LocationVoiture();
			switch (t){
			case 1:
				Visualiser_Contrat();
				break;
			case 2:
				Louer_Voiture();
				break;
			case 3:
				Retourner_Voiture();
				break;
			case 4:
				Modifier_contrat();
				break;
			case 5:
				Supprimer_Contrat();
				break;
			case 6:
				system("clear");
				break;
			}
			}while(t != 6);
			break;
		case 2:
			do{
				 c=GestionDesVoitures();
			switch (c){
				case 1:
					Liste_des_voitures(A);
					break;
				case 2:
					Ajouter_Voiture(A);
					break;
				case 3:
					Modifier_Voiture(A);
					break;
				case 4:
					Supprimer_Voiture();
					break;
				case 5:
					system("clear");
					break;
			}
		}while(c != 5);
			break;
		case 3:
			do{
				 b=GestionDesClients();
			switch (b){
			case 1: 
			    Liste_des_Clients(C);
			    break;
			case 2:
				Ajouter_Client(C);
				break;
			case 3:
				Modifier_Client(C);
				break;
			case 4:
				Supprimer_Client();
				break;
			case 5:
			    system("clear");
				break;				
			}
	    	}while(b != 5);
		break;
		case 4:
			system("clear");
		break;
	     
	}
}while(p != 4);
return 0;
}
