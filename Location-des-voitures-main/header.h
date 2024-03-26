typedef struct Voiture 
{ 
 int idVoiture; 
 char marque[15]; 
 char nomVoiture[15]; 
 char couleur[7]; 
 int nbplaces; 
 int prixJour; 
 char EnLocation[4]; 
} voiture; 


typedef struct {
	int annee;
	int mois;
	int jour;
}date;

typedef struct contratLocation  
{ 
 int  numContrat; 
 int idVoiture; 
 int idClient; 
 date debut; 
 date fin; 
 int cout;   
} contrat;


typedef struct Client 
{ 
 int idClient;
 char nom[20]; 
 char prenom[20]; 
 int cin; 
 char adresse[15]; 
 int telephone; 
}client;

