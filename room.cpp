#include <iostream>
#include <vector>
#include "room.h"

Room::Room(int id, std::string type, int number_of_beds, double area, double fee, bool additional_furniture)
{
    this-> id = id;
    this-> type = type;
    this-> number_of_beds = number_of_beds;
    this-> area = area;
    this-> fee = fee;
    this-> additional_furniture = additional_furniture;

    GroupOfGuests g;
    this-> guests = &g;
}

void Room::change_guests(GroupOfGuests &guests)
{
    this -> guests = &guests;
    guests.set_room_id(id);
}

int Room::get_id() const
{
    return id;
}

std::string Room::get_type() const
{
    return type;
}

int Room::get_number_of_beds() const
{
    return number_of_beds;
}
double Room::get_area() const
{
    return area;
}

double Room::get_fee() const
{
    return fee;
}

bool Room::get_additional_furniture() const
{
    return additional_furniture;
}

ostream& operator<<(ostream& os, Room& r)
{
    GroupOfGuests g;
    if ((r.guests == &g) != true)
    {
       os << "ID: " << r.get_id() << " " << "Type: " << r.get_type() << " "
       << "Number of beds: " << r.get_number_of_beds() << " "
       << "Area: " << r.get_area() << " "
       << "Fee: " << r.get_fee() << " "
        << "Additional furniture: " << std::boolalpha << r.get_additional_furniture() << "\n"
        << "In this room stays group of guests of id: " << r.guests->get_id() << "\n";
    }
    else
    {
        os << "ID: " << r.get_id() << " " << "Type: " << r.get_type() << " "
       << "Number of beds: " << r.get_number_of_beds() << " "
       << "Area: " << r.get_area() << " "
       << "Fee: " << r.get_fee() << " "
        << "Additional furniture: " << std::boolalpha << r.get_additional_furniture() << "\n "
        << "The room is empty " << "\n";
    }
    return os;
}