// Write your Student class here

class Student {
    int scores[5];
    public:
        void input();
        int calculateTotalScore();
    ;
};

void Student::input() {
    for(int i = 0; i < 5; i++) {
        cin >> scores[i];
    }
}

int Student::calculateTotalScore() {
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    return sum;
}
