// fig 10.22
// proxy class def
/*Clents sees this source code, but it doesn't reveal the data layout of class implemetation*/
class Implementation;

class Interface
{
private:
    Implementation * ptr; // requires previous forward declaration (line 4)
public:
    Interface(int);
    ~Interface();
    void setValue(int);
    int getValue() const;

};


