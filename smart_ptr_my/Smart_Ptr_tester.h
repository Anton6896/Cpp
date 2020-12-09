//
// Created by Ant on 09/12/2020.
//

#ifndef BASIC_SMART_PTR_TESTER_H
#define BASIC_SMART_PTR_TESTER_H

#include <ostream>

class Smart_Ptr_tester {
    friend std::ostream &operator<<(std::ostream &os, const Smart_Ptr_tester &smartPtrTester);

private:
    int data;
public:
    explicit Smart_Ptr_tester(int data_ = 0);

    int get_data() const { return data; }

    void show();

    ~Smart_Ptr_tester();
};


#endif //BASIC_SMART_PTR_TESTER_H
