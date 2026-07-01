#include <iostream>
#include <iomanip>
#include <cmath>


void chapter2Question12(){

    /* Write a program that prompts the capacity, in gallons, of an automobile
    fuel tank and the miles per gallon the automobile can be driven. The
    program outputs the number of miles the automobile can be driven
    without refueling. */

    double capacity_gallons;
    std::cout << "Enter capacity othe car in gallons : ";
    std::cin >> capacity_gallons;
    std::cout << '\n';
    double mile_p_gallon;
    std::cout << "Enter miles per gallons : ";
    std::cin >> mile_p_gallon;
    std::cout << '\n';

    double miles = mile_p_gallon * capacity_gallons;

    std::cout << "number of miles you can travel : " << miles;

}

void chapter2Question13(){

    /* Write a C++ program that prompts the user to input the elapsed time for
    an event in seconds. The program then outputs the elapsed time in hours,
    minutes, and seconds. (For example, if the elapsed time is 9630 seconds,
    then the output is 2:40:30.) */

    int seconds, minutes, hours;
    int remaining = seconds % 3600;
    std::cout << "input the elapsed time for an event in seconds : ";
    std::cin >> seconds;
    std::cout << '\n';
    minutes = (seconds % 3600) / 60;
    hours = seconds / 3600 ;
    seconds = (seconds % 3600) % 60;

    std::cout << hours << ":" << minutes << ":" << seconds;

}

void chapter2Question14(){

    /*Write a C++ program that prompts the user to input the elapsed time for
    an event in hours, minutes, and seconds. The program then outputs the
    elapsed time in seconds.*/

    int hours, minutes, seconds;
    std::cout << "Enter hours : " ;
    std::cin >> hours;
    std::cout << '\n';

    std::cout << "Enter minutes : " ;
    std::cin >> minutes;
    std::cout << '\n';

    std::cout << "Enter seconds : " ;
    std::cin >> seconds;
    std::cout << '\n';

    int hoursToSecond = hours * 3600;
    int minutesToSecond = minutes * 60;
    int totalSeconds = hoursToSecond + minutesToSecond + seconds;

    std::cout << "elapsed time in seconds : " << totalSeconds;


}

void chapter2Question15(){

    /* To make a profit, a local store marks up the prices of its items by a certain
    percentage. Write a C++ program that reads the original price of the item
    sold, the percentage of the marked-up price, and the sales tax rate. The
    program then outputs the original price of the item, the percentage of the
    mark-up, the store’s selling price of the item, the sales tax rate, the sales tax,
    and the final price of the item. (The final price of the item is the selling
    price plus the sales tax.) */


    double OriginalPrice, PercentageOfMarkup,SalesTaxRate, SalesTax, SellingPrice, SellingPriceTotal;

    std::cout << "Enter Original product price : ";
    std::cin >> OriginalPrice;
    std::cout << '\n';

    std::cout << "Enter Percentage of Mark-up price in decimals : ";
    std::cin >> PercentageOfMarkup;
    std::cout << '\n';

    std::cout << "Enter Sales Tax Rate in decimals : ";
    std::cin >> SalesTaxRate;
    std::cout << '\n';

    SellingPrice = (OriginalPrice*PercentageOfMarkup) + OriginalPrice;
    SalesTax = (SellingPrice * SalesTaxRate) ;
    SellingPriceTotal = SellingPrice + SalesTax;

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Original price : " << OriginalPrice << '\n';
    std::cout << "Percentage of Mark-up orice : " << PercentageOfMarkup << '\n';
    std::cout << "Store's selling price : " << SellingPrice << '\n' ;
    std::cout << "Tax rate : " << SalesTax << '\n' ;
    std::cout << "Store's selling price including tax : " << SellingPriceTotal << '\n' ;

}

void chapter2Question16(){

    /* (Hard drive storage capacity) If you buy a 40GB hard drive, then chances
    are that the actual storage on the hard drive is not 40GB. This is due to the
    fact that, typically, a manufacturer uses 1000 bytes as the value of 1K bytes,
    118 | Chapter 2: Basic Elements of C++

    1000K bytes as the value of 1MB, 1000MB as the value of 1GB. Therefore,
    a 40GB byte hard drive contains 40,000,000,000 bytes. However, in
    computer memory, as given in Table 1-1 (Chapter 1), 1KB is equal to
    1024 bytes, and so on. So the actual storage on a 40GB hard drive is
    approximately 37.25GB. (You might like to read the fine print next time
    you buy a hard drive.) Write a program that prompts the user to enter the
    size of the hard drive specified by the manufacturer, on the hard drive box,
    and outputs the actual storage capacity of the hard drive. */

    double Size;
    std::cout << "Enter size of hard drive : " ;
    std::cin >> Size;

    double ActualStorage = (Size * std::pow(1000, 3)) / std::pow(1024, 3);

    std::cout << std::fixed << std::setprecision(2) << "Actual Storage  is : " << ActualStorage << "GB";

}

