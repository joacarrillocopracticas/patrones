#include<iostream>


using namespace std;


class Carro
{
    public:

    virtual void display(){}

};

class CarroBase : public Carro
{
    public:

    void display()
    {
        cout << "soy un carro" << endl;
    }

} ;

class CarroDecorator : public Carro
{
    protected:
        Carro * carro;

    public:

           CarroDecorator(Carro * _carro ) : carro ( _carro ) {}

           void display()
           {
               carro -> display();
           }

};

class Llantas :  public CarroDecorator
{

    public:
        Llantas( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "Tengo llantas" << endl;
        }
};

class SelfDrive :  public CarroDecorator
{

    public:
        SelfDrive( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "me manejo solo" << endl;
        }
};

class AsientosComodos :  public CarroDecorator
{

    public:
        AsientosComodos( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "Tengo asientos comodos" << endl;
        }
};



class VentanasPremium :  public CarroDecorator
{

    public:
        VentanasPremium( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "tengo ventanas premium" << endl;
        }
};



class TanqueDeGasolina :  public CarroDecorator
{

    public:
        TanqueDeGasolina( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "tengo tanque para la gasolina" << endl;
        }
};


class CarroseriaEnFibraDeCarbono :  public CarroDecorator
{

    public:
        CarroseriaEnFibraDeCarbono( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "Mi carroseria es en fibra de carbono" << endl;
        }
};

class ParlantesDeAltaCalidad :  public CarroDecorator
{

    public:
        ParlantesDeAltaCalidad( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "Tengo parlantes de alta calidad" << endl;
        }
};



class Nitro :  public CarroDecorator
{

    public:
        Nitro( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "Tengo nitro para las carreras" << endl;
        }
};



class AirBag :  public CarroDecorator
{
    public:
        AirBag( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "Tengo AirBag para la seguridad" << endl;
        }
};


class FrenadoAsistido :  public CarroDecorator
{
    public:
        FrenadoAsistido( Carro * _carro ) : CarroDecorator( _carro ){}

        void display()
        {
                carro -> display();
                cout << "Tengo Frenado asistido para los que no saben frenar" << endl;
        }
};


int main()
{

    Carro * miCarro = new CarroBase();

    miCarro->display();
    cout << endl << endl;

    Carro * CarroConLlantas = new Llantas( new CarroBase );

    CarroConLlantas->display();
    cout << endl << endl;


    Carro * CarroConLlantasQueSeManejaSolo = new SelfDrive ( new Llantas( new CarroBase ));

    CarroConLlantasQueSeManejaSolo->display();
    cout << endl << endl;


    Carro * elMejorCarro = new AirBag( new Nitro( new ParlantesDeAltaCalidad ( new CarroseriaEnFibraDeCarbono ( new VentanasPremium ( new CarroBase )) ) ) );

    elMejorCarro ->display();
    cout << endl << endl;

    return 0;
}
