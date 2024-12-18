// CSC 134
// M6T1
// N'Ky Benjamin
// 12/9/2024

#include <iostream>
using namespace std;

class Restaurant {
    public:
        void SetName(string restaurantName);

        void SetRating(int userRating);

        void Print();
    
    private:
        string name;
        int rating;
};

void Restaurant::SetName(string restaurantName) {
    name = restaurantName;
    

}

void Restaurant::SetRating(int userRating) {
    rating = userRating;
}

void Restaurant::Print() {
    cout << name << " ---- " << rating << " stars" << endl;
}

int main()
{
    Restaurant faveRest;
    faveRest.SetName("Wendys");
    faveRest.SetRating(5);
    faveRest.Print();
    faveRest.SetName("Fuudruckers");
    faveRest.SetRating(5);
    faveRest.Print();
    faveRest.SetName("Panera");
    faveRest.SetRating(4);
    faveRest.Print();
}