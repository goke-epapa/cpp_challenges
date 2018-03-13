/* Define the exception here */

class BadLengthException: public exception {
    int n;
    public:
        BadLengthException(int n);
        int what();
    ;
};

BadLengthException::BadLengthException(int nIn){
    n = nIn;
}

int BadLengthException::what() {
    return n;
}
