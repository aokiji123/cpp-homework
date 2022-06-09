#include <iostream> 
using namespace std; 


int main() {
  int spearmanHp;
  int spearmanAttack;
  int amountOfSpearmen;
  int spearmanHpLeft;
  int dragonHp;
  int dragonAttack;

  cout << "Enter spearman hp: ";
  cin >> spearmanHp;
  cout << "Enter spearman attack: ";
  cin >> spearmanAttack;
  cout << "Enter amount of spearmen: ";
  cin >> amountOfSpearmen;

  cout << "Enter dragon hp: ";
  cin >> dragonHp;
  cout << "Enter dragon attack: ";
  cin >> dragonAttack;

  int generalHp = spearmanHp * amountOfSpearmen;
  int generalAttack = spearmanAttack * amountOfSpearmen;

  while (true) {
    generalAttack = spearmanAttack * amountOfSpearmen;
    dragonHp = dragonHp - generalAttack;
    if (dragonHp <= 0) {
      cout << "Spearmen won!\n\n";
      return 0;
    } else {
      cout << "\nSpearmen are attacking: " << generalAttack << "\nDragon's HP left: " << dragonHp << "\n\n";
    }

    if ((generalHp - dragonAttack) % spearmanHp == 0) {
      amountOfSpearmen = (generalHp - dragonAttack) / spearmanHp;
      generalHp = (spearmanHp * amountOfSpearmen);
      if (generalHp <= 0) {
        cout << "Dragon attacked and won!\n\n";
        return 0;
      } else {
        cout << "Dragon is attacking: " << dragonAttack << "\nSpearmen left: " << amountOfSpearmen << "\n";
      }
    } else {
      spearmanHpLeft = spearmanHp - (generalHp - dragonAttack) % spearmanHp;
      amountOfSpearmen = (generalHp - dragonAttack - spearmanHpLeft) / spearmanHp + 1;
      generalHp = (spearmanHp * amountOfSpearmen) - spearmanHpLeft;
      if (generalHp <= 0) {
        cout << "Dragon attacked and won!\n\n";
        return 0;
      } else {
        cout << "Dragon is attacking: " << dragonAttack << "\nSpearmen left: " << amountOfSpearmen << "\nOn of spearmen hp left: " << spearmanHpLeft << "\n";
      }
    }
  }
}