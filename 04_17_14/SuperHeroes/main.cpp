#include <iostream>
#include "SuperHero.h"

using namespace std;

int main()
{
    SuperHero s("Captain America",
                 "Super Soldier Serum",
                 "Steve Rogers",
                 95);
    //s.set_name("Captain America");
    cout << s << endl;
    s.RevealSecretIdentity();
    cout << "After Reveal:" << s << endl;
    cout << "**********************" << endl;
    SuperHero hulk;
    hulk.set_name("Incredible Hulk");
    hulk.set_power("Hulk Smash");
    hulk.set_secret("Bruce Banner");
    hulk.set_age(41);
    cout << hulk << endl;

    return 0;
}
