#include <GPIOClass.h>

using namespace std;

int main(int argc, char ** argv)
{
    GPIOClass pin7("48"); // sheiled pin 7 is gpio 48
    GPIOClass gpio255 ("255"); // direction gpio and pull res
    GPIOClass gpio_214_tristate("214"); // tristate gpio
    GPIOClass gpio223("223");

    cout << " GPIO pins exported" << endl;

    gpio_214_tristate.setdir_gpio("low");
    gpio255.setdir_gpio("low");
    gpio223.setdir_gpio("high");
    pin7.setdir_gpio("in");
    gpio_214_tristate.setdir_gpio("high");

    cout << " Set GPIO pin directions" << endl;
    string returnval;
    while(1)
    {
        int status = pin7.getval_gpio(returnval);
        cout << "read: " << returnval << endl;
    }
    return 0;
}
