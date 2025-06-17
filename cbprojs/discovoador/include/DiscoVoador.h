#ifndef DISCOVOADOR_H
#define DISCOVOADOR_H


class DiscoVoador
{
    public:
        DiscoVoador();
        ~DiscoVoador();
        DiscoVoador& operator=(const DiscoVoador& other);

        unsigned int Getcarga() { return carga; }
        void Setcarga(unsigned int val) { carga = val; }

        void dispararLasers();

    protected:

    private:
        unsigned int carga;
};

#endif // DISCOVOADOR_H
