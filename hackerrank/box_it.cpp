
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 


// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box


//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box {
    int l, b, h;
    public:
        Box();
        Box(int length, int breadth, int height);
        Box(Box& box);
        int getLength();
        int getBreadth();
        int getHeight();
        long long CalculateVolume();
    ;
};

Box::Box() {
    l = 0;
    b = 0;
    h = 0;
}


Box::Box(int length, int breadth, int height) {
    l = length;
    b = breadth;
    h = height;
}

Box::Box(Box& box) {
    l = box.getLength();
    b = box.getBreadth();
    h = box.getHeight();  
}

int Box::getLength() {
    return l;
}

int Box::getBreadth() {
    return b;
}

int Box::getHeight() {
    return h;    
}

long long Box::CalculateVolume() {
    return (long long) l * b * h;
}

bool operator<(Box& a, Box& b) {
    return a.getLength() < b.getLength() || 
        (a.getBreadth() < b.getBreadth() && a.getLength() == b.getLength()) ||
        (a.getHeight() < b.getHeight() && a.getBreadth() == b.getBreadth() && a.getLength() == b.getLength());
} 

ostream& operator<<(ostream& out, Box& B) {
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}


