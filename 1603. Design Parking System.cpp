#include<iostream>
using namespace std;
class ParkingSystem
{
private :
    int big,medium,small;
public:
    ParkingSystem(int big, int medium, int small)
    {
        this->big = big;
        this->medium = medium ;
        this->small = small;
    }

    bool addCar(int carType)
    {
        if(carType == 1 && big >0)
        {
            big--;
            return true ;

        }
        else if (carType == 2 && medium>0)
        {
            medium-- ;
            return true ;
        }
        else if (carType == 3 && small>0)
        {
            small--;
            return true;
        }
        return false ;
    }
};

int main ( )
{
    ParkingSystem* obj = new ParkingSystem(1, 1, 0);



    cout << obj->addCar(1) <<endl;
    cout << obj->addCar(2) <<endl;
    cout << obj->addCar(3) <<endl;
    cout << obj->addCar(1) <<endl;





}
/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
