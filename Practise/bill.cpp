#include <iostream>
#include <string>
#include <climits>

using namespace std;

struct Customer {
    string name;
    int unitsConsumed;
    float billAmount;
    Customer* next;

    Customer(const string& name, int unitsConsumed, float billAmount) :
        name(name), unitsConsumed(unitsConsumed), billAmount(billAmount), next(nullptr) {}

    // Overloaded comparison operator for sorting based on billAmount
    bool operator<(const Customer& other) const {
        return billAmount < other.billAmount;
    }
};

class LinkedList {
public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Customer* current = head;
        while (current != nullptr) {
            Customer* next = current->next;
            delete current;
            current = next;
        }
    }

    void addCustomer(const string& name, int unitsConsumed) {
        float discount = getDiscount(unitsConsumed);
        float baseAmount = unitsConsumed * getBasePrice();
        float billAmount = baseAmount - discount;

        Customer* newCustomer = new Customer(name, unitsConsumed, billAmount);
        if (head == nullptr || billAmount < head->billAmount) {
            newCustomer->next = head;
            head = newCustomer;
        } else {
            Customer* current = head;
            while (current->next != nullptr && billAmount >= current->next->billAmount) {
                current = current->next;
            }
            newCustomer->next = current->next;
            current->next = newCustomer;
        }
    }

    void printBills() const {
        if (head == nullptr) {
            cout << "No customer data available." << endl;
            return;
        }

        cout << "Customer Name\tUnits Consumed\tBill Amount" << endl;
        cout << "------------------------------------------" << endl;
        Customer* current = head;
        while (current != nullptr) {
            cout << current->name << "\t\t" << current->unitsConsumed << "\t\t"
                 << current->billAmount << endl;
            current = current->next;
        }
    }

private:
    float getBasePrice() const {
        // Replace with your actual base price per unit
        return 1.00f;
    }

    float getDiscount(int unitsConsumed) const {
        // Replace with your actual discount logic
        // Consider offering increasing discounts for higher consumption
        if (unitsConsumed <= 100) {
            return 0.10f * unitsConsumed;
        } else if (unitsConsumed <= 200) {
            return 0.15f * unitsConsumed;
        } else {
            return 0.20f * unitsConsumed;
        }
    }

    Customer* head;
};

int main() {
    LinkedList bills;

    // Add customer data (replace with actual user input)
    bills.addCustomer("Alice", 150);
    bills.addCustomer("Bob", 240);
    bills.addCustomer("Charlie", 80);

    bills.printBills();

    return 0;
}
