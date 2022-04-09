#include <iostream>
using namespace std;

struct project{
  /*data*/
  char title;
  int members;
  float salary;
};
int main()
{
    struct project entangelment;
    entangelment.title = 'w';
    entangelment.members = '5';
    entangelment.salary = 12000;

    struct project blackhole;
    blackhole.title = 'b';
    blackhole.members = 'n';
    blackhole.salary = 13000;

    cout<<"the complete info of project entangelment-"<<endl;

    cout<<"the title of entangelment "<<entangelment.title<<endl;
    cout<<"the members in entangelment "<<entangelment.members<<endl;
    cout<<"the salary after completion of entangelment "<<entangelment.salary<<endl;

    cout<<"the complete info of project blackhole -"<<endl;

    cout << "the code title of project blackhole " << blackhole.title << endl;
    cout << "the code members in blackhole " << blackhole.members << endl;
    cout << "the salary given after completing of project blackhole " << blackhole.salary << endl;

    return 0;
}
