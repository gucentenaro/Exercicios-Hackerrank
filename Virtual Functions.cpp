#include <iostream>
#include <string>
using namespace std;


class Person {
protected:  //private so pode ser acessado dentro da propria classe e protected pode ser acessado por classes que herdam
    string name;
    int age;
public:
    virtual void getdata() = 0;  // virtual => a funcao pode ser redefinida nas classes filhas, essa le os dados
    virtual void putdata() = 0;  // essa funcao virtual imprime os dados
};


class Professor : public Person {   //professor herda person
private:
    int publications;
    int cur_id;
    static int id_counter;  //usa static (estatica) quando eh informacao global compartilhada entre todos os objetos
public:
    Professor() {
        cur_id = ++id_counter;  
    }


    void getdata() override {   //usando a funcao virtual para .....
        cin >> name >> age >> publications;
    }


    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};


// Inicializacao do contador estatico
int Professor::id_counter = 0;


// Classe Student
class Student : public Person {     //classe student herda person
private:
    int marks[6];
    int cur_id;
    static int id_counter;
public:
    Student() {
        cur_id = ++id_counter;
    }


    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; ++i) {
            cin >> marks[i];
        }
    }


    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; ++i) {   //loop para somar as 6 notas
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};


int Student::id_counter = 0;


// Funcao principal
int main() {
    int n;  //numero de objetos
    cin >> n;
    Person* persons[n]; //ponteiro aponta para professor ou student


    for (int i = 0; i < n; ++i) {   //cria o objeto sendo professor ou student
        int type;
        cin >> type;
        if (type == 1) {
            persons[i] = new Professor();   //o new faz o objeto continuar existindo mesmo depois que o for termina
        } else {
            persons[i] = new Student();
        }
        persons[i]->getdata();  //depois de criado le os dados
    }


    for (int i = 0; i < n; ++i) {
        persons[i]->putdata();  //para cada objeto imprime os dados
    }


    // Opcional: desalocar memoria
    for (int i = 0; i < n; ++i) {
        delete persons[i];
    }


    return 0;
}