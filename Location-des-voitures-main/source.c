#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

FILE *V=NULL;
void Liste_des_voitures(voiture A){
	char ch[300];
FILE *V = NULL;
V=fopen("carsList.txt","r");
	if(V != NULL){
			while( fgets(ch ,300,V) != NULL )
			{
			  printf("%s",ch);
	        }
fclose(V);
}	
}
void Ajouter_Voiture(voiture A)
{
FILE *V = NULL;
V=fopen("carsList.txt","a");
	if(V != NULL){
		printf("tapez Id voiture : ");
		scanf("%d",&A.idVoiture);
		printf("saisir la marque : ");
		scanf("%s",A.marque);
		printf("saisir le nom : ");
		scanf("%s",A.nomVoiture);
		printf("saisir couleur : ");
		scanf("%s",A.couleur);
		printf("saisir le nommbre du places : ");
		scanf("%d",&A.nbplaces);
		printf("saisir le prix a jour : ");
		scanf("%d",&A.prixJour);
		printf("En Location ( Oui/Non ) : ");
		scanf("%s",A.EnLocation);
		system("clear");
		fprintf(V,"\n%d         |%s     |%s    |%s    |%d            |%d         |%s",A.idVoiture,A.marque,A.nomVoiture,A.couleur,A.nbplaces,A.prixJour,A.EnLocation);

fclose(V);
	}
}
	
	
void Modifier_Voiture(voiture A){
	int id,p=0;
	char *ch;
	char chaine1[150];
	char chaine[150];
	char line[50][150];
	FILE *V=NULL;
	FILE *F=NULL;
	F=fopen("voiture1.txt","a");
	V=fopen("carsList.txt","r");
	printf("saisir id de voiture que tu vas modifier : ");
	scanf("%d",&id);
	    printf("tapez le nouveau id du voiture : ");
	    scanf("%d",&A.idVoiture);
    	printf("saisir la nouvelle marque :");
    	scanf("%s",A.marque);
		printf("saisir le nouveau nom : ");
		scanf("%s",A.nomVoiture);
		printf("saisir la nouvelle couleur : ");
		scanf("%s",A.couleur);
		printf("saisir le nouveau nombre du places : ");
		scanf("%d",&A.nbplaces);
		printf("saisir le nouveau prix a jour : ");
		scanf("%d",&A.prixJour);
		printf("En Location ( Oui/Non ) : ");
		scanf("%s",A.EnLocation);
		system("clear");
	while( fgets(chaine,150,V) != NULL){
		
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if (i == 0 && atoi(ch) == id){
		    	p=1; 
		       fprintf(F,"%d         |%s     |%s |%s    |%d                |%d         |%s",A.idVoiture,A.marque,A.nomVoiture,A.couleur,A.nbplaces,A.prixJour,A.EnLocation);
		 	}
			else if (i == 0 && atoi(ch) != id){	
			  if(p==1) fprintf(F,"\n");
			  fprintf(F,"%s",chaine1);
			}
			i++;
			ch=strtok(NULL,"|");
			
		}	
	}
	fclose(V);
	fclose(F);
remove("carsList.txt");
rename("voiture1.txt","carsList.txt");
}



void Supprimer_Voiture(){
	FILE *V=NULL;
	FILE *F=NULL;
	F=fopen("voiture1.txt","a");
	char chaine1[150];
	char chaine[150];
	char *ch;
	int id;
	printf("saisir id de voiture que tu vas supprimer : ");
	scanf("%d",&id);
	system("clear");
	V=fopen("carsList.txt","r");
	while( fgets(chaine,150,V) != NULL){
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if (i == 0 && atoi(ch) != id){
				fprintf(F,"%s",chaine1);
			}
			i++;
			ch=strtok(NULL,"|");
		}
}
fclose(V);
fclose(F);
remove("carsList.txt");
rename("voiture1.txt","carsList.txt");
}


