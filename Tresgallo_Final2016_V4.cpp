//****************************
//*Name: Pedro A. Tresgallo  *
//*Date: October 19th, 2016  *
//*Program: FInal            *
//*Summary: Slots Sim        *
//****************************

#include <iostream>
#include <stdexcept>
#include <Windows.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <queue>
#include <vector>
#include <algorithm> 

using namespace std;

ofstream ofs("tresgallo_Final2.txt");

// *********************************
// *General Assingment info and    *
// *Useful formatting characters   *
// *or variables                   *
// *********************************
string no = "EOF MESSAGE, ";
string hard = "Pedro A. Tresgallo ";
string coding = "10-19-16, CIS-2542-001 ";
string of = "Created a slot machine simulator ";
string anything = "Fus Ro Dah! ";
string labn = "Final   ";
string header = "Slot Machine Simulator ";
string footer = "Created a slot machine simulator ";
string bar = "|";
string dashes = "--------------------";
string dashes72 = "------------------------------------------------------------------------";
string slotdashes = "|-----------||-----------||-----------|";
string stars = "********************";
string star = "*";
string sc = ": ";
string spc = " ";
string dot = ". ";
string comma = ",";
string is = " = ";
string add = "+";
string sub = "-";
string op = "(";
string cp = ")";
string ep = "! ";
string dollars = "$";
string percent = "%";
const int STRSIZE = 6;

/***********************************************
*These are the variables used to display menu  *
*options and other screens                     *
***********************************************/
string lie = "Loading...                                      ... Done";
string big[STRSIZE];
string big1 = "___  ___ _____ _   _ _   _ ";
string big2 = "|  \\/  ||  ___| \\ | | | | |";
string big3 = "| .  . || |__ |  \\| | | | |";
string big4 = "| |\\/| ||  __|| . ` | | | |";
string big5 = "| |  | || |___| |\\  | |_| |";
string big6 = "\\_|  |_/\\____/\\_| \\_/\\___/ ";

string big7 = " _    _  ___   _      _      _____ _____ ";
string big8 = "| |  | |/ _ \\ | |    | |    |  ___|_   _|";
string big9 = "| |  | / /_\\ \\| |    | |    | |__   | |  ";
string big10 = "| |/\\| |  _  || |    | |    |  __|  | |  ";
string big11 = "\\  /\\  / | | || |____| |____| |___  | |  ";
string big12 = " \\/  \\/\\_| |_/\\_____/\\_____/\\____/  \\_/  ";

string big13 = " _____ _     _____ _____ _____ ";
string big14 = "/  ___| |   |  _  |_   _/  ___|";
string big15 = "\\ `--.| |   | | | | | | \\ `--. ";
string big16 = " `--. \\ |   | | | | | |  `--. \\";
string big17 = "/\\__/ / |___\\ \\_/ / | | /\\__/ /";
string big18 = "\\____/\\_____/\\___/  \\_/ \\____/ ";

string welcome01 = "______ _________________ _____   ___________ _____ _____ _____   ___   _      _     _____ ";
string welcome02 = "| ___ \\  ___|  _  \\ ___ \\  _  | |_   _| ___ \\  ___/  ___|  __ \\ / _ \\ | |    | |   |  _  |";
string welcome03 = "| |_/ / |__ | | | | |_/ / | | |   | | | |_/ / |__ \\ `--.| |  \\// /_\\ \\| |    | |   | | | |";
string welcome04 = "|  __/|  __|| | | |    /| | | |   | | |    /|  __| `--. \\ | __ |  _  || |    | |   | | | |";
string welcome05 = "| |   | |___| |/ /| |\\ \\\\ \\_/ /   | | | |\\ \\| |___/\\__/ / |_\\ \\| | | || |____| |___\\ \\_/ /";
string welcome06 = "\\_|   \\____/|___/ \\_| \\_|\\___/    \\_/ \\_| \\_\\____/\\____/ \\____/\\_| |_/\\_____/\\_____/\\___/ ";
string welcome07 = "                                                                                          ";
string welcome08 = " _____ _____ _____        _____  _____    ___  _____        _____  _____  __              ";
string welcome09 = "/  __ \\_   _/  ___|      / __  \\|  ___|  /   |/ __  \\      |  _  ||  _  |/  |             ";
string welcome10 = "| /  \\/ | | \\ `--. ______`' / /'|___ \\  / /| |`' / /'______| |/' || |/' |`| |             ";
string welcome11 = "| |     | |  `--. \\______| / /      \\ \\/ /_| |  / / |______|  /| ||  /| | | |             ";
string welcome12 = "| \\__/\\_| |_/\\__/ /      ./ /___/\\__/ /\\___  |./ /___      \\ |_/ /\\ |_/ /_| |_            ";
string welcome13 = " \\____/\\___/\\____/       \\_____/\\____/     |_/\\_____/       \\___/  \\___/ \\___/            ";
string welcome14 = " __   _____     ____    ___     ____    ____                                              ";
string welcome15 = "/  | / __  \\   / /  |  /   |   / /  |  / ___|                                             ";
string welcome16 = "`| | `' / /'  / /`| | / /| |  / /`| | / /___                                              ";
string welcome17 = " | |   / /   / /  | |/ /_| | / /  | | | ___ \\                                             ";
string welcome18 = "_| |_./ /___/ /  _| |\\___  |/ /  _| |_| \\_/ |                                             ";
string welcome19 = "\\___/\\_____/_/   \\___/   |_/_/   \\___/\\_____/                                             ";
string welcome25 = "______ _____ _   _   ___   _                                                              ";
string welcome20 = "|  ___|_   _| \\ | | / _ \\ | |                                                             ";
string welcome21 = "| |_    | | |  \\| |/ /_\\ \\| |                                                             ";
string welcome22 = "|  _|   | | | . ` ||  _  || |                                                             ";
string welcome23 = "| |    _| |_| |\\  || | | || |____                                                         ";
string welcome24 = "\\_|    \\___/\\_| \\_/\\_| |_/\\_____/                                                         ";

