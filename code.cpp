#include <cmath>
#include <iostream>
#include <windows.h>
#include <vector>

double fraction (double x)
{
  return std::fmod(x, 1.0);
}

int charToNum (char x)
{
  if (x < '0' || x > '9')
  {
    return -1;
  }
  return x - '0';
}

bool is2Digits (int x)
{
  if (x < 0) x = -x;
  return x >= 10 && x < 100;

}

bool IsInRange(int a, int b, int num)
{
  int lower;
  int upper;
  if (a<b)
  {
    lower = a;
    upper = b;
  }
  else
  {
    lower = b;
    upper = a;

  }

  return num >= lower && num <= upper;
}

bool isEqual(int a, int b, int c)
{
  return a == b && a == c;
}

int myabs (int x)
{
  return std::abs(x);
}

bool Is35(int x) {
  bool div_3 = (x % 3 == 0);
  bool div_5 = (x % 5 == 0);

  return div_3 != div_5;
}

int Max3(int x, int y, int z) {
  int maximum = x;
  if (y > maximum) {
    maximum = y;
  }
  if (z > maximum) {
    maximum = z;
  }
  return maximum;
}

int Sum2(int x, int y)
{
  int sum = x + y;
  if (sum >= 10 && sum <= 19)
  {
    return 20;
  }
  return sum;
}

std::string Day(int x) {
  switch (x) {
    case 1:
      return "понедельник";
    case 2:
      return "вторник";
    case 3:
      return "среда";
    case 4:
      return "четверг";
    case 5:
      return "пятница";
    case 6:
      return "суббота";
    case 7:
      return "воскресенье";
    default:
      return "это не день недели";
  }
}

std::string ListNums(int x)
{
  std::string result;
  for (int i = 0; i <= x; ++i)
  {
    result += " ";
    result += std::to_string(i);
  }
  return result;
}

std::string Chet(int x)
{
  std::string result;
  for (int i = 0; i <= x; i += 2) {
      result += " ";
    result += std::to_string(i);
  }
  return result;
}

int NumLen(long x)
{
  int count = 0;
  while (x != 0) {
    ++count;
    x /= 10;
  }
  return count;
}

