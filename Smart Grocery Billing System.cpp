#include <iostream>
#include <string>
using namespace std;

int main() {
    string itemName;
	string itemCategory;
	string productId;
	string DailyEssential[3];
	string PackagedFood[10];
	string Electronic[5];
    int price;
	int totalBill = 0;
    char choice;

    cout << "\t\t\t\t\t\tWelcome to Smart Grocery Billing System" << endl;

    do {
        cout << "\nEnter category (DE for Daily Essentials, PF for Packaged Food, EA for Electronics): ";
        cin >> itemCategory;
        cin.ignore();  
        cout << "What is your item name? ";
        getline(cin, itemName);
        productId = itemCategory+"_"+"1"+"_"+itemName;  
        cout << "Product ID: " << productId << endl;
        cout << "Enter the price of this item: $ ";
        cin >> price;
        totalBill += price;
        cout << "\nDo you want to continue shopping? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y'); 
    cout << "\nYour total bill without discount is: $" << totalBill << endl;
      int discount;
    if (totalBill > 50 && totalBill < 99) {
        discount = totalBill * 5 / 100;  
        cout << "You got a 5% discount!" << endl;
    } 
    else if (totalBill >= 100) {
        discount = totalBill * 10 / 100;  
        cout << " You got a 10% discount!" << endl;
    } 
    else {
        cout << "No discount applied." << endl;
    }
    if (discount > 0) {
        cout << "Discount amount: $" << discount << endl;
        cout << "Your final bill after discount is: $" << totalBill - discount << endl;
    }
    cout << "\nThank you for shopping with us! See you again!" << endl;
    cout<<"\t\t\t\t\t\t\tINSHALLAH"<<endl;
    cout<<"\t\t\t\t\t\t\tFI AMANILLAH"<<endl;
    return 0;
}