string diamond[STRSIZE] = { "|     /\\    |", "|    /  \\   |", "|   /DIAM\\  |",
"|   \\ OND/  |", "|    \\  /   |", "|     \\/    |" };

string seven[STRSIZE] = { "| ________  |", "| \\___  _/  |" , "|     /7/   |" ,
"|    /7/    |" , "|   /7/     |" , "|  /_/      |" };

string lightning[STRSIZE] = { "|       /\\  |", "|    __/L/  |" , "|   /T__/   |" ,
"|  /N/      |" , "| /G/       |" , "| \\/        |" };

string club[STRSIZE] = { "|     _     |", "|    ( )    |", "|  _/C L\\_  |",
"| (__U B__) |", "|    | |    |", "|    | |    |" };

string moneybag[STRSIZE] = { "|     _     |", "|    ( )    |", "|  _/ $ \\_  |",
"| /  $ $  \\ |" , "| \\ $ $ $ / |" , "|  \\_____/  |" };

string cherry[STRSIZE] = { "|      //   |" , "|    _/<    |" , "|   /   \\   |",
"|  /\\   /\\  |" , "| /CH\\ /RY\\ |" , "| \\__/ \\__/ |" };

int choice;
int n; // This will help validate input
string intro1 = "Press [1] for ";
string intro2 = "Press [2] for ";
string intro3 = "Press [3] for ";
string intro4 = "Press [4] for ";
string intro5 = "Press [5] to ";
string outro1 = "Display Rules";
string outro2 = "Wallet";
string outro3 = "Play!";
string outro4 = "Credits";
string outro5 = "Quit";
string userchoice = "Please Enter your choice: ";

string rules1 = "One line pays what you bet: bet 5, win 5";
string rules2 = "Three lines pays double: each winning line pays double the bet";
string rules3 = "Five lines pays triple: each winning line pays triple the bet";
string rules4 = "Symbols: ";
string rules5 = "Three Diamonds";
string rules6 = "Three 7's";
string rules7 = "Three Cherries";
string rules8 = "Three Clubs (Wildcards)";
string rules9 = "Three Lightning Bolts";
string rules10 = "Three Bags of Money";

string credits1 = "This Program Was Created by Pedro A. Tresgallo ";
string credits2 = "For Computer Information Systems Class 2542-001 ";
string credits3 = "All Rights Reserved. Original Graphics Used.";

string invalid = "ERROR, INVALID CHOICE";
/****************************************************
*These are the variables that manage the player's   *
*wallet, bank and assets                            *
*****************************************************/
string currentwallet = "Wallet:        ";
string currentbank = "Bank:          ";
string currentir = "Interest Rate: ";
string currentdebt = "Debt:          ";
string wallet1 = "Press [1] To Make a Deposit.";
string wallet2 = "Press [2] To Make a withdrawal.";
string wallet3 = "Press [3] To Sell Belongings!";
string wallet4 = "Press [4] To Get a Loan!";
string wallet5 = "Press [5] To Get Pay off Debt!";
string wallet6 = "Press [6] To Upgrade Interest Rate!";
string wallet7 = "Press [7] To Exit (Back to Prev. Menu)";
string negerror = "Error: Quantity Cannot Be Negative";
string deposit1 = "How Much Would You Like to Deposit? ([0] to exit) $";
string depositerror = "Error: Insufficient Money To Make Deposit";
string withdraw1 = "How Much Would You Like to Withdraw? ([0] to exit) $";
string withdrawerror = "Error: Insufficient Money To Make Withdrawal";
string paydebt1 = "How Much Would You Like to Pay Off? ([0] to exit) $";
string paydebterror = "Error: Insufficient Money To Make Payment";
string loan1 = "Current Loan value is $";
string loan2 = "Are you sure you want a loan? ([1] to accept loan, [0] to decline and exit). ";
string loanerror1 = "YOu cannot receive a loan until debt is payed off.";
string wrongkey = "Error: Wrong key entered. ";
string interest1 = "Current Interest Rate is: ";
string interest2 = "Current Price to Upgrade Interest Rate: $";
string interest3 = "Are you sure you want to upgrade? ([1] to accept upgrade, [0] to decline and exit).";
string belonging1 = "You Currently Own a car worth $";
string belonging2 = "You Currently Own a wedding ring worth $";
string belonging3 = "You Currently Own a house worth $";
string sell1 = "Press [1] to Sell Car";
string sell2 = "Press [2] to Sell Wedding Ring";
string sell3 = "Press [3] to Sell House";
string sell4 = "Press [4] to Exit (Back to Prev. Menu)";
string sell5 = "You already sold everything you own!";
double wallet = 1000;
double prewallet;
double bank = 15000;
double debt = 0;
double debtrate = 0.01;
double totalgains = 0;
double totalloses = 0;
double wins = 0;
double loses = 0;
double gamesplayed;
double winpercent;
double net;
double interestrate = 0.01;
double interestprice = 1000;
double transactionrequest;
bool loan = false;
double loanvalue;
bool car = true;
double carvalue = 12500;
bool house = true;
double housevalue = 450000;
bool ring = true;
double ringvalue = 9000;
bool respin = false;
string replaymessage = "Do you want to spin again? [1] = yes, [0] = no : ";

/****************************************************
*These are the variables that manage the slot's     *
*variables and player statistics                    *
*****************************************************/