void Square(int x)
{
  for (int row = 0; row < x; ++row) {
    for (int col = 0; col < x; ++col) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
}

void RightTriangle(int x)
{
  for (int row = 1; row <= x; ++row) {
    for (int space = 0; space < x - row; ++space) {
      std::cout << ' ';
    }
    for (int star = 0; star < row; ++star) {
      std::cout << '*';
    }
    std::cout << std::endl;
  }
}

void inputArray(int arr[], int size)
{
  std::cout << "Введите " << size << " элементов массива:\n";

  for (int i = 0; i < size; ++i)
  {
    std::cout << "arr[" << i << "] = ";
    std::cin >> arr[i];
  }
}

int findFirst(int arr[], int size, int x)
{
  for (int i = 0; i < size; ++i)
  {
    if (arr[i] == x)
    {
      return i;
    }
  }

  return -1;
}

int MaxAbs(int arr[], int size)
{
  int best = arr[0];
  for (int i = 1; i < size; ++i)
  {
    if (std::abs(arr[i]) > std::abs(best))
    {
      best = arr[i];
    }
  }
  return best;
}

void PrintArray(int arr[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    std::cout << arr[i];
    if (i < size - 1)
    {
      std::cout << " ";
    }
  }
  std::cout << std::endl;
}

int* ReverseBack(int arr[], int size)
{
  int* result = new int[size];

  for (int i = 0; i < size; ++i)
  {
    result[i] = arr[size - 1 - i];
  }

  return result;
}

int* FindAll(int arr[], int size, int x)
{
  int* result = new int[size + 1];
  int count = 0;

  for (int i = 0; i < size; ++i)
  {
    if (arr[i] == x)
    {
      ++count;
      result[count] = i;
    }
  }

  result[0] = count;
  return result;
}


int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

     int choice;

  while (true)
  {
    std::cout << "\n";
    std::cout << "========================================\n";
    std::cout << "       ПРОГРАММА ДЛЯ РАБОТЫ С ...      \n";
    std::cout << "========================================\n";
    std::cout << "Выберите действие:\n\n";

    std::cout << "  1. Дробная часть.\n";
    std::cout << "  2. Букву в число. \n";
    std::cout << "  3. Двузначное.\n";
    std::cout << "  4. Диапазон.\n";
    std::cout << "  5. Равенство.\n";
    std::cout << "  6. Модуль числа.\n";
    std::cout << "  7. Тридцать пять.\n";
    std::cout << "  8. Тройной максимум.\n";
    std::cout << "  9. Двойная сумма.\n";
    std::cout << " 10. День недели.\n";
    std::cout << " 11. Числа подряд.\n";
    std::cout << " 12. Четные числа.\n";
    std::cout << " 13. Длина числа.\n";
    std::cout << " 14. Квадрат.\n";
    std::cout << " 15. Правый треугольник.\n";
    std::cout << " 16. Поиск первого значения.\n";
    std::cout << " 17. Поиск максимального.\n";
    std::cout << " 18. Добавление массива в массив. \n";
    std::cout << " 19. Возвратный реверс.\n";
    std::cout << " 20. Все вхождения. \n";
    std::cout << "\n";
    std::cout << "  0. Выход из программы\n";
    std::cout << "----------------------------------------\n";
    std::cout << "Ваш выбор: ";

    std::cin >> choice;

    switch (choice) {
      case 1:
      {
        double x ;
        std::cout << "Введите число x: ";
        std::cin >> x;
        x = fraction(x);
        std::cout << "Дробная часть числа  = " << x << std::endl;
        break;
      }


      case 2:
      {
        char y = 0;
        int ans = 0;
        std::cout << "Введите символ от 1 до 9 : ";
        std::cin >> y;
        ans = charToNum(y);
        std::cout << "Преобразуемое число  = " << ans << std::endl;

        break;
      }

      case 3:
      {
        int с = 0;
        std::cout << "Введите двузначное число : ";
        std::cin >> с;
        std::cout << is2Digits(с) << std::endl;

        break;
      }

      case 4:
      {
        int a = 0;
        int b = 0;
        int num = 0;
        std::cout << "Введите границы диапазона (a и b): ";
        std::cin >> a >> b;
        std::cout << "Введите число для проверки: ";
        std::cin >> num;
        if (IsInRange(a, b, num))
        {
          std::cout << "Число " << num << " входит в диапазон ["<< a << ", " << b << "]." << std::endl;
        }
        else
        {
          std::cout << "Число " << num << " не входит в диапазон ["<< a << ", " << b << "]." << std::endl;
        }
        break;
      }

      case 5:
      {
        int q = 0;
        int w = 0;
        int e = 0;
        std::cout << "Введите три числа (a, b и c): ";
        std::cin >> q >> w >> e;
        if (isEqual(q,w,e))
        {
          std::cout << "Числa равны друг другу" << std::endl;
        }
        else
        {
          std::cout << "Числa не равны друг другу" << std::endl;
        }

        break;
      }

      case 6:
      {
        int n = 0;
        std::cout << "Введите число : ";
        std::cin  >> n;
        std::cout<< "Модуль числа = " << myabs(n)<<std::endl;

        break;
      }

      case 7:
      {
        int p = 0;
        std::cout << "Введите число: ";
        std::cin >> p;
        if (Is35(p))
        {
          std::cout << "Число " << p << " подходит"<< std::endl;
        }
        else
        {
          std::cout << "Число " << p<< " не подходит"<< std::endl;
        }

        break;
      }

      case 8:
      {
        int first = 0;
        int second = 0 ;
        int third = 0 ;
        std::cout << "Введите три числа: ";
        std::cin >> first >> second >> third;

        int answer = Max3(first, second, third);
        std::cout << "Максимум = " << answer << std::endl;
        break;
      }

      case 9:
      {
        int x = 0;
        int y = 0;
        std::cout << "Введите два числа: ";
        std::cin >> x >> y;

        int result = Sum2(x, y);
        std::cout << "Результат = " << result << std::endl;
        break;
      }

      case 10:
      {
        int x = 0;
        std::cout << "Введите номер дня недели: ";
        std::cin >> x;

        std::string result = Day(x);
        std::cout << "Результат: " << result << std::endl;
        break;
      }

      case 11:
      {
        int row = 0;
        std::cout << "Введите число: ";
        std::cin >> row;

        std::string result = ListNums(row);
        std::cout << "Результат: " << result << std::endl;
        break;
      }

      case 12:
      {
        int x = 0;
        std::cout << "Введите число: ";
        std::cin >> x;

        std::string result = Chet(x);
        std::cout << "Результат: " << result << std::endl;
        break;
      }

      case 13:
      {
        long x = 0;
        std::cout << "Введите число: ";
        std::cin >> x;

        int result = NumLen(x);
        std::cout << "Количество знаков = " << result << std::endl;
        break;
      }

      case 14:
      {
        int x = 0;
        std::cout << "Введите размер квадрата: ";
        std::cin >> x;
        Square(x);
        break;
      }

      case 15:
      {
        int x = 0;
        std::cout << "Введите высоту треугольника: ";
        std::cin >> x;

        RightTriangle(x);
        break;
      }

      case 16:
      {
        int size = 0;

        std::cout << "Введите размер массива: ";
        std::cin >> size;

        int arr[size];

        inputArray(arr, size);

        int x;
        std::cout << "Введите число для поиска: ";
        std::cin >> x;

        int result = findFirst(arr, size, x);

        if (result != -1)
        {
          std::cout << "Первое вхождение числа " << x
                    << " находится под индексом " << result << ".\n";
        }
        else
        {
          std::cout << "Число " << x << " не найдено в массиве.\n";
        }
        break;
      }

      case 17:
      {
        int size = 0;

        std::cout << "Введите размер массива: ";
        std::cin >> size;

        int arr[size];

        inputArray(arr, size);

        int result = MaxAbs(arr, size);
        std::cout << "Наибольшее по модулю значение: " << result << std::endl;
        break;
      }

      case 18:
        // function18();
        break;


      case 19:
      {
        int size = 0;

        std::cout << "Введите размер массива: ";
        std::cin >> size;

        int arr[size];

        inputArray(arr, size);

        int* result = ReverseBack(arr, size);

        std::cout << "Результат: ";
        PrintArray(result, size);

        break;
      }

      case 20:
      {
        int size = 0;

        std::cout << "Введите размер массива: ";
        std::cin >> size;

        int arr[size];

        inputArray(arr, size);

        int x = 0;
        std::cout << "Введите число для поиска: ";
        std::cin >> x;

        int* result = FindAll(arr, size, x);
        int count = result[0];

        if (count > 0) {
          std::cout << "Индексы вхождений числа " << x << ": ";
          PrintArray(result + 1, count);
        } else {
          std::cout << "Число " << x << " не найдено в массиве." << std::endl;
        }
        break;
      }

      case 0:
        std::cout << "\nСпасибо за использование программы!\n";
        return 0;

      default:
        std::cout << "\nОшибка: такого пункта нет.\n";
        std::cout << "Пожалуйста, выберите число от 0 до 15.\n";
        break;
    }
  }



}
