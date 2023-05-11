#include<iostream>
#include<ctime>
#include<cstdlib> 
#include<string>

using namespace std;

int main() {


	unsigned seed = time(0);
	srand(seed);

	char Again = 'y';


	while (Again=='y')
	{

		int StarBurst = 17;
		char SB = 'SB';
		// Current problem is having one input for 2 datatypes

		//atoi

		int BossHealth = 100;
		int Dmg = 0;
		int PlayerHealth = 50;
		int Crit;
		int RegenBoss1 = rand() % 10 + 1;
		int RegenBoss2 = rand() % 10 + 1;
		int Fcounter = 0;
		// plan for special ability:
		// burning/poison/status effects

		while (BossHealth >= 1 || PlayerHealth < 1) {

			int BossBlock = rand() % 10 + 1;
			int BossDmg = rand() % 10 + 1;


			if (Fcounter == 30) {
				cout << " YOu've FUCK UP";
				return -1;
			}
			Fcounter++;
			if (PlayerHealth < 1) {
				cout << "You've died" << endl;
				return -1;
			}

			cout << "The BossHealth is: " << BossHealth << endl;
			cout << "The Boss:        (0'_'0)\n" << endl;

			cout << "Your Health is: " << PlayerHealth << endl;
			cout << "You:             Q(-_-Q)\n" << endl;

			
		//	cout << "If you want to use your special Ability \"StarBurst\" input 'SB' ";




			Crit = rand() % 6 + 5;

			if (Crit > 1 && Crit < 10) {
				cout << "The Crit is between 5 and 10\n\n";
				//I don't need this "if" statement.
			}

			cout << "Enter Damage Number between 5 and 10 \n\n";
			//	cout << "the block number is: " << BossBlock << endl;
			//	cout << "this is the Crit num is: " << Crit << endl << endl;

			cin >> Dmg;

			while (Dmg > 10 || Dmg <= 4)
			{
				cout << "You can't enter that number try again please.";
				cin >> Dmg;
			}



			/*if (Dmg == 'SB')
			{
				Dmg = 17;
			}*/


			cout << "\n-------------------------------------------------\n";


			if (BossBlock == Dmg) {
				Dmg = Dmg * 0;
				cout << "The Boss Blocked your Damage!\n\n";
			}
			else if (Dmg == Crit) {
				Dmg = Dmg * 2;
				cout << "You've dealt DOUBLE DAMAGE!!!\n\n\n";

			}

			if (RegenBoss1 == RegenBoss2) {
				BossHealth += 10;
				cout << "The Boss healed +10 Hp" << endl;
				PlayerHealth += 3;
				cout << "and you healed 3 Hp" << endl;
				//heal boss by 10 hp 
			}
			else { PlayerHealth++; }

			cout << "You've dealt " << Dmg << " Dmg!" << endl;

			cout << "You've healed +1 health!" << endl << endl;

			BossHealth = BossHealth - Dmg;
			PlayerHealth = PlayerHealth - BossDmg;

			cout << "You've taken " << BossDmg << " Damage!" << endl;

		}
		cout << "He got Destroyed \n\n ";
		if (BossHealth < 0) {
			cout << "for real this time!!!!!\n\n";
		}

		cout << "Do you want to play again if so press 'y'.\n\n";
		cin >> Again;

	}
	
	return 0;
}
