#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<int> busStop;

    int passengerCount, destinationStop;
    cout << "Yolcu sayisini ve inmek istedigi durak numarasini girin: ";
    cin >> passengerCount >> destinationStop;

    busStop.push(passengerCount);

    cout << "Otobus duraklarinda bekleyen yolcu sayisi: ";
    while (!busStop.empty()) {
        cout << busStop.front() << " ";
        if (destinationStop == 0) {
            break;
        }
        int passengers = busStop.front();
        busStop.pop();
        busStop.push(passengers * 2); // Bir sonraki durakta yolcu sayısı iki katına çıkar
        destinationStop--;
    }
    cout << endl;

    return 0;
}
