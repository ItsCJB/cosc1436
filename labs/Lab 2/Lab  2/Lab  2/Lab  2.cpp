#include <iostream>
#include <iomanip>

int main()
{
    int LoanAmount = 0;
    double InterestRate = 0;
    double MonthlyPayment = 0;

    std::cout << "enter loan amount ($1-$1000): ";
    std::cin >> LoanAmount;

    while (LoanAmount < 1 || LoanAmount > 1000)
    {
        std::cout << "error must be 1-1000" << std::endl;
        std::cout << "enter Again: ";
        std::cin >> LoanAmount;
    }

    std::cout << "enter interest rate (1-100%): ";
    std::cin >> InterestRate;
    while (InterestRate < 1.0 || InterestRate > 100.0)
    {
        std::cout << "invalid rate, try again: ";
        std::cin >> InterestRate;
    }

    InterestRate = InterestRate / 100;

    std::cout << "monthly payment? ";
    std::cin >> MonthlyPayment;

    while (MonthlyPayment < 0 || MonthlyPayment > LoanAmount)
    {
        std::cout << "invalid value" << std::endl;
        std::cout << "Monthly payment? ";
        std::cin >> MonthlyPayment;
    }

    std::cout << "payment: $" << MonthlyPayment << std::endl;

    double balance = LoanAmount;
    double totalInterest = 0;
    double totalPayments = 0;

    std::cout << "Month Balance Payment Interest NewBalance" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    for (int month = 1; month <= 12; month++)
    {
        double interest = balance * InterestRate;

        if (MonthlyPayment > balance)
            MonthlyPayment = balance;

        balance -= MonthlyPayment;
        totalPayments += MonthlyPayment;
        balance += interest;
        totalInterest += interest;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << month << "  " << balance - interest << "  "
            << MonthlyPayment << "  " << interest << "  "
            << balance << std::endl;
    }

    std::cout << "Total Payments: " << totalPayments
        << "  Total Interest: " << totalInterest << std::endl;

    std::cout << "Done!" << std::endl;

    return 0;
}
