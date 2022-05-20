#include <iostream>
#include <limits>
using namespace std;

int main() {

    system("sc query NvContainerLocalSystem");

    cout << "\n"<<system("sc query NvContainerLocalSystem | find \"RUNNING\"");
    cout << "\n Press enter to stop the service. \n";
    cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

    while (1) {


        system("sc stop NvContainerLocalSystem");
        cout << "Nvidia service stopped. Press enter to restart service.\n";
        cout << "============================================================= \n";
        cin.ignore(std::numeric_limits<streamsize>::max(), '\n');


        system("sc start NvContainerLocalSystem");
        cout << "Service restarted. Press enter to stop the service. \n";
        cout << "============================================================= \n";

        cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

    }
    return 1;
}