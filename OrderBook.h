#pragma once
#include <string>
#include "OrderBookEntry.h"
#include "CSVReader.h"


class OrderBook
{
    private:
        std::vector<OrderBookEntry> orders;
        
    
    public:
        /**constructor to read a csv data file */
        OrderBook(std::string filename);
        /** return a vector of known product in the dataset */
        std::vector<std::string> getKnownProducts();
        /**return a vactor of Orders according to sent filters */
        std::vector<OrderBookEntry> getOrders(OrderBookType type,
                                                std::string product,
                                                std::string timestamp);
        
};

