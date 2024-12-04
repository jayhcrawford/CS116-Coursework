#include <iostream>

/*
I made some changes to this so that it:
  - draws a rectangle rather than a square
  - continuously prompts for input
  - has a different prompt message after the first rectangle is printed
*/

void drawRect(int x, int y)
{

    if (x > 1)
    {
        for (int i = 0; i < x; i += 1)
        {
            std::cout << " * ";
        }
        std::cout << std::endl;
        for (int i = 0; i < y - 2; i += 1)
        {
            std::cout << " * ";
            for (int j = 0; j < x - 2; j += 1)
            {
                std::cout << "   ";
            }

            std::cout << " * " << std::endl;
        }

        for (int i = 0; i < x; i += 1)
        {
            std::cout << " * ";
        }

        std::cout << std::endl << std::endl;
    }
}


int main(int argc, const char* argv[]) {

    int printCount = 0;

    beginning:

    int rectLength;
    int rectHeight;

    if (printCount == 0)
    {
        std::cout << "Please enter how long you would like the rectangle to be: " << std::endl;
    }
    else
    {
        std::cout << "Please enter how long you would like the next rectangle to be: " << std::endl;
    }


    std::cin >> rectLength;
    std::cout << '\n';

    if (printCount == 0)
    {
        std::cout << "Please enter how tall you would like the rectangle to be: " << std::endl;
    }
    else
    {
        std::cout << "Please enter how tall you would like the next rectangle to be: " << std::endl;
    }

    std::cin >> rectHeight;
    std::cout << '\n';


    drawRect(rectLength, rectHeight);
    printCount += 1;
    goto beginning;

    return 0;

}