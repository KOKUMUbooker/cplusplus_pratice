#include <iostream>

using namespace std;

int main(){
    const double price_per_small_room{25};
    const double price_per_large_room{35};
    const double tax_rate{0.06};
    const int validity_period{30};

    int large_rooms{0};
    cout<<"How many large rooms do you want cleaned : ";
    cin>>large_rooms;

    int small_rooms{0};
    cout<<"How many small rooms do you want cleaned : ";
    cin>>small_rooms;

    cout<<"=================================="<<endl;
    cout<<"Number of large rooms : "<<large_rooms<<endl;
    cout<<"Number of small rooms : "<<small_rooms<<endl;
    cout<<"Price per large room : $"<<price_per_large_room<<endl;
    cout<<"Price per small room : $"<<price_per_small_room<<endl;

    double total = (price_per_large_room * large_rooms) + (price_per_small_room * small_rooms);

    double tax = total*tax_rate;
    cout<<"Cost : $"<<total<<endl;
    cout<<"Tax : $"<<tax<<endl;
    cout<<"=================================="<<endl;
    cout<<"Total estimate : $"<<total+tax<<endl;
    cout<<"This estimate is valid for "<<validity_period<<" days"<<endl;


    return 0;
}
