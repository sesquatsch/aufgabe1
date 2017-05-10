class Simple_class {
private:
    int a; //Variable der Klasse als private um Zugriff nur ueber Funktion moeglich zu machen
public:
    Simple_class(int z); //Methoden und den Konstruktor im Header nur deklarieren 
    void set(int b);
    int get();
};
