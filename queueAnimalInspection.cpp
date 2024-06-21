#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Pet
{
    string name;
    string type;
    int age;
    string ownerName;
    string condition;
};

void showMenu()
{
    cout << "\nMenu:" << endl;
    cout << "1. Tambah hewan untuk pemeriksaan" << endl;
    cout << "2. Hapus hewan setelah pemeriksaan" << endl;
    cout << "3. Tampilkan hewan yang akan diperiksa selanjutnya" << endl;
    cout << "4. Tampilkan semua hewan dalam antrian" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih opsi: ";
}

void showPet(const Pet &pet, int queueNumber)
{
    cout << queueNumber << ". Nama: " << pet.name << ", Jenis: " << pet.type << ", Umur: " << pet.age << " tahun"
         << ", Pemilik: " << pet.ownerName << ", Kondisi: " << pet.condition << endl;
}

int main()
{
    queue<Pet> petQueue;
    int choice;

    do
    {
        showMenu();
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            Pet newPet;
            cout << "Masukkan nama hewan: ";
            getline(cin, newPet.name);
            cout << "Masukkan jenis hewan: ";
            getline(cin, newPet.type);
            cout << "Masukkan umur hewan: ";
            cin >> newPet.age;
            cin.ignore();
            cout << "Masukkan nama pemilik: ";
            getline(cin, newPet.ownerName);
            cout << "Masukkan kondisi hewan: ";
            getline(cin, newPet.condition);

            petQueue.push(newPet);
            cout << "Hewan telah ditambahkan ke antrian pemeriksaan!" << endl;
            break;
        }
        case 2:
        {
            if (!petQueue.empty())
            {
                petQueue.pop();
                cout << "Hewan telah dihapus dari antrian setelah pemeriksaan!" << endl;
            }
            else
            {
                cout << "Antrian kosong!" << endl;
            }
            break;
        }
        case 3:
        {
            if (!petQueue.empty())
            {
                Pet frontPet = petQueue.front();
                cout << "Hewan yang akan diperiksa selanjutnya:" << endl;
                showPet(frontPet, 1);
            }
            else
            {
                cout << "Antrian kosong!" << endl;
            }
            break;
        }
        case 4:
        {
            if (!petQueue.empty())
            {
                queue<Pet> tempQueue = petQueue;
                cout << "Semua hewan dalam antrian pemeriksaan:" << endl;
                int queueNumber = 1;
                while (!tempQueue.empty())
                {
                    Pet currentPet = tempQueue.front();
                    showPet(currentPet, queueNumber);
                    tempQueue.pop();
                    queueNumber++;
                }
            }
            else
            {
                cout << "Antrian kosong!" << endl;
            }
            break;
        }
        case 5:
        {
            cout << "Keluar dari program." << endl;
            break;
        }
        default:
        {
            cout << "Opsi tidak valid! Silakan coba lagi." << endl;
            break;
        }
        }
    } while (choice != 5);

    return 0;
}
