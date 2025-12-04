#include <iostream>

class Button
{
    public:
    Button() = default;
    void display()
    {
        std::cout << "Button pressed\n";   
    }
};

// class Window
// {
//     public:
//     Window() 
//     {
//         button_ = new Button();
//     }
//     ~Window()
//     {
//         delete button_;
//     }
//     void display()
//     {
//         button_->display();
//     }
//     private:
//     Button* button_;
// };

class Window
{
    public:
    Window() = default;
    void display()
    {
        button_.display();
    }
    private:
    Button button_;
};

int main()
{
    Window window;
    window.display();
    return 0;
}