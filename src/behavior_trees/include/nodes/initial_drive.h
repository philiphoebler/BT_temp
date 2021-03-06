#ifndef NODE_INITIAL_DRIVE
#define NODE_INITIAL_DRIVE

#include "actionNode.h"

class InitialDrive : public BTAction {
private:
    bool started;
public:
    InitialDrive(std::string name);
    void start();
    void execute_callback(const behavior_tree_core::BTGoalConstPtr& ptr) override;
    void Halt() override;
    int DrawType() override;
    BT::ReturnStatus Tick() override;
};

#endif
