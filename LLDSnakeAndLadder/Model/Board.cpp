class Board
{
private:
    int size;
    vector<Snake> snakes;
    vector<Ladder> ladders;

public:
    Board(int size) : size(size) {}

    void addSnake(int start, int end)
    {
        snakes.push_back(Snake(start, end));
    }

    void addLadder(int start, int end)
    {
        ladders.push_back(Ladder(start, end));
    }

    int movePlayer(int position)
    {
        for (Snake snake : snakes)
        {
            if (position == snake.start)
            {
                return snake.end;
            }
        }
        for (Ladder ladder : ladders)
        {
            if (position == ladder.start)
            {
                return ladder.end;
            }
        }
        return position;
    }
};
