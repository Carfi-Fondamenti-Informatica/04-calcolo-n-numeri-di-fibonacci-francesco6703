#include <iostream>
using namespace std;

int main() {
	int n, x, a=1, b=0, fibonacci=1;
	cin >> x;
	if (x>=2)
	{
		for ( n=1; n<=x ; n++ )
		{
			cout << fibonacci << "\n";
			fibonacci=a+b;
			b=a;
			a=fibonacci;
		}
	} else
	{
		cout <<"errore";
	}
	
   return 0;
}
