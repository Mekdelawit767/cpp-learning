#include <iostream>
#include<string>
using namespace std;
#define tax_rate_pre 0.5
const float tax_rate_const = 0.5;

int main() {
 cout<< "The  purpose of this program  is to analyze product sales and inventory for a store."<< "\n";
 cout<< "JUST A REMINDER: C++ IS A COMPILED LANGUAGE"<< "\n";
    string productname;
    int productcategory;
    int initialinventory;
    float productprice;
    int noofitemsold;
    
    int newinventory;
    float totalsales;
    string inventorystatus;
    
    int samplevariable1 = 3;
    int samplevariable2; 
    samplevariable2=4;
    int samplevariable3{5};
    
    
    cout<< "Enter the product name(a single word): "<<"\n";
    cin>> productname;
    cout << "Enter the product category (1-5): "<<"\n";
    cin >> productcategory;
    cout << "Enter the initial inventory quantity: "<<"\n";
    cin >> initialinventory;
    cout << "Enter the product price: "<<"\n";
    cin >> productprice;
    cout << "Enter the number of items sold: "<<"\n";
    cin >> noofitemsold;
    
    newinventory = initialinventory; 
    newinventory -= noofitemsold; 
    totalsales= noofitemsold * productprice;
    
    auto salesCopy = totalsales;
    decltype(initialinventory) secondinventory=100;
    
    inventorystatus = (newinventory < 10) ? "Low Inventory" : "Sufficient Inventory";
    
    if (productcategory >= 1 && productcategory<=5){
        cout<<"Valid product category"<<"\n";
    
        switch (productcategory){
                case 1: 
                cout << "Category 1: Electronics" << endl; 
                break;
                case 2: 
                cout << "Category 2: Groceries" << endl; 
                break;
                case 3:
                cout << "Category 3: Clothing" << endl; 
                break;
                case 4: 
                cout << "Category 4: Stationery" << endl; 
                break;
                case 5: 
                cout << "Category 5: Miscellaneous" << endl;
                break;
        }
}
    else{
        cout<< "Invalid Product category.Please enter a number from 1 to 5"<<"\n";
        return 1;
    }
    
     cout << "YOUR Receipt: " << endl;
     for (int i = 1; i <= noofitemsold; i++) {
        cout << "Item " << i << ": Price: " << productprice << endl; }
    
    cout<< "Tax rate from preprocessor: "<< tax_rate_pre <<"\n";
    cout<< "Tax rate from constant: "<< tax_rate_const <<"\n";
         
    cout << "\n Your Product Summary:" << endl;
    cout << "Product Name: " << productname << endl;
    cout << "Product Category: " << productcategory << endl;
    cout << "Initial Inventory: " << initialinventory << endl;
    cout << "Price: " << productprice << endl;
    cout << "Items Sold: " << noofitemsold << endl;
    cout << "New Inventory: " << newinventory << endl;
    cout << "Total Sales Amount: $" << totalsales << endl;
    cout << "Inventory Status: " << inventorystatus << endl;
    cout << "Helper Variable (secondinventory): " << secondinventory << endl;
    cout << "Helper Variable (salesCopy):" << salesCopy << endl;
    
    return 0;

}

