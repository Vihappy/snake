class Foco
{
private:
   bool encendido; 
public:

    Foco(/* args */) {}
    ~Foco() {}
    void Encender (){
        this->encendido = true;
    }
    void Apagar(){
        this->encendido = false;
    }
};