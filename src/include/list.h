#include <iostream>
#include <vector>
using namespace std;


class List {
    private:
    protected:
    public: 
    List(){
        //Constructor
    }
    ~List(){
        //destructor
    }

    vector <string> list;       //vector<datatye> name; asi se pone el vector
    string name;

    void print_menu(); //lo pone primero para que el compilador sepa que existe
    void print_list();
    void add_item();
    void delete_item();
};