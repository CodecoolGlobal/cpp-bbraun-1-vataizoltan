#include <iostream>

using namespace std;

struct SignedInt
{
    signed short int value;
};

struct UnsignedInt
{
    unsigned short int value;
};

int main()
{
    SignedInt signedInt;
    signedInt.value = -1;

    // TODO: reinterpret_cast signedInt to UnsignedInt
    UnsignedInt *unsignedInt=reinterpret_cast<UnsignedInt*>(&signedInt);
    
    //reinterpret_cast - copies the bit patter/representation to another place, does not make conversion

    cout << "Casted value: " << unsignedInt->value << endl;

    return 0;
}