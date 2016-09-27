#ifndef DRAWABLE_HPP
#define DRAWABLE_HPP

class Drawable
{
public:
    Drawable();
    ~Drawable();

    void draw(int x, int y);

public:
    void loadFromFile(std::string path);

private:
    vector2 size;
    char** matrix;
};

#endif
