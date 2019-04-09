#include <iostream>
#include <reflection.h>

using namespace std;

class Example {
public:
    using REF_TYPE = std::function<void()>;

    void reflection() {
        cout << "reflection call" << endl;
    }

    void reflection2() {
        cout << "reflection2 call" << endl;
    }

    void reflection3() {
        cout << "reflection3 call" << endl;
    }
};

REGISTER_NONE(Example, Example::REF_TYPE, reflection);
REGISTER_NONE(Example, Example::REF_TYPE, reflection2);
REGISTER_NONE(Example, Example::REF_TYPE, reflection3);

int main(int argc, char *argv[]) {

    auto example = new Example();

    using Ref = REFLECTION(Example, Example::REF_TYPE);

    Ref::Ref("reflection")(example)();
    Ref::Ref("reflection2")(example)();
    Ref::Ref("reflection3")(example)();

    return 0;
}
