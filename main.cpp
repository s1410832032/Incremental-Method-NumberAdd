#include <iostream>
using namespace std;

void copy(char bef[]){
  int j=0;
  for (int x=0;bef[x] !=0;x++)
    j++;
  int i =0;
  char aft[j];
  for(i=0;bef[i] != '\0';i++)
    aft[i]=bef[i];
  aft[i]='\0';
  cout << "finish copy:" << aft;
}

int main() {
  char bef[15] = "incremental";
  char aft[15];
  int i=0;

  for (i=0 ; bef[i] != '\0' ; i++)
    aft[i]=bef[i];
  aft[i]='\0';

  cout << "Sentence to copy: " << bef << "\n";
  cout << "the result:" << aft <<"\n";

  copy(bef);

return 0;
}