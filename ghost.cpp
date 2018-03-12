// Ghost.cpp
//      This file defines class Ghost :)
//      and it's methods

// It's kind of structure, but more handsome :)
class Ghost {
  // private mean others func outside this object
  // have no permission to use these variables. (thanks)
  private:
    // position x, y
    int pos_x;
    int pos_y;

    // current direction of Ghost
    // up: w
    // left: a
    // right: d
    // down: s
    char direction;

    

  // public means u know what i mean (ok)
  // So we'll put some method (func) that others can access (ok)
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

// get x position of Ghost
int Ghost::getPosX() {
    return pos_x;
}

// get y position of Ghost
int Ghost::getPosY() { //why? wait, i want to make sure it run first
    return pos_y;
}

// get direction
char Ghost::getDir() {
    return direction;
}




// set value to position x of Ghost
int Ghost::setPosX(int val) {
    pos_x = val;
}

// set value to position y of Ghost
int Ghost::setPosY(int val) {
    pos_y = val;
}

// set direction
int Ghost::setDir(char val) {
    direction = val;
}
