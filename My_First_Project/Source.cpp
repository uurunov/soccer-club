#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <MMSystem.h>

using namespace std;

void timer()
{
	cout << "\n\n-==- Please Wait";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
	Sleep(1000);
	cout << ".";
}

template <class T>
void correct(T s)
{
	while (s.empty())
	{
		cout << "\n\t-== No Input! Input the above requested info:\n\t=>> ";
		getline(cin, s);
		cout << endl;
	}
	while (s.length() <= 7)
	{
		cout << "\n\t-== Few Letters Used! \n\tInput the above requested info completely:\n\t=>> ";
		getline(cin, s);
		if (s.empty())
		{
			while (s.empty())
			{
				cout << "\n\t-== No Input! Input the above requested info:\n\t=>> ";
				getline(cin, s);
				cout << endl;
			}
		}
		cout << endl;
	}
}

class Primary;

class Registration
{
private:
	string name;
	int age;
	double weight, height;
public:
	friend class Primary;
	Registration()
	{
		cout << "\n  **********************************************************************\n" << endl;
		cout << "    \t\t\t   ||  REGISTRATION! ||\n\n";
		cout << " ************************************************************************\n\n" << endl;
		query();
	}

	void query()
	{
		cout << "\n===> Complete The Survey, Please!\n\n";

		cout << "-== Please, input your full name:\n\t=>> ";
		getline(cin, name);
		correct(name);
		cout << "\n-== How old are you?\n\t=>> ";
		cin >> age;
		cout << "\n-== Please, input your height:\n\t=>> ";
		cin >> height;
		cout << "\n-== Please, input your weight:\n\t=>> ";
		cin >> weight;

		ofstream file(name + ".txt");
		file << name << " " << age << " " << weight << " " << height;
		file.close();

		system("cls");
		display();
	}

	template <class T>
	void correct(T s)
	{
		while (s.empty())
		{
			cout << "\n\t-== No Input! Input the above requested info:\n\t=>> ";
			getline(cin, s);
			cout << endl;
		}
		while (s.length() <= 7)
		{
			cout << "\n\t-== Few Letters Used! \n\tInput the above requested info completely:\n\t=>> ";
			getline(cin, s);
			if (s.empty())
			{
				while (s.empty())
				{
					cout << "\n\t-== No Input! Input the above requested info:\n\t=>> ";
					getline(cin, s);
					cout << endl;
				}
			}
			cout << endl;
		}
	}

	void check(int a, double w, double h)
	{
		if ((a >= 7) && (a <= 16))
		{
			if ((a >= 7) && (a <= 10) && (w >= 30) && (w <= 40) && (h >= 130) && (h <= 140))
			{
				cout << "\n\n-=>> Congratulations, " << name << "! You Are Eligible To Join The Club!\n" << endl;
				PlaySound(TEXT("Applause.wav"), NULL, SND_SYNC);
				cout << "\n--== Press any button to return MAIN MENU! ==-- \t";
				_getch();
				system("cls");
			}
			else if ((a >= 10) && (a <= 13) && (w >= 40) && (w <= 50) && (h >= 140) && (h <= 150))
			{
				cout << "\n\n-=>> Congratulations, " << name << "! You Are Eligible To Join The Club!\n" << endl;
				PlaySound(TEXT("Applause.wav"), NULL, SND_SYNC);
				cout << "\n--== Press any button to return MAIN MENU! ==-- \t";
				_getch();
				system("cls");
			}
			else if ((a >= 13) && (a <= 16) && (w >= 50) && (w <= 60) && (h >= 150) && (h <= 160))
			{
				cout << "\n\n-=>> Congratulations, " << name << "! You Are Eligible To Join The Club!\n" << endl;
				PlaySound(TEXT("Applause.wav"), NULL, SND_SYNC);
				cout << "\n--== Press any button to return MAIN MENU! ==-- \t";
				_getch();
				system("cls");
			}
			else
			{
				cout << "\n\n-=>> Unfortunately, " << name << ", You Are Not Eligible To Join The Club!\n" << endl;
				cout << "\n--== Press any button to return MAIN MENU! ==-- \t";
				_getch();
				system("cls");
			}
		}
		else
		{
			cout << "\n\n-=>> Unfortunately, " << name << ", You Are Not Eligible To Join The Club!\n" << endl;
			cout << "\n--== Press any button to return MAIN MENU! ==-- \t";
			_getch();
			system("cls");
		}
	}

