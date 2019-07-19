#include<iostream>

using namespace std;

class Animal
{

	public:
	
	virtual void MakeSound() {};
};


class Perro : public Animal
{
	public:
	
	void MakeSound()
	{
		cout <<"Soy un Perro" << endl;
	}
};

class Gato : public Animal
{
	public:

	void MakeSound()
	{
		cout << "Soy un Gato" << endl;
	}
};	


class NullAnimal : public Animal
{

	public:

	void MakeSound()
	{
		cout << "Soy una instancia de Animal nula" << endl;
	}
};


void Something ( Animal * animal )
{
	animal -> MakeSound(); // fallaria sin NullObject
}


int main()
{

	Animal * perro = new Perro();
	Animal * gato = new Gato();
	Animal * nada = new NullAnimal();

	Something( perro );
	Something( gato );
	Something( nada );

	return 0;
}
