#include <iostream>

#include <iostream>

// Интерфейс
class Drawable {
public:
    virtual void draw() const = 0; // Чисто виртуальная функция
    virtual ~Drawable() {}
};

// Класс, реализующий интерфейс Drawable
class Triangle : public Drawable {
public:
    void draw() const override {
        std::cout << "Drawing a triangle\n";
    }
};

int main() {
    Drawable* drawable = new Triangle();
    drawable->draw(); // Вывод: Drawing a triangle

    delete drawable;

    return 0;
}
