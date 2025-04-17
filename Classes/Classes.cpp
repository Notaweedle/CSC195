#include <string>
#include <iostream>

int main()
{
    std::string name;
}
class BaseClassName
{
public:
    virtual void Read(std::ostream& ostream, std::istream& istream);
    virtual void Write(std::ostream& ostream);
};

enum class FugaNames
{
    
    MALT_MARZIPAN,
    JIN_MACHIATO,
    SHEENA_FALAFEL

};