	void graph()
	{
		cout << "\n\n\t -== Based On The Following New Player Evaluation Chart, \n\t\t A Football Club Performs The Registration!\n\n";
		cout << "\tAGE\t\tWEIGHT\t\tHEIGHT\n";
		cout << "    ==============================================" << endl;
		cout << "\t7-10\t|\t30-40\t|\t130-140\n";
		cout << "\t   \t|\t   \t|\n";
		cout << "\t10-13\t|\t40-50\t|\t140-150\n";
		cout << "\t   \t|\t   \t|\n";
		cout << "\t13-16\t|\t50-60\t|\t150-160\n\n\n";
	}

	void display()
	{
		stream();

		cout << "\n\n -== Press any button to continue ==- \n";
		_getch();
		system("cls");

		graph();
		cout << " -== Press any button to start the evaluation! ==- \t\n";
		_getch();
		timer();
		check(age, weight, height);
	}

	void stream()
	{
		ifstream file(name + ".txt");
		string n;
		string n2;
		int a;
		double w, h;

		while (file >> n >> n2 >> a >> w >> h)
		{
			cout << "\n\t\t\t-==- Here's Your Information -==- \n\n -== Your Name: " << n << " " << n2 << "\n\n -== Your Age: " << a << "\n\n -== Your Height: " << h << "\n\n -== Your Weight: " << w << "\n\n";
		}
	}
};

class Football_Manager
{
private:
	string full_name, nationality, born, team;
	int left_row, middle_row, right_row, sex;

public:
	friend class Primary;
	Football_Manager()
	{
		cout << "\t" << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n";
		cout << "\t" << " \\\\\\ \t\t\t\t\t\t\t \\\\\\ \n";
		cout << "\t" << "  \\\\\\ WELCOME TO FOOTBALL MANAGER MODE OF OUR PROGRAM!!!  \\\\\\ \n";
		cout << "\t" << "   \\\\\\ \t\t\t\t\t\t\t   \\\\\\\ \n";
		cout << "\t" << "    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ";
		questionnaire();
	}

	void welcome()
	{
		cout << "\t" << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n";
		cout << "\t" << " \\\\\\ \t\t\t\t\t\t\t \\\\\\ \n";
		cout << "\t" << "  \\\\\\ WELCOME TO FOOTBALL MANAGER MODE OF OUR PROGRAM!!!  \\\\\\ \n";
		cout << "\t" << "   \\\\\\ \t\t\t\t\t\t\t   \\\\\\\ \n";
		cout << "\t" << "    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ ";
	}

	void questionnaire()
	{
		string key = "no";
		while (key == "no")
		{
			cout << "\n\n-== Question_1: What is your full name?\n\t=>> ";
			getline(cin, full_name);
			correct(full_name);
			system("cls");
			welcome();

			cout << "\n\n-== Question_2: Enter your nationality and hometown:\n\t=>> ";
			getline(cin, nationality);
			correct(nationality);
			system("cls");
			welcome();

			cout << "\n\n-== Question_3: When were you born? (Example: 1 January 1990)\n\t=>> ";
			getline(cin, born);
			correct(born);
			system("cls");
			welcome();

			cout << "\n\n-== Question_4: What football team club do you choose?\n\t=>> ";
			getline(cin, team);
			correct(team);
			system("cls");
			welcome();

			cout << "\n\n-== Enter 3 integers to form a tactic for " << team << "! For Example: \n\n";
			cout << "3-4-3\t\t5-3-2\t\t4-2-4\t\t6-3-1\t\t3-2-5\n\n";
			cout << "-== First Integer: \t\t";
			cin >> left_row;
			cout << "\n-== Second Integer: \t\t";
			cin >> middle_row;
			cout << "\n-== Last One: \t\t\t";
			cin >> right_row;
			cin.ignore();
			system("cls");
			welcome();

			cout << "\n\n-== Are All Your Entered Information Correct?  [ yes / no ]\n\n\t\t\t--== If You Type 'no', Questionaire Will Restart!\n =>> ";
			cin >> key;
			cin.ignore();
			system("cls");
			welcome();
		}
		timer();
		summary();
	}

