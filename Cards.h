#include <iostream>

class Cards
{
private:
    void setPoints(int value);

protected:
    string name;
    int point;

public:
    Cards(string name);
    int getPoints() { return points; }
    string getName() { return name; }
    virtual void Play();


};

class SalmonNigiri: public Cards
{
    void Play()
    {
        setPoints(2);
    }
};

class SquidNigiri: public Cards
{
    void Play()
    {
        setPoints(3);
    }
};

class EggNigiri: public Cards
{
    void Play()
    {
        setPoints(1);
    }
};

class Wasabi: public Cards
{
    void Play()
    {
        //Next card if it is a nigiri x 3
    }
};

class Pudding: public Cards
{
    void Play()
    {
        
    }
}