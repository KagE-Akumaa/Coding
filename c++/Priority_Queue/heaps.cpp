#include <iostream>
#include <vector>
using namespace std;

class Heap {
   public:
    vector<int> arr;

    Heap(int n) {}
    void insert(int v) {
        arr.push_back(v);
        int index = arr.size() - 1;

        // verify heap properties max heap

        while (index > 0 && arr[(index - 1) / 2] < arr[index]) {
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }
    }
    void printHeap() {
        for (int i : arr) cout << i << " ";
    }
    void heapify(int i) {
        int n = arr.size();
        while (true) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if (left < n && arr[left] > arr[largest])
                largest = left;
            if (right < n && arr[right] > arr[largest])
                largest = right;

            if (largest != i) {
                swap(arr[i], arr[largest]);
                i = largest;
            } else
                break;
        }
    }
    int popMax() {
        if (arr.empty()) {
            throw runtime_error("Heap is empty");
        }
        int n = arr.size();
        int mval = arr[0];

        arr[0] = arr.back();
        arr.pop_back();

        heapify(0);

        return mval;
    }
};

int main() {
    Heap h(7);

    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.insert(6);
    h.insert(7);

    h.printHeap();
    cout << h.popMax() << endl;
    h.printHeap();
}