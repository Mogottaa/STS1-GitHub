//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
	if (age >= 18)
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

int exposant(int nbre, int exp)
{
	int resultat = nbre;
	for (int i=1; i < exp; i++)
	{
		resultat = resultat*nbre;
	
	}
	return(resultat);
}

float TVA(int prix)
{
	float resultat;
	resultat = prix*1.196;
	return (resultat);
}

int plusGrand(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return(a);
	}
	else if (b > a && b > c)
	{
		return(b);
	}
	else
	{
		return(c);
	}
}






//Fonctions réalisées par l'étudiant 2 :

bool estPair(int nb)
{
	if (nb % 2 == 0)
	{
		return(true);
	}
	else
	{
		return(false);
	}
}

int sommeNombre(int nb)
{
    int resultat=0;

	for (int i=nb; i > 0; i--)
	{
        resultat = resultat + i;
	}
	return (resultat);
}

float salaireNet(int salaire)
{
    int resultat;
    resultat=salaire * 1,23;
    return(resultat);
}

int plusPetit(int a, int b, int c)
{
    if(a < b && a < c)
    {
        return(a);
    }
    else if(b < a && b < c)
    {
        return(b);
    }
    else
    {
        return(c);
    }
}









//Fonctions réalisées par l'étudiant 3 :