void Liste_des_Clients(client C){
	char ch[300];
FILE *V = NULL;
V=fopen("Clients_list.txt","r");
	if(V != NULL){
			while( fgets(ch ,300,V) != NULL )
			{
			  printf("%s",ch);
	        }
fclose(V);
}	
	
}


void Ajouter_Client(client C){
	FILE *V = NULL;
V=fopen("Clients_list.txt","a");
	if(V != NULL){
		printf("tapez Id client : ");
		scanf("%d",&C.idClient);
		printf("saisir le nom : ");
		scanf("%s",C.nom);
		printf("saisir le prenom : ");
		scanf("%s",C.prenom);
		printf("saisir adresse : ");
		scanf("%s",C.adresse);
		printf("saisir CIN : ");
		scanf("%d",&C.cin);
		printf("saisir le telephone :  ");
		scanf("%d",&C.telephone);
		system("clear");
		fprintf(V,"\n%d  |%s     |%s |%s    |%d   |+212%d         ",C.idClient,C.nom,C.prenom,C.adresse,C.cin,C.telephone);

fclose(V);
	}
	
}



void Modifier_Client(client C){
		int id,p=0;
	char *ch;
	char chaine1[150];
	char chaine[150];
	char line[50][150];
	FILE *V=NULL;
	FILE *F=NULL;
	F=fopen("Clients1.txt","a");
	V=fopen("Clients_list.txt","r");
	printf("saisir id de client que tu vas modifier : ");
	scanf("%d",&id);
	    printf("tapez le nouveau id du client : ");
	    scanf("%d",&C.idClient);
    	printf("saisir le nouveau nom :");
    	scanf("%s",C.nom);
		printf("saisir le nouveau prenom : ");
		scanf("%s",C.prenom);
		printf("saisir la nouvelle adresse : ");
		scanf("%s",C.adresse);
		printf("saisir le nouveau CIN : ");
		scanf("%d",&C.cin);
		printf("saisir le nouveau telephone : ");
		scanf("%d",&C.telephone);
		system("clear");
	while( fgets(chaine,150,V) != NULL){
		
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			
			if (i == 0 && atoi(ch) == id){
				p=1;
		       fprintf(F,"%d  |%s     |%s |%s    |%d    |+212%d         ",C.idClient,C.nom,C.prenom,C.adresse,C.cin,C.telephone);
		 	}
			else if (i == 0 && atoi(ch) != id){
			  if(p==1) fprintf(F,"\n");
			  fprintf(F,"%s",chaine1);
			}
			i++;
			ch=strtok(NULL,"|");
		}
	}
	fclose(V);
	fclose(F);
remove("Clients_list.txt");
rename("Clients1.txt","Clients_list.txt");
	
	
}



void Supprimer_Client(){
	FILE *V=NULL;
	FILE *F=NULL;
	F=fopen("Clients1.txt","a");
	char chaine1[150];
	char chaine[150];
	char *ch;
	int id;
	printf("saisir id de client que tu vas supprimer : ");
	scanf("%d",&id);
	system("clear");
	V=fopen("Clients_list.txt","r");
	while( fgets(chaine,150,V) != NULL){
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if (i == 0 && atoi(ch) != id){
				fprintf(F,"%s",chaine1);
			}
			i++;
			ch=strtok(NULL,"|");
		}
}
    fclose(V);
	fclose(F);
remove("Clients_list.txt");
rename("Clients1.txt","Clients_list.txt");	
}



void Visualiser_Contrat(){
	float n;
	char chaine[100],*ch,ch1[100];
	FILE *N=NULL;
	printf("saisir le numero du contrat : ");
	scanf("%f",&n);
	N=fopen("Contrats.txt","r");
	while(fgets(chaine,100,N) != NULL){
           strcpy(ch1,chaine);
	       ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if(i == 0 && atof(ch) == n){
				printf(" Num Contrat  |Id Voiture  |Id Client    |Date debut   |Date fin      |Cout  \n\n");
				printf("%s",ch1);	
			}			
		i++;
		ch=strtok(NULL,"|");
}
	}
	fclose(N);
		
}



