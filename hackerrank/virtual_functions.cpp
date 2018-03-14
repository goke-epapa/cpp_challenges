class Person {
    protected:
        string name;
        int age;
        int id;
    ;
    public:
        virtual void getdata() {};
        virtual void putdata(){};
    ;
};


class Professor: public Person {
    int publications;
    public:
        static int cur_id;
        Professor() {
            id = ++Professor::cur_id;
        }
        void getdata() {
            cin >> name >> age >> publications;
        }
        void putdata() {
            cout << name << " " << age << " " << publications << " " << id << endl;
        }
    ;
};
int Professor::cur_id = 0;

class Student: public Person {
    int marks[6];
    public:
        static int cur_id;
        Student() {
            id = ++Student::cur_id;
        }
        void getdata() {
            cin >> name;
            cin >> age;
            for(int i = 0; i < 6; i++) {
                cin >> marks[i];
            }
        }
        void putdata() {
            cout << name << " " << age << " ";
            int sum = 0;
            for(int i = 0; i < 6; i++) {
                sum += marks[i];        
            }
            cout << sum << " " << id << endl;
        }
    ;
};
int Student::cur_id = 0;