string betamount = "How much money would you like to bet?";
string bet0 = "Betting 0 results in a spin with no earnings.";
string maxpossible = "Max Possible bet is: $";
string betlines = "How many lines would you like to bet? (1, 3, 5)";
int line1multiplyer = 1; // number = payout multiplyer
int line3multiplyer = 2; // number = payout multiplyer
int line5multiplyer = 3; // number = payout multiplyer
double bet = 0;
int lines = 1;
double stake = (bet * lines);
double greateststake = 0;
double roundgains = 0;
double maxbet = (wallet / lines);
double winrate = 30;
int temp2;
bool win;
string trywin = "Trying to make you win...";
string trylose = "Trying to make you lose...";
string winline1 = "You won in the center line!";
string winline2 = "You won in the top line!";
string winline3 = "You won in the bottom line!";
string winline4 = "You won in the \\ diagonal line !";
string winline5 = "You won in the / diagonal line !";
bool line1won = false;
bool line2won = false;
bool line3won = false;
bool line4won = false;
bool line5won = false;
string end1 = "You bet $";
string end2 = " over ";
string end3 = " lines; Stake was $";
string won = "CONGRATULATIONS! YOU JUST WON $";
string lost = "YOU JUST LOST $";
string before = "Balance Before Spin: $";
string after = "New Balance After Spin: $";
bool valid = false;

string word;

const int MAX_SIZE = 9;
int slotcounter = 0;
int slotbackup[MAX_SIZE]; // keeps track of what the slots' symbols were
string slots[9][7];
int slotsG[9];
int snum; // this is the first number of slots; keeps track of slot position. 0 is top left, 8 is bottom right
int dnum; // this is the second number of slots; 0 is graphic reference, 1 is the top of the graphic, 6 is the bottom of the graphic
int temp;
int j;
int drawnumber = 0;
int slotoffset = 18; // this variable shifts the slots to the right. Higher values shift further to right



					 /****************************************************
					 *These are the variables that are used when printing*
					 *to the file/  player statistics                    *
					 *****************************************************/

string statsheader = "PLAYER STATS REPORT";
string numberwins = "Number of Wins: ";
string numberloses = "Number of Loses: ";
string winpercentage = "Win Percentage: ";
string mostatstake = "Most at Stake:  $";
string amountwon = "Total Earnings: $";
string amountlost = "Total Loses:    $";
string netgain = "Net Gain:       $";


/**********************************************
*                                             *
*                                             *
*             CONCEPT ONE!                    *
*               QUEUES                        *
*                                             *
*                                             *
**********************************************/
class Queue {

private:
	int data[MAX_SIZE];
	int front;
	int back;

public:
	Queue() {
		front = -1;
		back = -1;
	}

	// Add item to Queue 
	void Add(int aData) {

		if (back >= MAX_SIZE)
		{
			cout << "Queue is full" << endl;
			return;
		}

		back++;
		data[back] = aData;

		cout << "Added element: " << aData << endl;

		if (front == -1) {
			front = 0;
		}
	}

	// Delete item from Queue 
	int Delete() {

		if (front == -1) {
			cout << "Queue is empty" << endl;
			return NULL;
		}

		int tmp = data[front];

		if (front == back) {
			// Reset the queue
			front = -1;
			back = -1;
		}
		else {
			front++;
		}

		return tmp;
	}
};
queue<int> q;
queue<string> p;

/*************************************************
*barline(), space(), and blankbox() are functions*
*used for formatting the text document. While    *
*hdr(), ftr(), and eof() contain the usual class *
*information                                     *
*************************************************/


void barline()
{
	ofs << bar << dashes << dashes
		<< dashes << dashes << bar
		<< endl;
}

void space()
{
	ofs << bar << setw(81) << right
		<< bar << endl;
}

void blankbox()
{
	barline();
	space();
	barline();
}

void hdr()
{
	barline();
	ofs << bar << header << hard
		<< coding << labn << setw(8)
		<< right << bar << endl;
}

void ftr()
{
	ofs << bar << footer << setw(48) << right
		<< bar << endl;
}

void eof()
{
	ofs << bar << no << hard << coding << setw(26)
		<< right << bar << endl;
	ofs << bar << of << anything << labn << setw(28)
		<< right << bar << endl;
}

void printresults()
{
	gamesplayed = (wins + loses);
	winpercent = ((wins / gamesplayed) * 100);
	net = totalgains - totalloses;
	ofs << bar << setw(32) << right << spc << statsheader << setw(30) << right << bar << endl;
	barline();

	ofs << bar << numberwins << setw(9) << right << wins << setw(56) << right << bar << endl;
	ofs << bar << numberloses << setw(8) << right << loses << setw(56) << right << bar << endl;
	ofs << bar << winpercentage << setw(9) << right << winpercent << percent << setw(55) << right << bar << endl;
	ofs << bar << mostatstake << setw(8) << right << greateststake << setw(56) << right << bar << endl;
	ofs << bar << amountwon << setw(8) << right << totalgains << setw(56) << right << bar << endl;
	ofs << bar << amountlost << setw(8) << right << totalloses << setw(56) << right << bar << endl;
	ofs << bar << netgain << setw(8) << right << net << setw(56) << right << bar << endl;
}

void bigboyletters()
{
	cout << big1 << endl;
	cout << big2 << endl;
	cout << big3 << endl;
	cout << big4 << endl;
	cout << big5 << endl;
	cout << big6 << endl;
}

void bigwalletletters()
{
	cout << big7 << endl;
	cout << big8 << endl;
	cout << big9 << endl;
	cout << big10 << endl;
	cout << big11 << endl;
	cout << big12 << endl;
}

void bigslotsletters()
{
	cout << big13 << endl;
	cout << big14 << endl;
	cout << big15 << endl;
	cout << big16 << endl;
	cout << big17 << endl;
	cout << big18 << endl;
}

void displaykeystats()
{
	cout << endl << endl;
	cout << currentwallet << dollars << wallet << endl;
	cout << currentbank << dollars << bank << endl;
	cout << currentir << interestrate << percent << endl;
	cout << currentdebt << dollars << debt << endl;
	cout << endl << endl;
}

