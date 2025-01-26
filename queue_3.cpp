#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> bankQueue;

    while (true) {
        int choice;
        cout << "1. Yeni musteri ekle\n2. Musteriye hizmet et\n3. Cikis\nSeciminiz: ";
        cin >> choice;

        if (choice == 1) {
            string customerName;
            system("cls");
            cout << "Musteri ismini girin: ";
            cin >> customerName;
            bankQueue.push(customerName);
            system("cls");
            cout << customerName << " sira numaraniz: " << bankQueue.size() << endl;
        
        } else if (choice == 2) {
            if (!bankQueue.empty()) {
                system("cls");
                cout << "Hizmet edilen musteri: " << bankQueue.front() << endl;
                bankQueue.pop();
            } else {
                system("cls");
                cout << "Sira bos." << endl;
            }
        
        } else if (choice == 3) {
            break;
        
        } else {
            system("cls");
            cout << "Gecersiz secim. Tekrar deneyin." << endl;
        }
    }

    return 0;
}
