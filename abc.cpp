#include <iostream>

using std::cin;
using std::cout;


int main()
{
	int n;
	int * x_size = new int [n];
	int * y_size = new int [n];

	cin >> n;
	
	for(int i = 0; i < n;i++)
	{	
		cin >> y_size[i] >> x_size[i];
	
		int ** food = new int * [ x_size[i] ];

		for(int k = 0; k < y_size[i] ; k++)
			food[k] = new int[ y_size[i] ];
	
		for(int k = 0; k < y_size[i]; k++)
		{
			for(int j = 0; j < x_size[i]; j++)
				cin >> food[k][j];
				
		}	

		 for(int k = 0; k < y_size[i]; k++) 
            for(int j = 0; j < x_size[i]; j++)
				cout << food[k][j];	
	}
	return 0;
}	
	
