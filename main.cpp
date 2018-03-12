// FILE: main.cpp

// preprocessor
#include <iostream>
#include "player.h"
#include "ghost.h"
#include "map.h"

using namespace std;

// declaration



int main() {
    // let's make some test, ok.
    Player nam;
    nam.setPosX(5);
    cout << "Pos x now is " << nam.getPosX() << endl;
    nam.setDir('d');
    cout << "dir: " << nam.getDir() << endl;


    Ghost quoc;
    quoc.setPosX(6);
    cout << "Here the ghost, quoc: " << quoc.getPosX() << endl;


    // it's time to create map
    // create the blank playground size 9x9

    char** new_map = map.init();
    map.display(new_map);
    // got it?

    return 1;
}
