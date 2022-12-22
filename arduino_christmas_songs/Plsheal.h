#ifndef Plsheal_h
#define Plsheal_h


class PLSHEAL {
  private:
    int myPin;
  public:
    PLSHEAL(int);
    void playFirstSong(int, int, int, int);
    void playSecondSong(int, int, int, int);
    void playThirdSong(int, int, int, int);
};

#endif