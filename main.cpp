#include <iostream>
#include "list.h"
#include "operation.h"
#include "my_data.h"

using namespace std;

void mainMenu();
List L;

int main() {
    createList(L);

    mainMenu();

    return 0;
}

void mainMenu() {
    address P;
    infotype X;
    /**
    * IS : List has been created
    * PR : prints menu to user
    *       1. insert new data
    *       2. print all data
    *       3. find and print a data by ID
    *       4. edit data by ID
    *       5. delete data by ID
    *       0. exit
    */
    //-------------your code here-------------
    int choice;
    do {
        cout<<"Menu"<<endl;
        cout<<"1. insert"<<endl;
        cout<<"2. view data"<<endl;
        cout<<"3. find and view"<<endl;
        cout<<"4. find and edit"<<endl;
        cout<<"5. find and delete"<<endl;
        cout<<"0. exit"<<endl;
        cout<<"input choice: ";
        cin>>choice;
        switch(choice) {
        case 1:
            X = create_data();
            P = allocate(X);
            insertAndSort(L,P);
            break;
        case 2 :
            printInfo(L);
            break;
        case 3 :{
            infotype v;
            cout<<"============"<<endl;
            cout<<"find ID : ";
            cin>>v.id;
            address F ;
            F = findElm(L,v);
            if(F!=NULL){
                cout<<"==========="<<endl;
                cout<<"ID     : "<<F->info.id<<endl;
                cout<<"Name   : "<<F->info.name<<endl;
                cout<<"Class  : "<<F->info.clas<<endl;
                cout<<"Score  : "<<F->info.score<<endl;
                cout<<endl;
            }else{
                cout<<"==========="<<endl;
                cout<<"ID not exist"<<endl;
                cout<<endl;
            }}
            break;

        case 4 :{
            infotype u;
            cout<<"============"<<endl;
            cout<<"find ID : ";
            cin>>u.id;
            address F ;
            F = findElm(L,u);
            if(F!=NULL){
                edit_data(info(P));
            }else{
                cout<<"Id not exist"<<endl;
                }
            }
            break;
        case 5 : {
            infotype x;
            cout<<"============"<<endl;
            cout<<"find ID : ";
            cin>>x.id;
            address F ;
            deletebyID(L,x);
            cout<<P->info.id<<endl;
            }
        }




    } while(true);

    //----------------------------------------
}
