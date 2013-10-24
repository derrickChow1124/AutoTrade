﻿#ifndef __DISPATCHER__
#define __DISPATCHER__
#include <iostream>
#include <string>    
#include <list>
#include <map>
#include <windows.h>
#include "TradeCube.h"

using namespace std;

struct quoteId_threadId
{
    int tradePlatform;
    string quoteId;
    DWORD threadId;
};

class Dispatcher
{
public:
    Dispatcher();
    virtual ~Dispatcher();
    virtual int addQuote(QuoteItem *pOuoteItem) = 0;
    virtual bool isSupport(int orderType) = 0;
    bool getConnectStatus() { return connectStatus; }
    void setConnectStatus(bool) { this->connectStatus = false; }
    void loseConnection();
    virtual int sendOrder(OrderItem* pOrderItem) = 0;
    virtual int deleteQuote(QuoteItem *pOuoteItem) = 0;
    int addOrderThreadId(int traderId, DWORD traderThreadId);
    int addPriceThreadId(int tradePlatform, string quoteId, DWORD traderThreadId);
    void addUIThreadId(DWORD UIThreadID);
    void returnOrder(OrderItem* pOrderItem);
    void returnTrade(TradeItem* pTradeItem);
    void forwardPrice(PriceItem* pPriceItem);
    void forwardTickPrice(PriceItem* pPriceItem);
    /** 获取所有已经成交的定单 */
    virtual map<int, TradeItem*>& getDoneTrades() = 0;
    /** 获取当前所有未成交的定单 */
    virtual map<int, OrderItem*>& getCurrentOrders() = 0;
    /** 获取指定品种的仓位，调用之前，position必须设置好用户名AccountNo和品种名quoteID */
    virtual void getPosition(Position& position) = 0;

protected:
    bool connectStatus;
    map<int, DWORD> orderThreadIdTable;
    map<int, TradeItem*> doneTrades;
    map<int, OrderItem*> currentOrders;
    int doneTradeCount;
    int currentOrderCount;
private:
    list<quoteId_threadId*> priceThreadIdQueue;
    DWORD UIThreadID;
};

#endif
