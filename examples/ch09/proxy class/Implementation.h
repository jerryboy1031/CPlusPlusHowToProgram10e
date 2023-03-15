// fig 10.21

class Implementation{
public:
    Implementation(int v)
    :value(v) // initialize value with v
    {
        // empty body
    }
    void setValue(int v){
        value=v;
    }
    int getValue() const{
        return value;
    }

private:
    int value; // data that we would like to hide from the client
// clients will never see the private data of implemetation class, nor clients' codes become dep on the class code.   
};