void ajout_contrat(contrat R,int DR){
	FILE *N=NULL;
	FILE *C=NULL;
	char chaine[200],chaine1[200],*ch,*ch1;
	N=fopen("Contrats.txt","a");
	C=fopen("carsList.txt","r");
	while(fgets(chaine,200,C) != NULL){
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if(i==0 && atoi(ch) == R.idVoiture){
				ch1=strtok(chaine1,"|");
				int j=0;
				while(ch1 != NULL){
					if(j==5){
						R.cout=atoi(ch1)*DR;
					}
					j++;
					ch1=strtok(NULL,"|");
				}
			}
			i++;
			ch=strtok(NULL,"|");
		}
	}
	fprintf(N,"\n%.2f            |%d          |%d           |%d/%d/%d     |%d/%d/%d     |%d$",R.numContrat,R.idVoiture,R.idClient,R.debut.jour,R.debut.mois,R.debut.annee,R.fin.jour,R.fin.mois,R.fin.annee,R.cout);
	fclose(C);
	fclose(N);
}


void Louer_Voiture(){
	char NomVoiture[30];
	int DR;
	FILE *V=NULL;
	FILE *F=NULL;
	char *ch1;
	char chaine1[150];
	char chaine[150];
	char *ch;
    int P=0;
    client C;
    contrat R;
	printf("saisir votre ID: ");
	scanf("%d",&R.idClient);
	V=fopen("Clients_list.txt","r");
	while( fgets(chaine,150,V) != NULL){
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if (i == 0 && atoi(ch) == R.idClient){ 
				P=1;
			}
			i++;
			ch=strtok(NULL,"|");
		}
}
if( P != 1){
	printf("\n                              *************************\n");
	printf("         enregistrer ses propres informations a travers le menu  Gestion clients . \n");
	printf("ajouter un nouveau client : \n");
	Ajouter_Client(C);
}
    fclose(V);
	F=fopen("carsList.txt","r");
	printf("la liste des voitures qui ne sont pas en EnLocation : \n\n");
	while( fgets(chaine,150,F) != NULL){
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		
		int i=0;
		while(ch != NULL){
          if(i==6 && strcmp(ch,"Oui") != 1 ){
          	printf("%s",chaine1);
		  }
             i++;
			ch=strtok(NULL,"|");
}
}
fclose(F);
printf("\n\nsaisir id de voiture que tu vas Louer :");
scanf("%d",&R.idVoiture);
system("clear");
printf("\nsaisir la duree de location en jour: ");
scanf("%d",&DR);

printf("\nsaisir la date de debut : \n");
        printf("tapez le jour : ");
		scanf("%d",&R.debut.jour);
		printf("tapez le mois : ");
		scanf("%d",&R.debut.mois);
		printf("tapez l'annee : ");
		scanf("%d",&R.debut.annee);
printf("\nsaisir la date du fin : \n");
        printf("tapez le jour : ");
		scanf("%d",&R.fin.jour);
		printf("tapez le mois : ");
		scanf("%d",&R.fin.mois);
		printf("tapez l'annee : ");
		scanf("%d",&R.fin.annee);
system("clear");
printf("tapez le numero de contrat que vous voulez creer : ");
scanf("%f",&R.numContrat);
ajout_contrat(R,DR);
system("clear");
}
  