void chapter2Question18(){

    /* A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm ships
    cartons of milk to a local grocery store. The cost of producing one liter of
    milk is $0.38, and the profit of each carton of milk is $0.27. Write a
    program that does the following:
    a. Prompts the user to enter the total amount of milk produced in the
    morning.
    b. Outputs the number of milk cartons needed to hold milk. (Round your
    answer to the nearest integer.)
    c. Outputs the cost of producing milk.
    d. Outputs the profit for producing milk. */

    double TotalAmountOfMilk;

    std::cout << "Enter the total amount of milk produced in the morning : " ;
    std::cin >> TotalAmountOfMilk;
    std::cout << '\n';

    int NumberOfCartons = std::round(TotalAmountOfMilk / 3.78);
    double CostOfProducing = TotalAmountOfMilk * 0.38;
    double Profit = NumberOfCartons*0.27;


    std::cout << "Number of milk cartons needed : " << NumberOfCartons << '\n';
    std::cout << std::fixed << std::setprecision(2) << "Cost of producing milk : " << '$' << CostOfProducing << '\n';
    std::cout << "Profit for producing milk : " << '$' << Profit ;


}

void chapter2Question19(){

    /* You found an exciting summer job for five weeks. It pays, say, $15.50
    per hour. Suppose that the total tax you pay on your summer job
    income is 14%. After paying the taxes, you spend 10% of your net
    income to buy new clothes and other accessories for the next school
    year and 1% to buy school supplies. After buying clothes and school
    supplies, you use 25% of the remaining money to buy savings bonds.
    For each dollar you spend to buy savings bonds, your parents spend
    $0.50 to buy additional savings bonds for you. Write a program that
    prompts the user to enter the pay rate for an hour and the number
    of hours you worked each week. The program then outputs the
    following:
    a. Your income before and after taxes from your summer job.
    b. The money you spend on clothes and other accessories.
    c. The money you spend on school supplies.
    d. The money you spend to buy savings bonds.
    e. The money your parents spend to buy additional savings bonds for you. */

    double WorkHours,Week1, Week2,Week3, Week4, Week5, PayRate, GrossIncome,NetIncome , ClothAndAccessories, SchoolSupplies, SavingsBonds, AdditionalSavingsBond;

    std::cout << "enter the pay rate for an hour : ";
    std::cin >> PayRate;
    std::cout << '\n';

    std::cout << "enter the number of hours week 1 : ";
    std::cin >> Week1;
    std::cout << '\n';

    std::cout << "enter the number of hours week 2 : ";
    std::cin >> Week2;
    std::cout << '\n';

    std::cout << "enter the number of hours week 3 : ";
    std::cin >> Week3;
    std::cout << '\n';

    std::cout << "enter the number of hours week 4 : ";
    std::cin >> Week4;
    std::cout << '\n';

    std::cout << "enter the number of hours week 5 : ";
    std::cin >> Week5;
    std::cout << '\n';

    WorkHours = Week1 + Week2 + Week3 + Week4 + Week5;

    GrossIncome = WorkHours * PayRate;
    NetIncome = GrossIncome - (WorkHours*PayRate*0.14);
    ClothAndAccessories = NetIncome * 0.10;
    SchoolSupplies = NetIncome * 0.01;
    SavingsBonds = (NetIncome - SchoolSupplies - ClothAndAccessories) * 0.25;
    AdditionalSavingsBond = SavingsBonds * 0.50;

    std::cout << "Your income before and after taxes from your summer job : $" << std::fixed << std::setprecision(2) << GrossIncome <<" After $" << NetIncome << '\n';
    std::cout << "The money you spend on clothes and other accessories : $" << ClothAndAccessories << '\n';
    std::cout << "The money you spend on school supplies : $" << SchoolSupplies << '\n';
    std::cout << "The money you spend to buy savings bonds : $" << SavingsBonds << '\n';
    std::cout << "The money your parents spend to buy additional savings bonds for you : $" << AdditionalSavingsBond << '\n';

}

int main(){

    chapter2Question19();


    return 0;

}




