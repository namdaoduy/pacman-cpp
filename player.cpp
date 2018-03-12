// player.cpp
//      This file defines class Player :)
//      and it's methods

class Player {
  private:
    // position x, y
    int pos_x;
    int pos_y;

    // current direction of player
    // up: w
    // left: a
    // right: d
    // down: s
    char direction;


  public:
    // Get method
    int getPosX();
    int getPosY();
    char getDir();

    // Set method
    int setPosX(int);
    int setPosY(int);
    int setDir(char);
};






// get x position of player
int Player::getPosX() {
    return pos_x;
}

// get y position of player
int Player::getPosY() {
    return pos_y;
}

// get direction
char Player::getDir() {
    return direction;
}




// set value to position x of player
int Player::setPosX(int val) {
    pos_x = val;
}

// set value to position y of player
int Player::setPosY(int val) {
    pos_y = val;
}

// set direction
int Player::setDir(char val) {
    direction = val;
}
