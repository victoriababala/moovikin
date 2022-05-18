#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
//¬ар≥ант 4.
//
//1.  лас У≥грашкаФ : ц≥на, назва, к≥льк≥сть на склад≥.
//
//2. ƒодатков≥ класи : УмашинаФ(на€вн≥сть дистанц≥йного керуванн€, пор€дковий номер) ≥ УмТ€ка ≥грашкаФ(матер≥ал, звук).
//¬ ус≥х класах визначити функц≥ю print Ц дл€ кожного класу з р≥зною реал≥зац≥Їю.
//
//3. ¬ класах перевантажити операц≥њ У++Ф Ц €к зб≥льшенн€ к≥лькост≥ на склад≥; У < Ф Ц €к пор≥вн€нн€ ц≥н.
class toy {
protected:
    int price;
    int q;
    string name;
public:
    toy(){}
    toy(int p1, string p2, int p3): price(p1), name(p2), q(p3) {}
    virtual void print() = 0;
   
 };

class car : public toy {
    bool remote_control;
    int  num;
public:
    car():toy(){}
    car(int p1, string p2, int p3, bool p4, int p5) : toy(p1, p2, p3) { remote_control = p4; num = p5; }
    void print() {
        cout << "The name of the entered car" << endl;
        cout << name;
        cout << endl;
        cout << endl;
        cout << "Sequence number" << endl;
        cout << num;
        cout << endl;
        cout << endl;
        if (remote_control == 0) {
            cout << "This car has no remote control" << endl;
        }
        else {
            cout << "This car has  remote control" << endl;

        }
        
        cout << "Price of this car" << endl;
        cout << price << endl << endl;
        cout << "Quantity in stock" << endl;
        cout << q;
        cout << endl;

    }
    friend void comparison(car& a1, car& a2) {
        if (a1.price > a2.price) {
            cout << "First price is greater" << endl;
        }
        else if (a1.price < a2.price) {
            cout << "Second price is greater" << endl;
        }
        else if (a1.price == a2.price) {
            cout << "Prices are the same" << endl;
        }
    }
    car operator++();
    car operator=(car p);
    car operator<(car& p);
};
car car:: operator<(car& p) {
    car a;
    a.price = price;
    comparison(a, p);
    return *this;
}
car car::operator++() {
    q++;
    return *this;
}
car car::operator=(car p) {
    name = p.name;
    num = p.num;
    remote_control = p.remote_control;
    price = p.price;
    q = p.q;
    return *this;
}
ostream& operator<<(ostream& stream, car p) {
    p.print();
    return stream;
}
class soft_toy : public toy {
protected:
    string material;
    string sound;
public:
    soft_toy():toy() {}
    soft_toy(int p1, string p2, int p3, string p4, string p5) : toy(p1, p2, p3) { material = p4; sound = p5; }
    void print() {
        cout << "The name of the entered soft toy" << endl;
        cout << name;
        cout << endl;
        cout << endl;
        cout << "The material from which the soft toy is made" << endl;
        cout << material;
       
        cout << endl;
        cout << "The sound that this soft toy makes" << endl;
        cout << sound;
        cout << endl;
        cout << "Price of this soft toy" << endl;
        cout << price << endl << endl;
        cout << "Quantity in stock" << endl;
        cout << q;
        cout << endl;
    }
    friend void comparison(soft_toy& a1, soft_toy& a2) {
        if (a1.price > a2.price) {
            cout << "First price is greater" << endl;
        }
        else if (a1.price < a2.price) {
            cout << "Second price is greater" << endl;
        }
        else if (a1.price == a2.price) {
            cout << "Prices are the same" << endl;
        }
    }
    soft_toy operator++();
    soft_toy operator=(soft_toy p);
    soft_toy operator<(soft_toy& p);
   
 };
soft_toy soft_toy::operator++() {
    q++;
    return *this;
}
soft_toy soft_toy::operator=(soft_toy p) {
    name = p.name;
    material = p.material;
    sound = p.sound;
    price = p.price;
    q = p.q;
    return *this;
}
ostream& operator<<(ostream& stream, soft_toy p) {
    p.print();
    return stream;
}
soft_toy soft_toy:: operator<(soft_toy& p) {
    soft_toy a;
    a.price = price;
    comparison(a, p);
    return *this;
}



int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    car A(5000000000, "mersedes", 15, 0, 4);
    car B(300, "Audi", 34, 1, 67);
    soft_toy Y(900, "Unicorn", 24, "fluff", "iiiiaaaaa");
    soft_toy V(300, "Unicorn", 24, "fluff", "iiiiaaaaa");
    A.print();
    cout << "----------------------" << endl;
    ++A;
    A.print();
    cout << "----------------------" << endl;
  
    cout << "----------------------" << endl;
    A.print();
    cout << "----------------------" << endl;
    cout << B;
    cout << "----------------------" << endl;
    cout << Y;
    cout << "----------------------" << endl;
    V < Y;
    cout << "----------------------" << endl;
    A < B;
    cout << endl;
    cout << endl;
    
    system("pause");
    return 0;
}