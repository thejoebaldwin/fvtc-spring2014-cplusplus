#include "SuperHero.h"


SuperHero::SuperHero()
{
    _name = "Name Missing";
    _power = "Power Missing";
    _secret = "Unknown";
    _age = -1;
}
SuperHero::SuperHero(string name, string power, string secret, int age)
{
    _name = name;
    _power = power;
    _secret = secret;
    _age = age;
}

void SuperHero::RevealSecretIdentity()
{
    _name = _secret;
}

ostream& operator<<(ostream& out, SuperHero& s)
{
    out << s._name << endl;
    return out;
}
//getters
 string SuperHero::name()
 {
     return _name;
 }
 string SuperHero::power()
 {
     return _power;
 }
 string SuperHero::secret()
 {
     return _secret;
 }
 int SuperHero::age()
 {
     return _age;
 }
 //setters
 void SuperHero::set_name(string name)
 {
    _name = name;
 }
 void SuperHero::set_power(string power)
 {
    _power = power;
 }
 void SuperHero::set_secret(string secret)
 {
    _secret = secret;
 }
 void SuperHero::set_age(int age)
 {
    _age = age;
 }
