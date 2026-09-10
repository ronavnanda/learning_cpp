#include <iostream>
#include <string>

//this line makes it so that u can take the std out from std::cout<<"..."; ==> count<<"...";
using namespace std;

class child{
    float dna;
    public:
        string name;
        void think(){
            cout<<"thinking...\n";
        }
        void walk(int speed){
            int x = speed;
        }
        void walk(float speed){
            float n = speed;
        }
        void run();
};

void child::run(){
    cout<<"running...\n";
}

int main() {
    cout<<"Hello Citadel!\n";

    //string variable
    char HRT[] = "Please accept me";
    cout<<"HRT: "<<HRT<<endl;

    //same as above but with stringtype
    string Citadel = "I am king";
    cout<<"Citadel: "<<Citadel<<endl;

    cout<<"\n";

    child leclercKid;
    leclercKid.name = "Charles Leclerc";
    cout<<"Child's name is: " <<leclercKid.name<<endl;
    leclercKid.think();
    leclercKid.run();

    //neccessary to end code
    return 0;
}