void drawdiamond()
{
	for (dnum = 1; dnum < 7; ++dnum)
	{
		slots[snum][dnum] = diamond[(dnum - 1)];
	}
}

void drawseven()
{
	for (dnum = 1; dnum < 7; ++dnum)
	{
		slots[snum][dnum] = seven[(dnum - 1)];
	}
}

void drawlightning()
{
	for (dnum = 1; dnum < 7; ++dnum)
	{
		slots[snum][dnum] = lightning[(dnum - 1)];
	}
}

void drawclub()
{
	for (dnum = 1; dnum < 7; ++dnum)
	{
		slots[snum][dnum] = club[(dnum - 1)];
	}
}

void drawmoneybag()
{
	for (dnum = 1; dnum < 7; ++dnum)
	{
		slots[snum][dnum] = moneybag[(dnum - 1)];
	}
}

void drawcherry()
{
	for (dnum = 1; dnum < 7; ++dnum)
	{
		slots[snum][dnum] = cherry[(dnum - 1)];
	}
}

void welcomescreen()
{
	system("CLS");

	cout << welcome01 << endl;
	cout << welcome02 << endl;
	cout << welcome03 << endl;
	cout << welcome04 << endl;
	cout << welcome05 << endl;
	cout << welcome06 << endl;
	cout << welcome07 << endl;
	cout << welcome08 << endl;
	cout << welcome09 << endl;
	cout << welcome10 << endl;
	cout << welcome11 << endl;
	cout << welcome12 << endl;
	cout << welcome13 << endl;
	cout << welcome07 << endl;
	cout << welcome14 << endl;
	cout << welcome15 << endl;
	cout << welcome16 << endl;
	cout << welcome17 << endl;
	cout << welcome18 << endl;
	cout << welcome19 << endl;
	cout << welcome07 << endl;
	cout << welcome25 << endl;
	cout << welcome20 << endl;
	cout << welcome21 << endl;
	cout << welcome22 << endl;
	cout << welcome23 << endl;
	cout << welcome24 << endl;
	

	vector<int> deck(5, 100); // 5 elements, all of them are "100"

	deck.push_back(6); // add a "6" to the end of the vector
	deck.push_back(13); // add a "13" to the end of the vector

	cout << deck.capacity() << endl;

	for (int w = 0; w < deck.capacity(); w++)
	{
		cout << deck.at(w) << endl;
	}
	cout << endl;
	deck.pop_back(); // deletes the last element in the vector but it retains the size of the vector
	deck.shrink_to_fit(); // shrinks the vector to not have extra slots
	cout << deck.capacity() << endl;
	for (int p = 0; p < deck.capacity(); p++)
	{
		cout << deck.at(p) << endl;
	}
	cout << endl << endl;

	struct cards
	{
		int value;
		string suit;

		void displayvalue()
		{
			cout << value;
		}

		void displaysuit()
		{
			cout << suit;
		}
	};

	vector<cards>deckofcards(0);
	
	cards temp = { 10, "hearts"};
	deckofcards.push_back(temp);
	temp = { 8, "spades" };
	cards tempcard = { 3, "clubs" };
	deckofcards.push_back(temp);
	deckofcards.push_back(tempcard);
	cout << deckofcards.capacity() << endl;

	for (int p = 0; p < deckofcards.capacity(); p++)
	{
		deckofcards.at(p).displayvalue();
		cout << " of ";
		deckofcards.at(p).displaysuit();
		cout << endl;
	}
	
	system("pause");
}

void displaycredits()
{
	system("CLS");

	cout << credits1 << endl;
	cout << credits2 << endl;
	cout << credits3 << endl << endl;

	system("pause");
}

void displayrules()
{
	system("CLS");

	cout << rules1 << endl;
	cout << rules2 << endl;
	cout << rules3 << endl << endl;
	cout << rules4 << endl;
	cout << rules5 << endl;
	cout << rules6 << endl;
	cout << rules7 << endl;
	cout << rules8 << endl;
	cout << rules9 << endl;
	cout << rules10 << endl << endl;

	system("pause");
}

void depositmoney()
{
	system("CLS");

	cout << currentwallet << dollars << wallet << endl;
	cout << currentbank << dollars << bank << endl << endl;

	do
	{
		cout << deposit1;
		cin >> transactionrequest;


		if (transactionrequest == 0)
		{
			// do nothing, exit
		}
		else if (transactionrequest < 0)
		{
			cout << negerror << endl;
		}
		else if (transactionrequest > wallet)
		{
			cout << depositerror << endl;
		}
		else if (transactionrequest <= wallet)
		{
			wallet -= transactionrequest;
			bank += transactionrequest;
			transactionrequest = 0;
		}
	} while (transactionrequest != 0);

}

void withdrawmoney()
{
	system("CLS");

	cout << currentwallet << dollars << wallet << endl;
	cout << currentbank << dollars << bank << endl << endl;

	do
	{
		cout << withdraw1;
		cin >> transactionrequest;


		if (transactionrequest == 0)
		{
			// do nothing, exit
		}
		else if (transactionrequest < 0)
		{
			cout << negerror << endl;
		}
		else if (transactionrequest > bank)
		{
			cout << withdrawerror << endl;
		}
		else if (transactionrequest <= bank)
		{
			bank -= transactionrequest;
			wallet += transactionrequest;
			transactionrequest = 0;
		}
	} while (transactionrequest != 0);

}

void paydebt()
{
	system("CLS");

	cout << currentwallet << dollars << wallet << endl;
	cout << currentdebt << dollars << debt << endl << endl;

	do
	{
		cout << paydebt1;
		cin >> transactionrequest;


		if (transactionrequest == 0)
		{
			// do nothing, exit
		}
		else if (transactionrequest < 0)
		{
			cout << negerror << endl;
		}
		else if (transactionrequest > wallet)
		{
			cout << paydebterror << endl;
		}
		else if (transactionrequest <= wallet)
		{
			if (transactionrequest <= debt)
			{
				debt -= transactionrequest;
				wallet -= transactionrequest;
				transactionrequest = 0;

			}
			else if (transactionrequest > debt)
			{
				wallet -= debt;
				debt = 0;
				loan = false;
				transactionrequest = 0;
			}
		}
	} while (transactionrequest != 0);

}

