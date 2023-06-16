// ItemTracker.h
#ifndef ITEM_TRACKER_H
#define ITEM_TRACKER_H

#include <string>
#include <unordered_map>

class ItemTracker {
public:
    ItemTracker(const std::string fileName);

    
    int getItemWithCount(const std::string item) const;
    void printFrequencyList() const;
    void printHistogram() const;
    

private:
    std::unordered_map<std::string, int> itemFrequency;
    std::string userFile;
};

#endif