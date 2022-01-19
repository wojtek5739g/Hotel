#ifndef GROUP_OF_GUESTS_H
#define GROUP_OF_GUESTS_H
#include "worker.h"

class GroupOfGuests
{
    private:
	    int id;
        int size;           // number of people in the group
	    int acc_length;     // length of accomodation in days
	    int cash;
        int room_id;
    public:
        GroupOfGuests(int id, int size, int length_of_accomodation, int cash);
        int get_cash() const;
        int get_size() const;
        int get_room_id() const;
        void extend_the_time_of_accomodation(int days);
        int order_the_meal();
        int go_to_the_restaurant();
        void demand_waking_up();
        int go_to_the_casino();
        void give_tip(Worker& receiver);


};

#endif