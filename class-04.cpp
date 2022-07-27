#include<bits/stdc++.h>
using namespace std;

//Problem Number - 01:
class Restaurant{
public:
    int food_item_code;
    string food_item_name;
    int food_item_prices;
    int total_tax;
};

//Problem Number - 02:
int main(){
    int n;
    cin>>n;
    Restaurant res[n];
    for(int i=0;i<n;i++){
        cin>>res[i].food_item_code;
        cin.ignore();
        getline(cin,res[i].food_item_name);
        cin>>res[i].food_item_prices;
    }
//Problem Number - 03:
    while(true){   
        cout<<"                                     MAKE BILL"<<endl;
        cout<<"                                 ______________________"<<endl;
        cout<<"Item Code                        Item Names                                      Item price"<<endl;
        for(int i=0;i<n;i++){
            cout<<res[i].food_item_code<<"                              "<<res[i].food_item_name<<"                  ";
            if(i==0){
                cout<<"              "<<res[i].food_item_prices;
            }
            else if(i==1){
                cout<<"         "<<res[i].food_item_prices;
            }
            else if(i==2){
                cout<<"         "<<res[i].food_item_prices;
            }
            else if(i==3){
                cout<<"        "<<res[i].food_item_prices;
            }
            else if(i==4){
                cout<<"            "<<res[i].food_item_prices;
            }
            else if(i==5){
                cout<<"          "<<res[i].food_item_prices;
            }
            else if(i==6){
                cout<<"         "<<res[i].food_item_prices;
            }
           else if(i==7){
                cout<<"             "<<res[i].food_item_prices;
            }
            else if(i==8){
                cout<<"             "<<res[i].food_item_prices;
            }
            else if(i==9){
                cout<<"        "<<res[i].food_item_prices;
            }
            else if(i==10){
               cout<<"          "<<res[i].food_item_prices;
            }
            else if(i==11){
                cout<<"             "<<res[i].food_item_prices;
            }

            cout<<endl;
        }

//Problem Number - 04:
        int no_table, no_item;
        cout<<"Enter Table No : ";
        cin>>no_table;
        cout<<"Enter Number of Items : ";
        cin>>no_item;
        int no_code[no_item],no_quantity[no_item];
        for(int i=0;i<no_item;i++){
            cout<<"Enter Item "<<i+1<<" Code : ";
            cin>>no_code[i];
            int code_matching = 0;
            for(int j=0;j<12;j++){
                if(no_code[i] == res[j].food_item_code){
                    code_matching = 1;
                }
            }
            if(code_matching == 0){
                cout<<"The item code is not valid"<<endl;
                i--;
            }
            else{
               cout<<"Enter Item "<<i+1<<" Quantity : ";
                cin>>no_quantity[i];
            }
        }
//Problem Number - 05:
        int total_amount = 0;
        cout<<"                                    "<<"BILL SUMMARY"<<endl;
        cout<<"                            _________________________________"<<endl;




        cout<<"Table Number : "<<no_table<<endl;
        cout<<"Item Code    "<<"Item Name                  "<<"Item Price    "<<"Item Quantity    "<<"Tota Price"<<endl; 
        for(int i=0;i<no_item;i++){
            for(int j=0;j<12;j++){
                if(no_code[i]==res[j].food_item_code){
                    
                    if(j==0){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"           "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                   else if(j==1){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"      "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==2){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"      "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==3){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"     "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==4){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"         "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==5){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"       "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                   }
                    else if(j==6){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"      "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==7){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"          "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==8){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"          "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==9){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"     "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==10){
                        cout<<res[j].food_item_code<<"          "<<res[j].food_item_name;
                        cout<<"       "<<res[j].food_item_prices<<"           "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                    else if(j==11){
                        cout<<res[j].food_item_code<<"         "<<res[j].food_item_name;
                        cout<<"          "<<res[j].food_item_prices<<"        "<<no_quantity[i]<<"                "<<res[j].food_item_prices*no_quantity[i];
                        total_amount += (res[j].food_item_prices * no_quantity[i]);
                    }
                }
            }
            cout<<endl;
        }

//Problem Number - 06:

       double tax = total_amount * .05;
//Problem Number - 07:
        res->total_tax = (int)tax;
        cout<<"TAX"<<"                                                                    "<<res->total_tax<<endl;
        cout<<"________________________________________________________________________________________________________________"<<endl;
        total_amount += res->total_tax;
        cout<<"NET TOTAL"<<"                                                              "<<total_amount<<" Taka"<<endl;
    }
    
}