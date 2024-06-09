#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{

    queue<string> hewanQueue;

    string namaHewan;

    cout << "Program Queue untuk Nama Hewan" << endl;

    char opsi;
    do
    {
        cout << "\nMasukkan nama hewan: ";
        cin >> namaHewan;

        hewanQueue.push(namaHewan);

        cout << "Nama hewan '" << namaHewan << "' berhasil ditambahkan ke dalam antrian." << endl;

        cout << "Ingin memasukkan nama hewan lain? (y/n): ";
        cin >> opsi;
    } while (opsi == 'y' || opsi == 'Y');

    cout << "\nHewan-hewan dalam antrian: ";
    while (!hewanQueue.empty())
    {
        cout << hewanQueue.front() << " ";

        hewanQueue.pop();
    }
    cout << endl;

    return 0;
}
