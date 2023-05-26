#include <stdio.h>

void f()
{
    puts("f()");
}

namespace ns {
    void f()
    {
        puts("ns::f()");
    }
    void g(){
        f ();
    }
}
int main(){
    ns::g();
}
