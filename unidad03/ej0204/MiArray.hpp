#ifndef MIARRAY_HPP
#define MIARRAY_HPP
#include <cstddef>

class MiArray {
    private:
        float *numeros;
        size_t tamanio;
    public:
        MiArray(size_t tamanio);
        ~MiArray();
        void Valor(float val, const unsigned int pos);
        float Valor(const unsigned int pos);
};

#endif