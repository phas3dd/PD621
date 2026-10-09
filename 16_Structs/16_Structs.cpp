#include <iostream>
using namespace std;

// === ЗАВДАННЯ 1: Пральна машинка ===
struct WashingMachine
{
    char brand[20];
    char color[10];
    float width;
    float length;
    float height;
    char power[10];
    int spin_speed;
    int heating_t;
};

void InputWashingMachine(WashingMachine& washing_machine)
{
    cout << "Enter brand: "; cin >> washing_machine.brand;
    cout << "Enter color: "; cin >> washing_machine.color;
    cout << "Enter width: "; cin >> washing_machine.width;
    cout << "Enter length: "; cin >> washing_machine.length;
    cout << "Enter height: "; cin >> washing_machine.height;
    cout << "Enter power: "; cin >> washing_machine.power;
    cout << "Enter spin speed: "; cin >> washing_machine.spin_speed;
    cout << "Enter heating temperature: "; cin >> washing_machine.heating_t;
}

void ShowWashingMachine(const WashingMachine& washing_machine)
{
    cout << "Brand: " << washing_machine.brand << endl;
    cout << "Color: " << washing_machine.color << endl;
    cout << "Width: " << washing_machine.width << endl;
    cout << "Length: " << washing_machine.length << endl;
    cout << "Height: " << washing_machine.height << endl;
    cout << "Power: " << washing_machine.power << endl;
    cout << "Spin speed: " << washing_machine.spin_speed << endl;
    cout << "Heating temperature: " << washing_machine.heating_t << endl;
}

// === ЗАВДАННЯ 2: Праска ===
struct Iron
{
    char brand[20];
    char model[20];
    char color[10];
    int min_t;
    int max_t;
    bool steam;
    char power[10];
};

void InputIron(Iron& iron)
{
    cout << "Enter brand: "; cin >> iron.brand;
    cout << "Enter model: "; cin >> iron.model;
    cout << "Enter color: "; cin >> iron.color;
    cout << "Enter minimum temperature: "; cin >> iron.min_t;
    cout << "Enter maximum temperature: "; cin >> iron.max_t;
    cout << "Enter steam (1 - Yes, 0 - No): "; cin >> iron.steam;
    cout << "Enter power: "; cin >> iron.power;
}

void ShowIron(const Iron& iron)
{
    cout << "Brand: " << iron.brand << endl;
    cout << "Model: " << iron.model << endl;
    cout << "Color: " << iron.color << endl;
    cout << "Minimum temperature: " << iron.min_t << endl;
    cout << "Maximum temperature: " << iron.max_t << endl;
    // Виправлено: порівняння == замість =
    if (iron.steam) cout << "Steam: Yes" << endl;
    else cout << "Steam: No" << endl;
    cout << "Power: " << iron.power << endl;
}

struct Boiler
{
    char brand[20];
    char color[10];
    char power[10];
    int volume;
    int heating_t;
};

void InputBoiler(Boiler& boiler)
{
    cout << "Enter brand: "; cin >> boiler.brand;
    cout << "Enter color: "; cin >> boiler.color;
    cout << "Enter power: "; cin >> boiler.power;
    cout << "Enter volume: "; cin >> boiler.volume;
    cout << "Enter heating temperature: "; cin >> boiler.heating_t;
}

void ShowBoiler(const Boiler& boiler)
{
    cout << "Brand: " << boiler.brand << endl;
    cout << "Color: " << boiler.color << endl;
    cout << "Power: " << boiler.power << endl;
    cout << "Volume: " << boiler.volume << endl;
    cout << "Heating temperature: " << boiler.heating_t << endl;
}

int main() {
    WashingMachine washing_machine_1 = { "Samsung", "white", 59.5, 65, 85, "2000W", 1200, 90 };
    ShowWashingMachine(washing_machine_1);
    cout << endl;

    WashingMachine washing_machine_2;
    InputWashingMachine(washing_machine_2);
    cout << endl;
    ShowWashingMachine(washing_machine_2);
    cout << endl;

    Iron Iron_1 = { "ElectroLux", "Refine 600", "white", 70, 220, true, "2000W" };
    ShowIron(Iron_1);
    cout << endl;

    Iron Iron_2;
    InputIron(Iron_2);
    cout << endl;
    ShowIron(Iron_2);
    cout << endl;

    Boiler Boiler_1 = { "Ariston", "white", "1500W", 80, 75 };
    ShowBoiler(Boiler_1);
    cout << endl;

    Boiler Boiler_2;
    InputBoiler(Boiler_2);
    cout << endl;
    ShowBoiler(Boiler_2);
    cout << endl;
}