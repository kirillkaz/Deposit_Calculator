#include <iostream>
#define MIN_DEPOSIT 10000.0
#define MAX_DEPOSIT 500000.0

int main()
{
    setlocale(LC_ALL, "ru");
    float deposit = 0;
    float result = 0;
    float profit = 0;
    int menu = 0;
    std::cout << "Введите сумму в клада"<<std::endl;
    std::cin >> deposit;
    if (std::cin.fail()) std::cout << "Внимание! Были введены некорректные данные!";
    else if (deposit > MAX_DEPOSIT) std::cout << "Внимание! Сумма вклада не должна превышать 500.000руб";
    else if (deposit < MIN_DEPOSIT) std::cout << "Внимание! Минимальная сумма вклада 10.000руб";
    else {
        std::cout << "Выберите, на какой срок вы хотите положить ваш депозит:" <<std::endl<<"1. 1 месяц - 2%"<<std::endl <<"2. 3 месяца - 3%"<< std::endl <<"3. 6 месяцев - 4,5%"<< std::endl <<"4. 12 месяцев - 5,5%"<<std::endl;
        std::cin >> menu;
        if (std::cin.fail()) std::cout << "Внимание! Были введены некорректные данные!";
        else if (menu > 4 || menu < 1) std::cout << "Внимание! Такого варианта ответа нет в списке!";
        else {
            if (menu == 1) {
                result = deposit * 1.02;
                profit = result - deposit;
                std::cout << "Итоговая сумма состовляет: "<<result<<" руб."<<std::endl;
                std::cout << "Ваша прибыль состовляет "<<profit<<" руб.";
            }
            else if (menu == 2) {
                result = deposit;
                for (int i = 0; i < 3; i++) {
                    result = result * 1.03;

                }
                profit = profit + result - deposit;
                std::cout << "Итоговая сумма состовляет: " << result << " руб." << std::endl;
                std::cout << "Ваша прибыль состовляет " << profit << " руб.";
            }
            else if (menu == 3) {
                result = deposit;
                for (int i = 0; i < 6; i++) {
                    result = result * 1.045;

                }
                profit = profit + result - deposit;
                std::cout << "Итоговая сумма состовляет: " << result << " руб." << std::endl;
                std::cout << "Ваша прибыль состовляет " << profit << " руб.";
            }
            else if (menu == 4) {
                result = deposit;
                for (int i = 0; i < 12; i++) {
                    result = result * 1.055;
                }
                profit = profit + result - deposit;
                std::cout << "Итоговая сумма состовляет: " << result << " руб." << std::endl;
                std::cout << "Ваша прибыль состовляет " << profit << " руб.";
            }
        }
    }
return 0;
}