void Retourner_Voiture(){
	voiture v;
	char line[50][50];
	printf("saisir id de voiture que tu as retourner : ");
	scanf("%d",&v.idVoiture);
	system("clear");
	FILE *V=NULL;
	FILE *F=NULL;
	F=fopen("voiture1.txt","a");
	char chaine1[150];
	char chaine[150];
	char *ch,*ch1;
	V=fopen("carsList.txt","r");
	while( fgets(chaine,150,V) != NULL){
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if (i == 0 && atoi(ch) != v.idVoiture){
				fprintf(F,"%s",chaine1);
			}
			else if(i==0 && atoi(ch) == v.idVoiture){
				ch1=strtok(chaine1,"|");
				int k=0,j=0;
				while(ch1 != NULL){
					if(k==0){
						strcpy(line[j],ch1);
					}
					if(k==1){
						strcpy(line[j],ch1);
					}
					if(k==2){
						strcpy(line[j],ch1);
					}
					if(k==3){
						strcpy(line[j],ch1);
					}
					if(k==4){
						strcpy(line[j],ch1);
					}
					if(k==5){
						strcpy(line[j],ch1);
					}
					if(k==6){
						strcpy(line[j],"Non");
					}
					k++;
					j++;
					ch1=strtok(NULL,"|");
				}
				fprintf(F,"%s|%s|%s|%s|%s|%s|%s\n",line[0],line[1],line[2],line[3],line[4],line[5],line[6]);
			}
			i++;
			ch=strtok(NULL,"|");
		}
}
fclose(V);
fclose(F);
remove("carsList.txt");
rename("voiture1.txt","carsList.txt");	
}




void Modifier_contrat(){
	contrat C;
	float numContrat;
	char *ch,*ch1;
	char chaine1[150];
	char chaine[150];
	char line[50][50];
	FILE *V=NULL;
	FILE *F=NULL;
	F=fopen("Contrats1.txt","a");
	V=fopen("Contrats.txt","r");
	printf("saisir num de contrat que tu vas modifier : ");
	scanf("%f",&C.numContrat);
		printf("saisir la nouvelle date de fin : \n");
		printf("tapez le jour : ");
		scanf("%d",&C.fin.jour);
		printf("tapez le mois : ");
		scanf("%d",&C.fin.mois);
		printf("tapez l'annee : ");
		scanf("%d",&C.fin.annee);
		printf("saisir le nouveau cout : ");
		scanf("%d",&C.cout);
		system("clear");
	while( fgets(chaine,150,V) != NULL){
		
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if (i == 0 && atoi(ch) == C.numContrat){
				ch1=strtok(chaine1,"|");
				int k=0,j=0;
				while(ch1 != NULL){
					if(k==0){
						strcpy(line[j],ch1);
					}
					if(k==1){
						strcpy(line[j],ch1);
					}
					if(k==2){
						strcpy(line[j],ch1);
					}
					if(k==3){
						strcpy(line[j],ch1);
					}
					k++;
					j++;
					ch1=strtok(NULL,"|");
				}
				fprintf(F,"%s|%s|%s|%s|%d/%d/%d    |%d \n",line[0],line[1],line[2],line[3],C.fin.jour,C.fin.mois,C.fin.annee,C.cout);	
		 	}
			else if (i == 0 && atoi(ch) != C.numContrat){
			  fprintf(F,"%s",chaine1);
			}
			i++;
			ch=strtok(NULL,"|");
		}
		
	}
	fclose(V);
	fclose(F);
remove("Contrats.txt");
rename("Contrats1.txt","Contrats.txt");
	
}

void Supprimer_Contrat(){
	FILE *V=NULL;
	FILE *F=NULL;
	F=fopen("Contrats1.txt","a");
	V=fopen("Contrats.txt","r");
	char chaine1[150];
	char chaine[150];
	char *ch;
	contrat C;
	printf("saisir le num de contrat que tu vas supprimer : ");
	scanf("%f",&C.numContrat);
	system("clear");
	while( fgets(chaine,150,V) != NULL){
		strcpy(chaine1,chaine);
		ch=strtok(chaine,"|");
		int i=0;
		while(ch != NULL){
			if (i==0 && atof(ch) != C.numContrat ){
				fprintf(F,"%s",chaine1);
		}
			i++;
			ch=strtok(NULL,"|");
			}
		}
		
    fclose(V);
	fclose(F);
remove("Contrats.txt");
rename("Contrats1.txt","Contrats.txt");
}