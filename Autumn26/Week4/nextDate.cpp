#include <iostream>

bool leapYear(int year){
    bool ly = false;

    if ((year % 4) == 0){
        ly = true;
        
        if((year % 400) == 0){
            ly = true;
        }
        else if((year % 100) == 0){
            ly = false;
        }
    }

    return ly;
}

void nextDate(int d1, int m1, int y1, int& d2, int& m2, int& y2){

    bool leap = leapYear(y1);
    y2 = y1;

    if ((d1 == 31) && (m1 == 12)){
        d2 = 1, m2 = 1, y2 = y1+1;
    }

    else if((m1 == 4) || (m1 == 6) || (m1 == 9) || (m1 == 11)){
        if(d1 == 30){
            d2 = 1,m2 = m1+1;
        }
        else{
            d2 = d1 + 1, m2 = m1;
        }
    }
    else if(m1 == 2){
        if(leap && (d1 == 29)){
            d2 = 1, m2 = m1 + 1;
        }
        else if(d1 == 28){
            d2 = 1, m2 = m1 + 1;
        }
        else{
            d2 = d1 + 1, m2 = m1;
        }
    }
    else{
        if(d1 == 31){
            d2 = 1, m2 = m1 + 1;
        }
        else{
            d2 = d1 + 1, m2 = m1;
        }
    }
}

int main(){
    int day = 31;
    int month = 12;
    int year = 2026;

    nextDate(day,month,year,day,month,year);
    std::cout << (day == 1) << (month == 1) << (year == 2027) << std::endl;

    day = 29,month = 2,year = 2024;
    nextDate(day,month,year,day,month,year);
    std::cout << (day == 1) << (month == 3) << (year == 2024) << std::endl;

    day = 28,month = 2,year = 2025;
    nextDate(day,month,year,day,month,year);
    std::cout << (day == 1) << (month == 3) << (year == 2025) << std::endl;

    day = 14,month = 2, year = 2024;
    nextDate(day,month,year,day,month,year);
    std::cout << (day == 15) << (month == 2) << (year == 2024) << std::endl;

    day = 11,month = 11, year = 2007;
    nextDate(day,month,year,day,month,year);
    std::cout << (day == 12) << (month == 11) << (year == 2007) << std::endl;

    day = 30,month = 6, year = 2017;
    nextDate(day,month,year,day,month,year);
    std::cout << (day == 1) << (month == 7) << (year == 2017) << std::endl;

    day = 31,month = 7, year = 2015;
    nextDate(day,month,year,day,month,year);
    std::cout << (day == 1) << (month == 8) << (year == 2015) << std::endl;

    day = 7,month = 10, year = 2008;
    nextDate(day,month,year,day,month,year);
    std::cout << (day == 8) << (month == 10) << (year == 2008) << std::endl;


}