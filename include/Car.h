#pragma once

#include <string>

class Car {
public:
    Car(int id, std::string brand, std::string model, std::string vin, int mileage);

    int getId() const;
    const std::string& getBrand() const;
    const std::string& getModel() const;
    const std::string& getVin() const;
    int getMileage() const;

private:
    int id_;
    std::string brand_;
    std::string model_;
    std::string vin_;
    int mileage_;
};
