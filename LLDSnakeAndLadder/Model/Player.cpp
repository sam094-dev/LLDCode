class Player
{
private:
    int id;
    string name;
    int position;

public:
    Player(int id, string name) : id(id), name(name), position(0) {}

    int getPosition()
    {
        return position;
    }

    void move(int steps)
    {
        position += steps;
    }
};
