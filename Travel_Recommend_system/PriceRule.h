//
// Created by sszg on 22-4-20.
//

#ifndef TRAVEL_RECOMMEND_SYSTEM_PRICERULE_H
#define TRAVEL_RECOMMEND_SYSTEM_PRICERULE_H
#include <string>
#include <vector>
using namespace std;

class PriceRule {
private:
    int sequenceNo;         //序号，不可重復
    string carrier;    //承运人，不能爲空
    string sCity;
    string dCity;
    string nextCarrier;    //后续衔接的航空公司，可为空
    vector <string> agency;   //允许出票的代理人队列
    char surcharge;     //额外费用百分比
public:
    void setRule(int seq,string car,string sC,string dC,string next,string agen,string surch){
        sequenceNo=seq,carrier=car,sCity=sC,dCity=dC,nextCarrier=next;
        if(agen!=" "){
            int cutAt;
            while( (cutAt = agen.find_first_of(",")) != agen.npos ){
                if(cutAt > 0)
                    agency.push_back(agen.substr(0, cutAt));
                agen = agen.substr(cutAt + 1);
            }
            if(agen.length() > 0)
                agency.push_back(agen);
        }
        surcharge=stoi(surch,0,10);
    }
    //获取信息inline内联函数
    inline int Return_sequenceNo(){ return sequenceNo;};
    inline string Return_carrier(){ return carrier;};
    inline string Return_sCity(){ return sCity;};
    inline string Return_dCity(){ return dCity;};
    inline string Return_nextCarrier(){ return nextCarrier;};
    inline vector <string> Return_agency(){ return agency;};
    inline char Return_surcharge(){ return surcharge;};
};


#endif //TRAVEL_RECOMMEND_SYSTEM_PRICERULE_H
