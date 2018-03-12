#include <iostream>

using namespace std;


class Map {
  public:
    char** init();
    int display(char**);
};




char** Map::init() {
    char **map;
    map = new char *[9];
    for(int i = 0; i < 9; i++)
        map[i] = new char[9];

    // create wall
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            map[i][j] = '#';
        }
    }

    // create fooood
    for (int i = 1; i < 8; i++) {
        for (int j = 1; j < 8; j++) {
            map[i][j] = '.';
        }
    }

    
    return map;
}


int Map::display(char** map) {
    // print map
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << ' ' << map[i][j];
        }
        cout << endl;
    }

}
