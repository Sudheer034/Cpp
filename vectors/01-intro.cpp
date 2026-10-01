#include <iostream>
#include <vector> // FINALLY WE REAHCED FINAL DESTINATION OF MY CPP PATH1!

// VECTORS, MAN for this I learned CPP, i thought vectors was physics, thing, but it turned
// out to be bummer, but im still glad i learned cpp though

using std::cout;
using std::cin;
using std::endl;

using std::vector;

int main(void)
{
  vector<int> a = {1,2,3}; // Vector Declaration!

  a.push_back(54); // Pushing the element onto the back

  for(int a: a) // until now, i didn't this existed ><, i think its called range based loop
    cout << a << endl;

  int at = a.at(2); // at position index
  cout << "At pos: "<< at << endl << endl;

  a.erase(a.begin() + 3); // erasing an idex, the inputs are bit weird though, maybe it is due to its a class

  for(int a : a)
    cout << a << endl;

  a.clear(); // WE are CLearing the DAta!!
  return 0;
}