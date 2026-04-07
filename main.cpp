#include <iostream>

using namespace std;

int main() {
int teaspoons;
cout << "Enter the number of teaspoons: ";
cin >> teaspoons;
int teaspoonsPerTablespoon = 3;
int teaspoonsPerCup = 16 * teaspoonsPerTablespoon;
int teaspoonsPerQuart = 4 * teaspoonsPerCup;
int quarts = teaspoons / teaspoonsPerQuart;
int remaining = teaspoons % teaspoonsPerQuart;
int cups = remaining / teaspoonsPerCup;
remaining = remaining % teaspoonsPerCup;
int tablespoons = remaining / teaspoonsPerTablespoon;
int tsp = remaining % teaspoonsPerTablespoon;
cout << quarts << " quart(s)" << endl;
cout << cups << " cup(s)" 
}
