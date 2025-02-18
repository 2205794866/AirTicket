//
// Created by sszg on 22-4-20.
//

#ifndef TRAVEL_RECOMMEND_SYSTEM_FLIGHTREQUEST_H
#define TRAVEL_RECOMMEND_SYSTEM_FLIGHTREQUEST_H
#include "Time.h"
#include <string>
#include <vector>
using namespace  std;
class FlightRequest {           //搜索请求
private:
    Time time{};                  //日期
    string sCity;          //起止城市
    string dCity;
    vector<string> agency;        //代理人
    char passengerNum;      //乘客數目
//    char maxAnsNUm;
public:
    //获取信息
    FlightRequest(Time t, string s, string d, vector<string> agc, char passnum);
    inline Time timeVal(){ return time;};
    inline string Return_sCity(){ return sCity;};
    inline string Return_dCity(){ return dCity;};
    inline vector<string> Return_agency(){ return agency;};
    inline char Return_passengerNUm() const{ return passengerNum;};
//    inline char Return_maxAnsNUm() const{ return maxAnsNUm;};
}; 
#endif //TRAVEL_RECOMMEND_SYSTEM_FLIGHTREQUEST_H
