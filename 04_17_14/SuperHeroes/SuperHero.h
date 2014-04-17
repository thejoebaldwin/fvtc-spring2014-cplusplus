#ifndef SUPERHERO_H_INCLUDED
#define SUPERHERO_H_INCLUDED
#include <iostream>

using namespace std;


class SuperHero
{
private:
    //private variables
    string _name;
    string _power;
    string _secret;
    int _age;
public:
    SuperHero();
    SuperHero(string,string,string,int);
    //~SuperHero();
    //getters
    string name();
    string power();
    string secret();
    int age();
    //setters
    void set_name(string);
    void set_power(string);
    void set_secret(string);
    void set_age(int);
    void RevealSecretIdentity();
    friend ostream& operator<<(ostream&, SuperHero&);
};

#endif // SUPERHERO_H_INCLUDED