	template <class T>
	void correct(T s)
	{
		while (s.empty())
		{
			cout << "\n\t-== No Input! Input the above requested info:\n\t=>> ";
			getline(cin, s);
			cout << endl;
		}
		while (s.length() <= 7)
		{
			cout << "\n\t-== Few Letters Used! \n\tInput the above requested info completely:\n\t=>> ";
			getline(cin, s);
			if (s.empty())
			{
				while (s.empty())
				{
					cout << "\n\t-== No Input! Input the above requested info:\n\t=>> ";
					getline(cin, s);
					cout << endl;
				}
			}
			cout << endl;
		}
	}

	void summary()
	{
		if ((left_row + middle_row + right_row) == 10)
		{
			system("cls");
			cout << "\n\n\t\t --== Completed Successfully!!! ==--";
			cout << "\n\n\n<<< The New Conducted Information About " << full_name << " - \n    New Manager Of " << team << " Club!>>>\n\n";
			cout << "\n<== Full Name: " << full_name << endl;
			cout << "<== Nationality: " << nationality << endl;
			cout << "<== Birth Date: " << born << endl;
			cout << "<== Managing Team: " << team << endl;
			cout << "\n<== Synthesized Tactic for " << team << ":\n\n";
			tactic(left_row, middle_row, right_row);
			PlaySound(TEXT("Applause.wav"), NULL, SND_SYNC);
			cout << "\n--== Press any button to return MAIN MENU! ==-- \t";
			_getch();
			system("cls");
		}
		else
		{
			cout << "\n\n*** Your tactic does not meet the rules of football!*** \n*** There must be 10 players, excluding 1 player (goal keeper)!***\n" << endl;
			cout << "\n--== Press any button to return MAIN MENU! ==-- \t";
			_getch();
			system("cls");
		}
	}

	void tactic(int x, int y, int z)
	{
		cout << " ________________________________________________" << endl;
		cout << "||\t\t\t|\t\t\t||" << endl;

		if (((x > y) || (x == y)) & ((x > z) || (x == z)))
		{
			for (int j = x; j > 0; --j)
			{
				if ((j > y) & (j > z))
				{
					cout << "|| *\t\t\t|\t\t\t||" << endl;
				}
				else if (((j > y) & (j == z)) || ((j > y) & (j < z)))
				{
					cout << "|| *\t\t\t|\t*\t\t||" << endl;
				}
				else if (((j == y) & (j > z)) || ((j < y) & (j > z)))
				{
					cout << "|| *\t\t*\t|\t\t\t||" << endl;
				}
				else
				{
					cout << "|| *\t\t*\t|\t*\t\t||" << endl;
				}
			}
		}
		else if (((y > x) || (y == x)) & ((y > z) || (y == z)))
		{
			for (int j = y; j > 0; --j)
			{
				if ((j > x) & (j > z))
				{
					cout << "|| \t\t*\t|\t\t\t||" << endl;
				}
				else if (((j > x) & (j == z)) || ((j > x) & (j < z)))
				{
					cout << "|| \t\t*\t|\t*\t\t||" << endl;
				}
				else if (((j == x) & (j > z)) || ((j < x) & (j > z)))
				{
					cout << "|| *\t\t*\t|\t\t\t||" << endl;
				}
				else
				{
					cout << "|| *\t\t*\t|\t*\t\t||" << endl;
				}
			}
		}
		else
		{
			for (int j = z; j > 0; --j)
			{
				if ((j > x) & (j > y))
				{
					cout << "|| \t\t\t|\t*\t\t||" << endl;
				}
				else if (((j > x) & (j == y)) || ((j > x) & (j < y)))
				{
					cout << "|| \t\t*\t|\t*\t\t||" << endl;
				}
				else if (((j == x) & (j > y)) || ((j < x) & (j > y)))
				{
					cout << "|| *\t\t\t|\t*\t\t||" << endl;
				}
				else
				{
					cout << "|| *\t\t*\t|\t*\t\t||" << endl;
				}
			}
		}
		cout << "||______________________|_______________________||\n" << endl;
	}

