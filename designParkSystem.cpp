class ParkingSystem 
{
public:
    int bigLot, mediumLot, smallLot;
    
    ParkingSystem(int big, int medium, int small)
    {
        bigLot = big;
        mediumLot = medium;
        smallLot = small;
    }
    
    bool addCar(int carType)
    {
        if (carType == 1)
        {
            if (bigLot > 0)
            {
                bigLot--;
                return true;
            }
            else
            {
                return false;
            }
        }
        if (carType == 2)
        {
            if (mediumLot > 0)
            {
                mediumLot--;
                return true;
            }
            else
            {
                return false;
            }
        }
        if (carType == 3)
        {
            if (smallLot > 0)
            {
                smallLot--;
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }
};
