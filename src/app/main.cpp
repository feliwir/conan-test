#include <lib.hpp>

int main(int argc,char** argv)
{
    if(Test::Curl()!=0)
        return -1;

    return 0;
}