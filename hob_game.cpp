//bazi hob
#include <iostream>
# include <unistd.h>

using namespace std ;


	void animprint (string text )
	{
		for (int i = 0 ; i < text . length(); i++)
		{
			if (text .length () < 18)
			{
				if (text. length () < 5)
				{
					usleep (30000);
					cout << text [i] ;
				} else {
					usleep (90000);
					cout << text [i] ;
					
				}
			} else {
				usleep (40000);
				cout << text [i] ;
			}
		
		}
		cout << endl ;
	};
	
int main ()
{
	int num , mazrab , x[20] , k =0 , zoj=1 ;
	char y_n = 'y' , hob ='h';
	
	cout<< "\t \t \t \t ";
	animprint ("bazi hob");
	animprint ("salam be bazhi hob khoshomadi !!!");
	sleep (2);
	
	while (y_n == 'y')
	{
		animprint ("ie mazrab bego ? ");
		cin >> mazrab ;
		
		if (mazrab % 2 == 0)
		{
			zoj = 0 ;
		} else {
			zoj = 1 ;
		}
		switch (zoj) 
		{
			case 0 :
			{
				for (int i = 1 ; i <=20 ; i++)
				{
					x[i-1]= mazrab * i ;
				}
		
				for (int i =1 ;i <100 ; i++)
				{
					if (i != x[k])
					{	
						cout << i << endl ; 
						cin >> num ;
						if (num != i +1 )
						{
							cout << "to bakhti\n";
						}
						i++;	
					}
					if (i == x[k])
					{
						cin >> hob ;
						if (hob != 'h')
						{
							cout << "to bakhti ";
						}
					}	
				}
		
			}
			case 1 :
			{
				
			}
		}
			
		
	
		
		
		
		
		
		animprint ("dobare bazi konim ? (y/n)");
		cin >> y_n ;
	}

	
	
	
	
	
	
	return 0 ; 
}