void upgradeinterest()
{
	system("CLS");

	cout << currentwallet << dollars << wallet << endl;
	cout << interest1 << interestrate << percent << spc << endl;
	cout << interest2 << interestprice << endl << endl;

	do
	{
		cout << interest3;
		cin >> transactionrequest;


		if (transactionrequest == 0)
		{
			// do nothing, exit
		}
		else if (transactionrequest == 1 && interestprice > wallet)
		{
			cout << paydebterror << endl;
		}
		else if (transactionrequest == 1 && interestprice <= wallet)
		{
			wallet -= interestprice;
			interestrate *= 2;
			interestprice *= 2;
			transactionrequest = 0;
		}
		else
		{
			cout << wrongkey << endl;
		}

	} while (transactionrequest != 0);

}

void getloan()
{
	system("CLS");

	cout << currentwallet << dollars << wallet << endl;
	cout << currentbank << dollars << bank << endl;
	cout << currentdebt << dollars << debt << endl << endl;

	if (debt == 0)
		loan = false;

	if (loan == false)
	{

		do
		{

			if (bank <= 1000)
				loanvalue = 100;

			if (bank >= 1000)
				loanvalue = ((bank + wallet)* (0.1 + interestrate));

			cout << loan1 << loanvalue << endl;
			cout << loan2;
			cin >> transactionrequest;


			if (transactionrequest == 0)
			{
				// do nothing, exit
			}
			else if (transactionrequest == 1)
			{
				wallet += loanvalue;
				debt += loanvalue;
				loan = true;
				transactionrequest = 0;
			}
			else
			{
				cout << wrongkey << endl;
			}

		} while (transactionrequest != 0);

	}
	else if (loan == true)
	{
		cout << loanerror1 << endl;
	}

}

void sellbelongings()
{
	system("CLS");

	cout << currentwallet << dollars << wallet << endl;
	cout << currentbank << dollars << bank << endl;
	cout << currentdebt << dollars << debt << endl << endl;

	cout << endl << endl;

	if (car == false && ring == false && house == false)
	{
		cout << sell5 << endl;
	}

	if (car == true)
		cout << belonging1 << carvalue << endl;

	if (ring == true)
		cout << belonging2 << ringvalue << endl;

	if (house == true)
		cout << belonging3 << housevalue << endl;

	cout << endl;

	if (car == true)
		cout << sell1 << endl;

	if (ring == true)
		cout << sell2 << endl;

	if (house == true)
		cout << sell3 << endl;

	cout << sell4 << endl;

	cin >> choice;

	do
	{

		switch (choice)
		{
		case 1:
		{
			// Sell Car

			if (car == true)
			{
				bank += carvalue;
				carvalue = 0;
				car = false;
			}
			else
			{
				cout << invalid << endl;
			}

			system("pause");
			sellbelongings();
			break;
		} // case 1
		case 2:
		{
			// Sell Wedding Ring

			if (ring == true)
			{
				bank += ringvalue;
				ringvalue = 0;
				ring = false;
			}
			else
			{
				cout << invalid << endl;
			}

			system("pause");
			sellbelongings();
			break;
		} // case 2
		case 3:
		{
			// Sell House

			if (house == true)
			{
				bank += housevalue;
				housevalue = 0;
				house = false;
			}
			else
			{
				cout << invalid << endl;
			}

			system("pause");
			sellbelongings();
			break;
		} // case 3
		case 4:
		{
			// Exit

			break;
		} // case 4
		default:
		{
			cout << invalid << endl;
			system("pause");

			sellbelongings();
			break;
		}// default
		}// switch

	} while (choice != 4);

}

void managewallet()
{
	system("CLS");
	bigwalletletters();
	displaykeystats();

	cout << wallet1 << endl;
	cout << wallet2 << endl;
	cout << wallet3 << endl;
	cout << wallet4 << endl;
	cout << wallet5 << endl;
	cout << wallet6 << endl;
	cout << wallet7 << endl << endl;

	cin >> choice;

	do
	{
		switch (choice)
		{
		case 1:
		{
			// Deposit

			depositmoney();
			system("pause");
			managewallet();
			break;
		} // case 1
		case 2:
		{
			// Withdrawal

			withdrawmoney();
			system("pause");
			managewallet();
			break;
		} // case 2
		case 3:
		{
			// Sell Belongings

			sellbelongings();
			system("pause");
			managewallet();
			break;
		} // case 3
		case 4:
		{
			// Get a Loan

			getloan();
			system("pause");
			managewallet();
			break;
		} // case 4
		case 5:
		{
			// Pay Off Debt

			paydebt();
			system("pause");
			managewallet();
			break;
		} // case 5
		case 6:
		{
			// Upgrade Interest

			upgradeinterest();
			system("pause");
			managewallet();
			break;
		} // case 6
		case 7:
		{
			// purposely left blank
			break;
		} // case 7

		default:
		{
			cout << invalid << endl;
			system("pause");

			managewallet();
			break;
		}// default
		}// switch

	} while (choice != 7);
}

void debtinterest()
{
	debt += (debt * debtrate);
}

void bankinterest()
{
	bank += (bank * interestrate);
}

/**********************************************
*                                             *
*                                             *
*             CONCEPT TWO!                    *
*              RECURSION                      *
*                 VVV                         *
*                                             *
**********************************************/

void clearqueue()
{
	q.pop();
	++slotcounter;

	if (slotcounter < MAX_SIZE);
		clearqueue();
}

