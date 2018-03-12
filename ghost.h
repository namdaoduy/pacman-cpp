// complete declaration
class Ghost {
  private:
    // position x, y
    int pos_x;
    int pos_y;

    // current direction of Ghost
    char direction;

  public:
    // Get position x, y: they call this func to get pos
    int getPosX();
    int getPosY();
    char setDir();
    // Set position x, y
    int setPosX(int);
    int setPosY(int);
    int setDir(char);
};

// ok now?