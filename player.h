// complete declaration
class Player {
  private:
    // position x, y
    int pos_x;
    int pos_y;

    // current direction of player
    char direction;

  public:
    // Get position x, y: they call this func to get pos
    int getPosX();
    int getPosY();
    char getDir();
    // Set position x, y
    int setPosX(int);
    int setPosY(int);
    int setDir(char);
};
