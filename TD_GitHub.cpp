//Fonctions réalisées par l'étudiant 1 :










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