	friend void timer();
};


class Ticket_Booking
{
private:
	string venue;
	int date, stadium, choice1, choice2, choice3;
public:
	friend class Primary;
	Ticket_Booking()
	{
		cout << "\n  **********************************************************************\n" << endl;
		cout << "    ||  Welcome To Champions League 2018 and Ticket-Booking System! ||\n\n\n";
		cout << "   ||  Here's the list of teams that will participate in May, 2018!  ||\n\n";
		cout << " ************************************************************************\n\n" << endl;
		chart(0);

		cout << "\n\n\t\t-== Press Any Button To Start The Program! ";
		_getch();

		system("cls");
		query();
	}

	void chart(int x)
	{
		cout << " __________________________________________________________________________\n|\t\t\t\t\t\t\t\t\t   |\n";
		if (x == 1)
		{
			cout << "|  1.Manchester United\t\t   5.Uzbekistan\t\t 9.Liverpool\t   |\n|\t\t\t\t\t\t\t\t\t   |\n";
			cout << "|  2.Pitnak  \t\t\t   6.Bavariya\t\t10.Khorazm\t   |\n|\t\t\t\t\t\t\t\t\t   |\n";
			cout << "|  3.Real Madrid      \t\t   7.Chelsea\t\t11.Arsenal\t   |\n|\t\t\t\t\t\t\t\t\t   |\n";
			cout << "|  4.Barcelona\t\t\t   8.Everton\t\t12.Manchester City |\n";
		}
		else
		{
			cout << "|    Manchester United\t\t     Uzbekistan\t\t   Liverpool\t   |\n|\t\t\t\t\t\t\t\t\t   |\n";
			cout << "|    Pitnak  \t\t\t     Bavariya\t\t   Khorazm\t   |\n|\t\t\t\t\t\t\t\t\t   |\n";
			cout << "|    Real Madrid      \t\t     Chelsea\t\t   Arsenal\t   |\n|\t\t\t\t\t\t\t\t\t   |\n";
			cout << "|    Barcelona\t\t\t     Everton\t\t   Manchester City |\n";
		}
		cout << "|__________________________________________________________________________|\n";
	}

	void query()
	{
		chart(1);
		cout << "\n\n..:: Use numbers to choose ::..\n\nChoose 2 teams which you are trying to book a ticket for? \n\n";
		cout << "-== First Team:\t\t=>> ";
		cin >> choice1;
		if ((choice1<1) || (choice1>12))
		{
			error();
		}
		cout << "\tVS\n-== Second Team:\t=>> ";
		cin >> choice2;
		if ((choice2<1) || (choice2>12))
		{
			error();
		}
		cin.ignore();


		cout << "\n\n-== Where would you like the game to take place?" << endl;
		cout << "\n-== Enter a country and city with spaces:\n =>> ";
		getline(cin, venue);
		correct(venue);
		system("cls");


		calendar();
		cout << "\n\n\n-== Choose a date:\t=>> ";
		cin >> date;
		if ((date<1) || (date>31))
		{
			error();
		}
		system("cls");


		court();
		cout << "\n\n 1. Bunyodkor Stadium \t\t 2. Paxtakor Stadium \n\n 3. Lokomotiv Stadium\t\t 4. Real Madrid Stadium \n\n 5. Barcelona Stadium \t\t 6. Liverpool Stadium\n\n";
		cout << "\n\n-== Choose a stadium:\t=>> ";
		cin >> stadium;
		if ((stadium<1) || (stadium>6))
		{
			error();
		}
		system("cls");


		cout << "\n\n\n\n\n\n\t --=== Do You Buy The Ticket? ===-- \t 1. Yes \t 2. No \n\n\t=>> ";
		cin >> choice3;
		if ((choice3<1) || (choice3>2))
		{
			error();
		}
		if (choice3 == 1)
		{
			timer();
			result(1);
		}
		else
		{
			timer();
			result(2);
		}
	}

