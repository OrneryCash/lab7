#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "Fahsai: Sawadee ka...Can you tell me your name?\n"; 
  cout << "?????: ";
  string name;
  getline(cin, name);
  cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
  cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
  cout << name << ": ";
  string id;
  cin >> id;
  cin.ignore();
  int gear = (id[0]-'0')*10 + id[1]-'0' - 12;
  cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n";
  cout << "Fahsai: Let's go to the cinema together!!!\n";
  cout << "Fahsai: What movie do you want to watch?\n";
  cout << name << ": ";
  string movie;
  getline(cin, movie);
  cout << "Fahsai: So....which day are you free to go with me?\n";
  cout << name << ": ";
  string day;
  getline(cin, day);
  cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
  cout << name << ": ";
  string phrase;
  getline(cin, phrase);
  cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";
}