void generateslots()
{
	// This goes to each slot (there are 9) and assigns a value (graphic)
	// Then it stores it in a queue
	temp = rand() % 6 + 1;
	q.push(temp);
	++slotcounter;

	if (slotcounter < MAX_SIZE)
		generateslots();
}

void predrawslots()
{

	for (snum = 0; snum < 9; ++snum)
	{
		slotsG[snum] = q.front();
		slots[snum][0] = q.front();
		q.pop();
	}

	slotcounter = 0;
	for (snum = 0; snum < 9; ++snum)
	{

		switch (slotsG[snum])
		{
		case 1:
		{
			//  draw diamond
			drawdiamond();
			break;
		} // case 1
		case 2:
		{
			//  draw seven
			drawseven();
			break;
		} // case 2
		case 3:
		{
			// draw lightning
			drawlightning();
			break;
		} // case 3
		case 4:
		{
			//  draw club
			drawclub();
			break;
		} // case 4
		case 5:
		{
			// draw moneybag
			drawmoneybag();
			break;
		} // case 5
		case 6:
		{
			//  draw cherry
			drawcherry();
			break;
		} // case 6
		default:
		{
			// probably shouldn't happenn... XD
			drawclub();

			break;
		}// default
		}// switch

	} // for



} // drawslots()

void drawslots()
{
	cout << setw(slotoffset) << right << spc << slotdashes << endl;
	for (dnum = 1; dnum < 6; ++dnum)
	{
		cout << setw(slotoffset) << right << spc << slots[0][dnum]
			<< slots[1][dnum]
			<< slots[2][dnum] << endl;
	}
	cout << setw(slotoffset) << right << spc << slotdashes << endl;
	for (dnum = 1; dnum < 6; ++dnum)
	{
		cout << setw(slotoffset) << right << spc << slots[3][dnum]
			<< slots[4][dnum]
			<< slots[5][dnum] << endl;
	}
	cout << setw(slotoffset) << right << spc << slotdashes << endl;
	for (dnum = 1; dnum < 6; ++dnum)
	{
		cout << setw(slotoffset) << right << spc << slots[6][dnum]
			<< slots[7][dnum]
			<< slots[8][dnum] << endl;
	}
	cout << setw(slotoffset) << right << spc << slotdashes << endl;

}

void check1slots()
{
	if (slotsG[3] == slotsG[4] && slotsG[4] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line1multiplyer);
	} // if, check center slots
	else if (slotsG[3] == 4 && slotsG[4] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line1multiplyer);
	} // if, check if center left is a club for winner
	else if (slotsG[3] == 4 && slotsG[4] == 4)
	{
		win = true;
		roundgains += (bet * line1multiplyer);
	} // if, check if center left and center are clubs for winner
	else if (slotsG[4] == 4 && slotsG[3] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line1multiplyer);
	} // if, check if center is a club for winner
	else if (slotsG[3] == 4 && slotsG[5] == 4)
	{
		win = true;
		roundgains += (bet * line1multiplyer);
	} // if, check if center left and center right are clubs for winner
	else if (slotsG[5] == 4 && slotsG[3] == slotsG[4])
	{
		win = true;
		roundgains += (bet * line1multiplyer);
	} // if, check if center right is a club for winner
	else if (slotsG[4] == 4 && slotsG[5] == 4)
	{
		win = true;
		roundgains += (bet * line1multiplyer);
	} // if, check if center and center right are clubs for winner

}

void check3slots()
{
	if (slotsG[3] == slotsG[4] && slotsG[4] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line1won = true;
	} // if, check center slots
	else if (slotsG[3] == 4 && slotsG[4] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line1won = true;
	} // if, check if center left is a club for winner
	else if (slotsG[3] == 4 && slotsG[4] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line1won = true;
	} // if, check if center left and center are clubs for winner
	else if (slotsG[4] == 4 && slotsG[3] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line1won = true;
	} // if, check if center is a club for winner
	else if (slotsG[3] == 4 && slotsG[5] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line1won = true;
	} // if, check if center left and center right are clubs for winner
	else if (slotsG[5] == 4 && slotsG[3] == slotsG[4])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line1won = true;
	} // if, check if center right is a club for winner
	else if (slotsG[4] == 4 && slotsG[5] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line1won = true;
	} // if, check if center and center right are clubs for winner

	if (slotsG[0] == slotsG[1] && slotsG[1] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line2won = true;
	} // if, check top slots
	else if (slotsG[0] == 4 && slotsG[1] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line2won = true;
	} // if, check if top left is a club for winner
	else if (slotsG[0] == 4 && slotsG[1] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line2won = true;
	} // if, check if top left and top are clubs for winner
	else if (slotsG[1] == 4 && slotsG[0] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line2won = true;
	} // if, check if top is a club for winner
	else if (slotsG[0] == 4 && slotsG[2] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line2won = true;
	} // if, check if top left and top right are clubs for winner
	else if (slotsG[2] == 4 && slotsG[0] == slotsG[1])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line2won = true;
	} // if, check if top right is a club for winner
	else if (slotsG[1] == 4 && slotsG[2] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line2won = true;
	} // if, check if top and top right are clubs for winner

	if (slotsG[6] == slotsG[7] && slotsG[7] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line3won = true;
	} // if, check bottom slots
	else if (slotsG[6] == 4 && slotsG[7] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line3won = true;
	} // if, check if bottom left is a club for winner
	else if (slotsG[6] == 4 && slotsG[7] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line3won = true;
	} // if, check if bottom left and bottom are clubs for winner
	else if (slotsG[7] == 4 && slotsG[6] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line3won = true;
	} // if, check if bottom is a club for winner
	else if (slotsG[6] == 4 && slotsG[8] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line3won = true;
	} // if, check if bottom left and bottom right are clubs for winner
	else if (slotsG[8] == 4 && slotsG[6] == slotsG[7])
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line3won = true;
	} // if, check if bottom right is a club for winner
	else if (slotsG[7] == 4 && slotsG[8] == 4)
	{
		win = true;
		roundgains += (bet * line3multiplyer);
		line3won = true;
	} // if, check if bottom and bottom right are clubs for winner

}

