#include <iostream>

class Cards
{
protected:
    string name;
    int point;

    setPoints(int value);

public:
    Cards(string name, int point);
    int getPoints() { return points; }
    string getName() { return name; }
    virtual void Play();

}