	void result(int a)
	{
		if (a == 1)
		{
			cout << "\n\n-==- Congratulations! -==- \n-==- You have purchased the ticket! We look forward to meeting you!!! -==-\n" << endl;
			cout << "\n-==- Here's your ticket! -==-\n\n";
			ticket();
		}
		else
		{
			cout << "\n\n-==- Sorry, Your Booking Has Been Cancelled! -==-\n" << endl;
			cout << "\n--== Press any button to return MAIN MENU! ==-- \t";
			_getch();
			system("cls");
		}
	}

	void ticket()
	{
		cout << " =======================================================================\n\n\n";
		cout << "\t" << teams(choice1) << "\t\tVS\t\t" << teams(choice2) << "\n\n\n";
		cout << " =======================================================================\n\n";
		cout << "\t--== VENUE ==--:\t\t" << venue << endl;
		cout << "\t--== STADIUM ==--:\t\t" << std_name(stadium) << endl;
		cout << "\t--== DATE ==--:\t\t\t" << date << endl;
		cout << "\t--== TIME ==--:\t\t\t6 P.M. Sharp!\n" << endl;
		cout << " =======================================================================\n\n\n";
		PlaySound(TEXT("Applause.wav"), NULL, SND_SYNC);
		cout << "\n\n--== Press any button to return MAIN MENU! ==-- \t";
		_getch();
		system("cls");
	}

	template <class T>
	void correct(T s)
	{
		while (s.empty())
		{
			cout << "\n\t-== No Input! Input the above requested info:\n\t=>> ";
			getline(cin, s);
			cout << endl;
		}
		while (s.length() <= 7)
		{
			cout << "\n\t-== Few Letters Used! \n\tInput the above requested info completely:\n\t=>> ";
			getline(cin, s);
			if (s.empty())
			{
				while (s.empty())
				{
					cout << "\n\t-== No Input! Input the above requested info:\n\t=>> ";
					getline(cin, s);
					cout << endl;
				}
			}
			cout << endl;
		}
	}

	string teams(int x)
	{
		switch (x)
		{
		case 1:
			return ("Manchester United"); break;
		case 2:
			return ("Pitnak"); break;
		case 3:
			return ("Real Madrid"); break;
		case 4:
			return ("Barcelona"); break;
		case 5:
			return ("Uzbekistan"); break;
		case 6:
			return ("Bavariya"); break;
		case 7:
			return ("Chelsea"); break;
		case 8:
			return ("Everton"); break;
		case 9:
			return ("Liverpool"); break;
		case 10:
			return ("Khorazm"); break;
		case 11:
			return ("Arsenal"); break;
		case 12:
			return ("Manchester City"); break;
		default:
			return ("You have entered an option that does not exist!"); break;
		}
	}

	string std_name(int y)
	{
		switch (y)
		{
		case 1:
			return ("Bunyodkor Stadium"); break;
		case 2:
			return ("Paxtakor Stadium"); break;
		case 3:
			return ("Lokomotiv Stadium"); break;
		case 4:
			return ("Real Madrid Stadium"); break;
		case 5:
			return ("Barcelona Stadium"); break;
		case 6:
			return ("Liverpool Stadium"); break;
		default:
			return ("You have entered an option that does not exist!"); break;
		}
	}

	void error()
	{
		cout << "\n-== You have entered an option that does not exist!\n\n";
		cout << "\n--== Restart The Program! Press any button to EXIT! ==-- \t";
		_getch();
		exit(0);
	}

	void court()
	{
		cout << "\t\t _______________________________________________" << endl;
		cout << "\t\t|\t\t\t|\t\t\t|" << endl;
		cout << "\t\t|\t\t\t|\t\t\t|" << endl;
		cout << "\t\t|__\t\t       /|\\ \t\t      __|" << endl;
		cout << "\t\t|  |\t\t      / | \\ \t\t     |  |" << endl;
		cout << "\t\t|  |\t\t     |  |  | \t\t     |  |" << endl;
		cout << "\t\t|  |\t\t     |  |  | \t\t     |  |" << endl;
		cout << "\t\t|  |\t\t      \\ | / \t\t     |  |" << endl;
		cout << "\t\t|__|\t\t       \\|/ \t\t     |__|" << endl;
		cout << "\t\t|\t\t\t|\t\t\t|" << endl;
		cout << "\t\t|\t\t\t|\t\t\t|" << endl;
		cout << "\t\t|_______________________|_______________________|" << endl;
	}