void check5slots()
{
	if (slotsG[3] == slotsG[4] && slotsG[4] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line1won = true;
	} // if, check center slots
	else if (slotsG[3] == 4 && slotsG[4] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line1won = true;
	} // if, check if center left is a club for winner
	else if (slotsG[3] == 4 && slotsG[4] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line1won = true;
	} // if, check if center left and center are clubs for winner
	else if (slotsG[4] == 4 && slotsG[3] == slotsG[5])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line1won = true;
	} // if, check if center is a club for winner
	else if (slotsG[3] == 4 && slotsG[5] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line1won = true;
	} // if, check if center left and center right are clubs for winner
	else if (slotsG[5] == 4 && slotsG[3] == slotsG[4])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line1won = true;
	} // if, check if center right is a club for winner
	else if (slotsG[4] == 4 && slotsG[5] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line1won = true;
	} // if, check if center and center right are clubs for winner

	if (slotsG[0] == slotsG[1] && slotsG[1] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line2won = true;
	} // if, check top slots
	else if (slotsG[0] == 4 && slotsG[1] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line2won = true;
	} // if, check if top left is a club for winner
	else if (slotsG[0] == 4 && slotsG[1] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line2won = true;
	} // if, check if top left and top are clubs for winner
	else if (slotsG[1] == 4 && slotsG[0] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line2won = true;
	} // if, check if top is a club for winner
	else if (slotsG[0] == 4 && slotsG[2] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line2won = true;
	} // if, check if top left and top right are clubs for winner
	else if (slotsG[2] == 4 && slotsG[0] == slotsG[1])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line2won = true;
	} // if, check if top right is a club for winner
	else if (slotsG[1] == 4 && slotsG[2] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line2won = true;
	} // if, check if top and top right are clubs for winner

	if (slotsG[6] == slotsG[7] && slotsG[7] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line3won = true;
	} // if, check bottom slots
	else if (slotsG[6] == 4 && slotsG[7] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line3won = true;
	} // if, check if bottom left is a club for winner
	else if (slotsG[6] == 4 && slotsG[7] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line3won = true;
	} // if, check if bottom left and bottom are clubs for winner
	else if (slotsG[7] == 4 && slotsG[6] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line3won = true;
	} // if, check if bottom is a club for winner
	else if (slotsG[6] == 4 && slotsG[8] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line3won = true;
	} // if, check if bottom left and bottom right are clubs for winner
	else if (slotsG[8] == 4 && slotsG[6] == slotsG[7])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line3won = true;
	} // if, check if bottom right is a club for winner
	else if (slotsG[7] == 4 && slotsG[8] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line3won = true;
	} // if, check if bottom and bottom right are clubs for winner

	if (slotsG[0] == slotsG[4] && slotsG[4] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line4won = true;
	} // if, check 1-9 diagonal slots
	else if (slotsG[0] == 4 && slotsG[4] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line4won = true;
	} // if, check if top left is a club for winner
	else if (slotsG[0] == 4 && slotsG[4] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line4won = true;
	} // if, check if top left and center are clubs for winner
	else if (slotsG[4] == 4 && slotsG[0] == slotsG[8])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line4won = true;
	} // if, check if top is a club for winner
	else if (slotsG[0] == 4 && slotsG[8] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line4won = true;
	} // if, check if top left and bottom right are clubs for winner
	else if (slotsG[8] == 4 && slotsG[0] == slotsG[4])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line4won = true;
	} // if, check if top right is a club for winner
	else if (slotsG[4] == 4 && slotsG[8] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line4won = true;
	} // if, check if center and bottom right are clubs for winner

	if (slotsG[6] == slotsG[4] && slotsG[4] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line5won = true;
	} // if, check 7-3 diagonal slots
	else if (slotsG[6] == 4 && slotsG[4] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line5won = true;
	} // if, check if bottom left is a club for winner
	else if (slotsG[6] == 4 && slotsG[4] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line5won = true;
	} // if, check if bottom left and center are clubs for winner
	else if (slotsG[4] == 4 && slotsG[6] == slotsG[2])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line5won = true;
	} // if, check if center is a club for winner
	else if (slotsG[6] == 4 && slotsG[2] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line5won = true;
	} // if, check if bottom left and top right are clubs for winner
	else if (slotsG[2] == 4 && slotsG[4] == slotsG[6])
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line5won = true;
	} // if, check if top right is a club for winner
	else if (slotsG[4] == 4 && slotsG[2] == 4)
	{
		win = true;
		roundgains += (bet * line5multiplyer);
		line5won = true;
	} // if, check if center and top right are clubs for winner


}

void slotswonmessages()
{
	if (win && lines == 1)
	{
		wallet += stake;
		wallet += roundgains;
		totalgains += (bet * line1multiplyer);
		cout << winline1 << endl;
	}

	if (win && lines == 3)
	{
		wallet += stake;
		wallet += roundgains;
		totalgains += (bet * line3multiplyer);

		if (line1won)
		{
			cout << winline1 << endl;
		}
		if (line2won)
		{
			cout << winline2 << endl;
		}
		if (line3won)
		{
			cout << winline3 << endl;
		}
	}

	if (win && lines == 5)
	{
		wallet += stake;
		wallet += roundgains;
		totalgains += (bet * line5multiplyer);

		if (line1won)
		{
			cout << winline1 << endl;
		}
		if (line2won)
		{
			cout << winline2 << endl;
		}
		if (line3won)
		{
			cout << winline3 << endl;
		}
		if (line4won)
		{
			cout << winline4 << endl;
		}
		if (line5won)
		{
			cout << winline5 << endl;
		}
	}
}

