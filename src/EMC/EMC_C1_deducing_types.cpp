/*!
 * \file EMC_C1_deducing_types.cpp
 * \date 2015/10/02 21:39
 * \author Gu Lu (mc-gulu@GitHub)
 *
 * \brief Implementation of EMC_C1_deducing_types
*/

#include "EMC.h"

#include "UCL_Logging.h"

namespace item_01
{
    //// ���õ����
    //template<typename T>
    //void f1(T& param)
    //{
    //    UCL_Log(typeid(T).name());
    //    UCL_Log(typeid(param).name());
    //}

    void run()
    {
        int x = 27;
        const int& rx = x;

        //f1(x);  // T Ϊ int
        //f1(rx); // T Ϊ const int
    }

    //// �����õ����
    //template<typename T>
    //void f(const T& param);
    //...
    //    int x = 27;
    //const int& rx = x;
    //...
    //    f(x);  // T Ϊ int
    //f(rx); // T Ϊ int


    //// ָ������
    //template<typename T>
    //void f(T* param);
    //int x = 27;
    //const int *px = &x;

    //f(&x);                   // T Ϊ int
    //f(px);                   // T Ϊ const int
}

void Item_01_template_type_deduction()
{
    item_01::run();
}
