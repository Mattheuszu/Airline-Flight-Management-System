/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class AEROFLOT {
    
    string Destination[3];
    int NumberRace;
    string TypeAircraft;
    
public:    
    
    void setDestination(string Destination[])
    {
        for (int i = 0; i < 3; i++)
            this->Destination[i] = Destination[i];
    }
    
    void setNumberRace(int NumberRace)
    {
        this->NumberRace = NumberRace;
    }
     
    void setTypeAircraft(string TypeAircraft)
    {
        this->TypeAircraft = TypeAircraft;
    }
    
    int getDestination()
    {
        return this->Destination[3];
    }
    
    int getNumberRace()
    {
        return this->NumberRace;
    }
    
    string getTypeAircraft()
    {
        return this->TypeAircraft;
    }
    
};

int main()
{
    vector <AEROFLOT> aeroflots;
    
    int Destination[3]{};
    int NumberRace;
    string TypeAircraft;
    
    for (int i = 0; i < 3; i++)
    {
        AEROFLOT aeroflot;
        cin >> Destination[3];
        aeroflot.setDestination(Destination[i]);
        
        cin >> NumberRace;
        aeroflot.setNumberRace(NumberRace);
        
        cin >> TypeAircraft;
        aeroflot.setTypeAircraft(TypeAircraft);
        
        aeroflots.push_back(aeroflot);
    }

    
    for (int i = 0; i < 3; i++) {
    for (int j = i+1; j < 3; j++) {
        if (aeroflots[i].getDestination() > aeroflots[j].getDestination()) {
            AEROFLOT temp = aeroflots[i];
            aeroflots[i] = aeroflots[j];
            aeroflots[j] = temp;
        }
    }
}

for (int i = 0; i < 5; i++)
    {
        cout << strcmp(Destination)
        cout << aeroflots[i].getDestination() << endl;
        cout << aeroflots[i].getNumberRace() << endl;
        cout << aeroflots[i].getTypeAircraft() << endl;
    }

cout << "Введите тип самолёта: ";
cin >> TypeAircraft;

for(int i = 1; i < 3; i++)
{
    if(aeroflots[i].getTypeAircraft() == TypeAircraft) cout << aeroflots[i].getTypeAircraft();
    
    else if (aeroflots[i].getTypeAircraft != TypeAircraft) cout << "Рейса не существует.";
}





    return 0;
}