void checkcorrespondingslots()
{

	line1won = false;
	line2won = false;
	line3won = false;
	line4won = false;
	line5won = false;

	switch (lines)
	{
	case 1:
	{
		//  lines chosen
		check1slots();

		break;
	} // case 1
	case 3:
	{
		// 3 lines chosen
		check3slots();

		break;
	} // case 3
	case 5:
	{
		// 5 lines chosen
		check5slots();

		break;
	} // case 5
	} // switch
}

void endofroundmessage()
{
	cout << end1 << bet
		<< end2 << lines
		<< end3 << stake << endl;
}

void endofroundmessage2()
{
	cout << endl
		<< before << prewallet << endl
		<< after << wallet << endl;
}

void checkwinrate()
{
	temp2 = rand() % 100 + 1;

	if (temp2 <= winrate)
	{
		// winner
		// make them win :D
		cout << trywin << endl;
		do
		{
			if (!q.empty())
			{
				clearqueue();
			}
			generateslots();
			predrawslots();
			checkcorrespondingslots();

		} while (!win);

		drawslots();
		slotswonmessages();
		wins += 1;
		totalgains += roundgains;
		cout << won << roundgains << ep << endl;
	}
	else if (temp2 > winrate)
	{
		// loser
		// make them lose >:D
		cout << trylose << endl;
		do
		{
			win = false;

			if (!q.empty())
			{
				clearqueue();
			}
			generateslots();
			predrawslots();
			checkcorrespondingslots();

		} while (win);

		drawslots();
		loses += 1;
		totalloses += stake;
		cout << lost << stake << ep << endl;
	}

}

void playgame()
{
	do
	{
		system("CLS");
		bigslotsletters();
		displaykeystats();

		cout << betlines;
		cin >> choice;
		valid = false;
		lines = 1;
		// Player chooses # of lines
		switch (choice)
		{
		case 1:
		{
			//  lines chosen
			valid = true;
			lines = 1;

			break;
		} // case 1
		case 3:
		{
			// 3 lines chosen
			valid = true;
			lines = 3;

			break;
		} // case 3
		case 5:
		{
			// 5 lines chosen
			valid = true;
			lines = 5;

			break;
		} // case 5
		default:
		{
			cout << invalid << endl;
			system("pause");

			break;
		}// default
		}// switch
	} while (!valid);

	// player choses bet amount
	do
	{
		system("CLS");
		bigslotsletters();
		displaykeystats();

		maxbet = (wallet / lines);
		cout << maxpossible << maxbet << endl;
		cout << betamount << endl;
		cout << bet0 << endl;

		valid = false;
		cin >> bet;

		if (bet < 0)
		{
			cout << negerror << endl;
			system("pause");
		}
		else if (bet > maxbet)
		{
			cout << paydebterror << endl;
			system("pause");
		}
		else if (bet >= 0 || bet <= maxbet)
		{
			valid = true;
		}

	} while (bet < 0 || bet > maxbet || valid == false);

	win = false;
	roundgains = 0;
	prewallet = wallet;
	stake = (bet * lines);
	wallet -= stake;
	respin = false;

	if (stake > greateststake)
		greateststake = stake;
	system("CLS");
	/* ORIGINAL
	checkwinrate();
	endofroundmessage();
	endofroundmessage2();
	*/

	do
	{
		checkwinrate();
		endofroundmessage();
		endofroundmessage2();
		
		// increment the values of bank and debt
		if (bet > 0)
		{
			bankinterest();
			debtinterest();
		}
		
		cout << replaymessage;
		cin >> respin;

		if (respin)
		{
			system("CLS");
			win = false;
			roundgains = 0;
			prewallet = wallet;
			stake = (bet * lines);

			if (wallet >= stake)
			{
				wallet -= stake;
			}
			else
			{
				cout << "Not Enough Money, Returning to Menu..." << endl << "You were short $" << (stake - wallet) << endl;
				respin = false;
			}
		}

	} while (respin);
}

void multiquickspin()
{
	cout << "Welcome to the Multi Quick Spin option!" << endl << "Please Enter Number of Times to Spin: ";
	int temp99;
	cin >> temp99;

	for (int counter99 = 1; counter99 <= temp99; ++counter99)
	{

	}
}

void menu()
{
	system("CLS");
	bigboyletters();
	displaykeystats();

	cout << intro1 << outro1 << endl;
	cout << intro2 << outro2 << endl;
	cout << intro3 << outro3 << endl;
	cout << intro4 << outro4 << endl;
	cout << intro5 << outro5 << endl;

	choice = 5;
	valid = false;

	do
	{
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			// Display Rules and Credits
			valid = true;

			displayrules();
			displaycredits();
			menu();
			break;
		} // case 1
		case 2:
		{
			// Wallet
			valid = true;

			managewallet();
			system("pause");

			menu();
			break;
		} // case 2
		case 3:
		{
			// Play Game
			valid = true;

			playgame();
			system("pause");
			menu();
			break;
		} // case 3
		case 4:
		{
			// Play Game X number of times
			valid = true;
			multiquickspin();
			menu();
			break;
		} // case 4
		case 5:
		{
			// purposely left blank
			valid = true;

			break;
		} // case 5

		default:
		{
			valid = false;
			cout << invalid << endl;
			system("pause");

			menu();
			break;
		}// default
		}// switch

	} while (choice != 5 || !valid);
	//} // moving this
}

int main()
{
	/***************************************************
	* The Line below is required to always generate new*
	* random numbers after restarting the program. w/o *
	* it, it would always generate the same results    *
	***************************************************/
	//SetConsoleWindowSize(100, 35);
	srand(time(NULL));
	system("color 0E");
	hdr();
	blankbox();
	welcomescreen();
	menu();
	printresults();
	blankbox();
	ftr();
	blankbox();
	eof();
	barline();
	system("pause");

	ofs.close(); // closing the file
	return 0;
}