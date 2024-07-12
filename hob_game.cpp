//bazi hob
# include <iostream>
# include <unistd.h>

using namespace std ;

int main (){
	int num , mazrab , sum , shomarande =0;
	char q ='y';
	
	cout << "\t\t\t\t\t bazi hob  \n" ;
	sleep (2);
	cout << "too khone bikar shodi omadi ba computer hob bazi koni ? (y/n) \n";
	cin >> q ;
	if (q == 'n' || q == 'N')
	{
		cout<< "pas inja alan chikar mikoni boro be karat beres "<< endl ;
		return 0 ;
	}
	
	cout<< "mazrabe chand bashe ? ";
	cin >> mazrab ;
	
	for (int i =1 ; i < 100 ; i ++)
	{
		if (i % 2 != 0)
		{
			if (shomarande == 8)
			{
				cout<< "ta inja ke kheili ason bod XD\n";
			}
			if (shomarande < 15 && shomarande > 7)
			{
				sleep (1);
			}
			if (shomarande >= 15 )
			{
				sleep (2);
			}
			if(shomarande == 14)
			{
				cout<< "midonesti man computer am v nemitoni man ro bebari !!! "<< endl ;
			}
			if (shomarande == 20)
			{
				cout<< "baba shol kon migam man computer am nemitoni bebari \n";
			}
			if (shomarande == 40)
			{
				cout << "A    ?"<< endl;
				return 0 ;
			}
			sum = mazrab * i ;
			cout << sum << endl ;
			shomarande ++ ;
		}
		 else 
		{
			shomarande ++ ;
		 	sum = mazrab * i ;
		 	cin >> num ;
		 	if (num != sum )
		 	{
			 break ;
			}
		}
	}
	sleep (3);
	
	if (shomarande <= 10)
	{
		cout<< "afarin !!! "<< endl ;
		sleep (2);
		cout << "na shokhi kardam , gandzadi"<< endl ;
	}
	if ( 10 < shomarande && shomarande <= 30)
	{
		cout<< "badak nabod  !!! ";
	}
	if ( 30 < shomarande && shomarande <= 100)
	{
		cout<< "be paie man nemiresi man computer am !!! ";
	}

	
	return 0 ;
}