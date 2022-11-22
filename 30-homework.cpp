#include <iostream>
#include <string>
using namespace std;

struct Device
{
  string type;
  string material;
  string name;
  double weight;
  double price;
};

Device deviceFilling()
{
  Device deviceInfo;
  cout << "Enter device type: ";
  cin >> deviceInfo.type;
  cout << "Enter material: ";
  cin >> deviceInfo.material;
  cout << "Enter name: ";
  cin >> deviceInfo.name;
  cout << "Enter price: ";
  cin >> deviceInfo.price;
  cout << "Enter weight: ";
  cin >> deviceInfo.weight;

  return deviceInfo;
}

void ShowDevice(const Device &device)
{
  cout << "Type of device: " << device.type << "\n";
  cout << "Material: " << device.material << "\n";
  cout << "Name: " << device.name << "\n";
  cout << "Price: " << device.price << "\n";
  cout << "Weight: " << device.weight << "\n";
}

int main()
{
  Device device;
  device = deviceFilling();

  ShowDevice(device);
}