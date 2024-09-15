class Dice
{
private:
    int num_faces;

public:
    Dice(int num_faces = 6) : num_faces(num_faces) {}

    int roll()
    {
        return (rand() % num_faces) + 1;
    }
};