	void calendar()
	{
		cout << "\n\n\t\t\t-== May, 2018! ==-\n\n";

		cout << "Mo \t Tu \t We \t Th \t Fr \t Sa \t Su" << endl;
		cout << " ____________________________________________________" << endl;

		for (int j = 1; j <= 31; ++j)
		{
			if ((j == 6) || (j == 13) || (j == 20) || (j == 27))
			{
				cout << j;
				cout << endl;
			}
			else if (j == 1)
			{
				cout << " \t " << j << " \t ";
			}
			else
			{
				cout << j << " \t ";
			}
		}
	}

	friend void timer();
};

class Primary
{
private:
	int choice;
public:

	Primary() {}

	friend void timer();
	friend void correct();
	friend class Registration;
	friend class Football_Manager;
	friend class Ticket_Booking;

	void login()
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		int number;

		SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "\n\n\n\t\t\t********************************\n";
		SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "\t\t\t\t LOGIN SECTION \n";
		SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout << "\t\t\t================================\n\n\n\n";
		cout << "   __________________________________________________________________________ \n\n";
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << "\n\t   ---====*****     ARE YOU A FOOTBALL FAN?     *****====--- \n";
		cout << "\n\t\t ---====*****   1. Yes	  2. No	  *****====---\n\n\t\t\t\t   >>> ";
		cin >> number;
		

		if (number == 1)
		{
			cout << "\n\n\t\t\t\t -== Success ==-\n" << endl;
			cout << "   __________________________________________________________________________ \n\n";
			cout << "\n\t\t   --== Press Any Button To Continue ==-- \t";
			_getch();
			system("cls");
			main_menu();

		}
		else if (number == 2)
		{
			cout << "   __________________________________________________________________________ \n\n";
			cout << "  Unfortunately, If You Are Not Fan Of A Football, The Program Is Not For You!" << endl;
			cout << "\n\t\t       --== Press Any Button To Exit ==-- \t";
			_getch();
			exit(0);
		}
		else
		{
			cout << "\n\n-== You have entered an option that does not exist!\n\n";
			cout << "\n--== Restart The Program! Press any button to EXIT! ==-- \t";
			_getch();
			exit(0);
		}
	}

	void main_menu()
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << "\n\t===================================================================\n\n";
		SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout << "\t\t..:: WELCOME TO OUR FOOTBALL CLUB PROGRAM ::..\n\n";
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << "\t===================================================================\n\n";

		cout << "\n\t\t\t\t1:-   REGISTRATION\n\n";
		cout << "\t\t\t\t2:-   MANAGER MODE\n\n";
		cout << "\t\t\t\t3:-   TICKET BOOKING\n\n";
		cout << "\t\t\t\t4:-   EXIT\n\n";
		cout << "\t===================================================================\n\n";
		PlaySound(TEXT("Cheering.wav"), NULL, SND_SYNC);
		cout << "\t\t\t -== Enter Your Choice  =  ";
		cin >> choice;
		cin.ignore();


		if (choice == 1)
		{
			system("cls");
			Registration();
			main_menu();
		}
		else if (choice == 2)
		{
			system("cls");
			Football_Manager();
			main_menu();
		}
		else if (choice == 3)
		{
			system("cls");
			Ticket_Booking();
			main_menu();
		}
		else
		{
			cout << "\n\n\t\t\t--== Thank You For Your Time! ==-- \t";
			cout << "\n\n\t\t\t--== Press any button to EXIT! ==-- \t";
			_getch();
			exit(0);
		}
	}
};

int main()
{
	Primary object;
	object.login();
	
	system("pause");
	return 0;
}