#include <iostream>
using namespace std;

int TAB[102][10002];
int WAGA[101], CENA[101];

int main(int argc, char** argv)
{
	int n, WG;
	cin >> n >> WG;
	for(int i=1; i<=n; i++)
		cin >> CENA[i];
	for(int i=1; i<=n; i++)
		cin >> WAGA[i];

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=WG; j++)
		{
			if(j >= WAGA[i])
				TAB[i][j] = max( TAB[i-1][j], TAB[i-1][j-WAGA[i]]-CENA[i] );
			else
				TAB[i][j] = TAB[i-1][j];
		}
	}

	cout << TAB[n][WG] << endl;

	return 0;
}
