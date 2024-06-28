
#include <iostream>
#include <string>
#include<conio.h>
#include<sstream>
#include<fstream>
using namespace std;

struct product{
    int ID;
    string name;
    double price;
    string brand;
    string categoty;
    product* next;

};
struct list_product{
    int n=0;
    product* head;
    product*tail;

};
//create empty list
list_product* emptyList(){
    list_product* list=new list_product();
    list->n=0;
    list->head=nullptr;
    list->tail=nullptr;
    return list;

}

// functions declaration
void adminMenu();
void addProduct();
void searchProduct();
void displayProduct();
void deleteProduct();
void check();
void customerMenu();
void shopping_menu();
void invoice();


// main program
int main(){
    list_product*list=emptyList();

    shopping_menu();


}
// functions implementation
void addProduct(){
    // product* newPro=new product();
    // cout<<"Enter product ID: ";
    // cin>>newPro->ID;
    // cout<<"Enter product name: ";
    // cin.ignore();
    // getline(cin,newPro->name);
    // cout<<"Enter product price: ";
    // cin>>newPro->price;
    cout<<"Enter product ";

     

}
void searchProduct(){
     cout<<"Hello!!!"<<endl;
 
}
// display product from CSV file
void displayProduct(){
    string line;
    string word; 
    ifstream f;
    f.open("product.csv",ios::in);
    if(!f.is_open()){
        cout<<"Failed to open the file."<<endl;
    }
    while(getline(f,line)){
        stringstream s(line);
        while(getline(s, word,',')){
            cout<<word<<"\t";
        }
        cout<<endl;
    }
    f.close();
}
// for admin delete in CSV file
void deleteProduct(){
     cout<<"Hello!!!"<<endl;

}
void check(){
     cout<<"Hello!!!"<<endl;

}
// total
void invoice(){
    cout<<"Hello!!!"<<endl;

}

void shopping_menu(){
    
    cout<<"CONTACT US: "<<endl;
    cout<<"XXX-XXXX-XXXX"<<endl;
    cout<<"\t\t\t\t\t********************************************************\n";
    cout<<"\t\t\t\t\t*                                                      *\n";
    cout<<"\t\t\t\t\t*           Hello!Welcome to                           *\n";
    cout<<"\t\t\t\t\t*                                                      *\n";
    cout<<"\t\t\t\t\t********************************************************\n";
    
    int choice;
    string email; // for admin 
    string password;// for admin
    cout<<"\t\t\t\t\t| 1). Administrator    |"<<endl;
    cout<<"\t\t\t\t\t|                      |"<<endl;
    cout<<"\t\t\t\t\t| 2). Buyer            |"<<endl;
    cout<<"\t\t\t\t\t|                      |"<<endl;
    cout<<"\t\t\t\t\t| 3). Exit             |"<<endl;
    cout<<"\t\t----------------------------------------------------------------"<<endl;
    
    do{
        cout<<"\t\tplease enter your choice:";
        cin >>choice;
        cin.clear();
        fflush(stdin);
        cout<<"\t\t----------------------------------------------------------------"<<endl;
        switch(choice){
            case 1: cout<<"\t\tPleas login!!!"<<endl;
                    cout<<"Email: ";
                    cin>>email;
                    cout<<"password: ";
                    cin>>password;
                    if(email=="technology11@gmail.com" && password=="Project11"){
                        adminMenu();

                    }else{
                        cout<<"Sorry!!Please try again invalid email/password"<<endl;
                    }        
                    break; 
            case 2: //system("cls");
                    customerMenu();
                    break;
            case 3: cout<<"Thank for visiting!!!!"<<endl;
                    break;
            default: cout<<"Sorry!Invalid choice.Please try again "<<endl;
        }

    }while(choice!=3);

}
void customerMenu(){
    int choice;

    do{
        cout<<"\t\t\t\t\tBuyer menu"<<endl;
        cout<<"\t\t\t\t\t1). Search product "<<endl;
        cout<<"\t\t\t\t\t2). Display product "<<endl;
        cout<<"\t\t\t\t\t3). Invoice"<<endl;
        cout<<"\t\t\t\t\t4). Back to main menu"<<endl;
        cout<<"\t\t----------------------------------------------------------------"<<endl;
    
        cout<<"\t\tEnter your choice: ";
        cin>>choice;
        cin.clear();
        fflush(stdin);
        switch(choice){
            case 1: searchProduct();
                    break;
            case 2: displayProduct();
                    break;
            case 3: invoice();
                    break;

            case 4: //system("cls");
                    shopping_menu();
                    break;
            default: cout<<"Sorry!!Invalid choice please try again"<<endl;
            
        } 
    }while(choice!=4);
}
void adminMenu(){
    int choice;
  
    do{
        cout<<"\t\t\t\t\tAnministrator Menu"<<endl;
        cout<<"\t\t\t\t\t1). Add the product"<<endl;
        cout<<"\t\t\t\t\t2). Delete the product"<<endl;
        cout<<"\t\t\t\t\t3). Display all product"<<endl;
        cout<<"\t\t\t\t\t4). check "<<endl;
        cout<<"\t\t\t\t\t5). Back to main menu"<<endl;
        cout<<"\t\t----------------------------------------------------------------"<<endl;
    
        cout<<"\t\tEnter your choice: ";
        cin>>choice;
        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: addProduct();
                    break;
            case 2: deleteProduct();
                    break;
            case 3: displayProduct();
                    break;
            case 4: check();
                    break;
            case 5: shopping_menu();
                    break;
            default: cout<<"Sorry!!Invalid choice.Please try again";
            
        }

    }while(choice!=5);


}