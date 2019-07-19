#include<iostream>
#include<vector>

using namespace std;

class Parser
{

	public:

	Parser ( string s )
	{
		int i = 0;
		string aux = "";
		while( i < (int) s.length() )
		{
			if( s[i] >= '0' && s[i] <= '9' ) 
			{
				aux.push_back( s[i++] );
			}
			else
			{
				if( aux != "" )
					numeros.push_back(stoi(aux));
				aux = "";
				++i;
			}
		}
		if( aux != "" )
			numeros.push_back(stoi(aux));	
	}

	void evaluate()
	{
		cout << "Interpretation:";
		for( int x : numeros )
			cout << x << " ";
		cout << endl;
	}

	private:

	vector<int> numeros;

};

int main()
{

	string s = "1a1d56f4a5s3221df5454e1d2f16a54ds56f1a3254aaw5e4r54a561d2f1a56e4f1asd56f4ad1sf23a156";

	Parser * p = new Parser( s );
	cout << "Expresion original" << s << endl;

	p -> evaluate();
	return 0;
}
