class Game
{
private:
    vector<Player> players;
    Board board;
    Dice dice;
    bool isGameOver;

public:
    Game(int boardSize, int numPlayers) : board(boardSize), dice(6), isGameOver(false)
    {
        for (int i = 0; i < numPlayers; i++)
        {
            players.push_back(Player(i, "Player" + to_string(i + 1)));
        }
    }

    void initializeGame()
    {
        // Add snakes and ladders
        board.addSnake(14, 7);
        board.addLadder(3, 22);
        // ... Add more snakes and ladders
    }

    void startGame()
    {
        while (!isGameOver)
        {
            for (Player &player : players)
            {
                int diceRoll = dice.roll();
                player.move(diceRoll);
                int newPosition = board.movePlayer(player.getPosition());

                player.move(newPosition - player.getPosition()); // Move player based on snake/ladder

                if (newPosition >= board.getSize())
                {
                    cout << player.getName() << " wins!" << endl;
                    isGameOver = true;
                    break;
                }
            }
        }
    }
};
