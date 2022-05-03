#include <stdexcept>

int main()
{
    try
    {
        return 0;
    }
    catch(const std::exception&)
    {
        return 1;
    }
    catch(...)
    {
        return 2;
    }
}