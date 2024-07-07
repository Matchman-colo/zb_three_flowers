 #include "taskwarning.h"

taskWarning::taskWarning(QObject *parent) : QObject(parent)
{

}

void taskWarning::TaskWarning()
{
    unsigned int error_index = 0x0000;
    double data_compare;
    double data_compare_2;
#ifdef test

    if((temp1 == 0) && (humi1 == 0) && (light1 == 0))
    {
        state_nodeOne = 0;
    }
    else
    {
        state_nodeOne = 1;
    }
    if((temp2 == 0) && (humi2 == 0) && (light2 == 0))
    {
        state_nodeTwo = 0;
    }
    else
    {
        state_nodeTwo = 1;
    }
    if((temp3 == 0) && (humi3 == 0) && (light3 == 0))
    {
        state_nodeThr = 0;
    }
    else
    {
        state_nodeThr = 1;
    }
#else
    /* Task of determining whether the node is online */
    if(nodeNumber == 1)
    {
        if((temp1 == 0) && (humi1 == 0) && (light1 == 0)&&(powder1 == 0))
        {
            state_nodeOne = 0;
        }
        else
        {
            state_nodeOne = 1;
        }
    }
    else if(nodeNumber == 2)
    {
        if((temp2 == 0) && (humi2 == 0) && (light2 == 0)&&(powder2 == 0))
        {
            state_nodeTwo = 0;
        }
        else
        {
            state_nodeTwo = 1;
        }
    }
    else if(nodeNumber == 3)
    {
        if((temp3 == 0) && (humi3 == 0) && (light3 == 0)&&(powder3 == 0))
        {
            state_nodeThr = 0;
        }
        else
        {
            state_nodeThr = 1;
        }
    }
#endif
    /* Task of Warning */
    if(state_nodeOne)
    {
        /* Max && Min */
        if((temp1 > temp_max) || (temp1 < temp_min))
        {
            error_index |= 0x01;
            error1 = 1;
        }
//        else
//        {
//            error_index &= ~0x01;
//            error1 = 0;
//        }
        if((humi1 > humi_max) || (humi1 < humi_min))
        {
            error_index |= 0x02;
            error2 = 1;
        }
//        else
//        {
//            error_index &= ~0x02;
//            error2 = 0;
//        }

        if((light1 > light_max) || (light1 < light_min))
        {
            error_index |= 0x04;
            error3 = 1;
        }
//        else
//        {
//            error_index &= ~0x04;
//            error3 = 0;
//        }
        if((powder1 > powder_max) || (powder1 < powder_min))
        {
            error_index |= 0x1000;
            error3 = 1;
        }

        /* Compare */
        if(state_nodeTwo && state_nodeThr)
        {
            data_compare = temp1 - temp2;
            data_compare_2 = temp1 - temp3;
            if((qAbs(data_compare) > temp_compare) && (qAbs(data_compare_2) > temp_compare))
            {
                error_index |= 0x01;
                error1 = 1;
            }
//            else
//            {
//                error_index &= ~0x01;
//                error1 = 0;
//            }
            data_compare = humi1 - humi2;
            data_compare_2 = humi1 - humi3;
            if((qAbs(data_compare) > humi_compare) && (qAbs(data_compare_2) > humi_compare))
            {
                error_index |= 0x02;
                error2 = 1;
            }
//            else
//            {
//                error_index &= ~0x02;
//                error2 = 0;
//            }
            data_compare = light1 - light2;
            data_compare_2 = light1 - light3;
            if((qAbs(data_compare) > light_compare) && (qAbs(data_compare_2) > light_compare))
            {
                error_index |= 0x04;
                error3 = 1;
            }

            data_compare = powder1 - powder2;
            data_compare_2 = powder1 - powder3;
            if((qAbs(data_compare) > powder_compare) && (qAbs(data_compare_2) > powder_compare))
            {
                error_index |= 0x1000;
                error13 = 1;
            }
//            else
//            {
//                error_index &= ~0x04;
//                error3 = 0;
//            }
        }

    }
    if(state_nodeTwo)
    {
        /* Max && Min */
        if((temp2 > temp_max) || (temp2 < temp_min))
        {
            error_index |= 0x08;
            error4 = 1;
        }
//        else
//        {
//            error_index &= ~0x08;
//            error4 = 0;
//        }
        if((humi2 > humi_max) || (humi2 < humi_min))
        {
            error_index |= 0x10;
            error5 = 1;
        }
//        else
//        {
//            error_index &= ~0x10;
//            error5 = 0;
//        }
        if((light2 > light_max) || (light2 < light_min))
        {
            error_index |= 0x20;
            error6 = 1;
        }

        if((powder2 > powder_max) || (powder2 < powder_min))
        {
            error_index |= 0x2000;
            error14 = 1;
        }

//        else
//        {
//            error_index &= ~0x20;
//            error6 = 0;
//        }
        /* Compare */
        if(state_nodeOne && state_nodeThr)
        {
            data_compare = temp2 - temp1;
            data_compare_2 = temp2 - temp3;
            if((qAbs(data_compare) > temp_compare) && (qAbs(data_compare_2) > temp_compare))
            {
                error_index |= 0x08;
                error4 = 1;
            }
//            else
//            {
//                error_index &= ~0x08;
//                error4 = 0;
//            }

            data_compare = humi2 - humi1;
            data_compare_2 = humi2 - humi3;
            if((qAbs(data_compare) > humi_compare) && (qAbs(data_compare_2) > humi_compare))
            {
                error_index |= 0x10;
                error5 = 1;
            }
//            else
//            {
//                error_index &= ~0x10;
//                error5 = 0;
//            }
            data_compare = light2 - light1;
            data_compare_2 = light2 - light3;
            if((qAbs(data_compare) > light_compare) && (qAbs(data_compare_2) > light_compare))
            {
                error_index |= 0x20;
                error6 = 1;
            }

            data_compare = powder1 - powder2;
            data_compare_2 = powder2 - powder3;
            if((qAbs(data_compare) > powder_compare) && (qAbs(data_compare_2) > powder_compare))
            {
                error_index |= 0x2000;
                error14 = 1;
            }
//            else
//            {
//                error_index &= ~0x20;
//                error6 = 0;
//            }
        }
    }
    if(state_nodeThr)
    {
        /* Max && Min */
        if((temp3 > temp_max) || (temp3 < temp_min))
        {
            error_index |= 0x40;
            error7 = 1;
        }
//        else
//        {
//            error_index &= ~0x40;
//            error7 = 0;
//        }
        if((humi3 > humi_max) || (humi3 < humi_min))
        {
            error_index |= 0x80;
            error8 = 1;
        }
//        else
//        {
//            error_index &= ~0x80;
//            error8 = 0;
//        }
        if((light3 > light_max) || (light3 < light_min))
        {
            error_index |= 0x100;
            error9 = 1;
        }

        if((powder3 > powder_max) || (powder3 < powder_min))
        {
            error_index |= 0x4000;
            error15 = 1;
        }
//        else
//        {
//            error_index &= ~0x100;
//            error9 = 0;
//        }
        /* Compare */
        if(state_nodeOne && state_nodeTwo)
        {
            data_compare = temp3 - temp1;
            data_compare_2 = temp3 - temp2;
            if((qAbs(data_compare) > temp_compare) && (qAbs(data_compare_2) > temp_compare))
            {
                error_index |= 0x40;
                error7 = 1;
            }
//            else
//            {
//                error_index &= ~0x40;
//                error7 = 0;
//            }
            data_compare = humi3 - humi1;
            data_compare_2 = humi3 - humi2;
            if((qAbs(data_compare) > humi_compare) && (qAbs(data_compare_2) > humi_compare))
            {
                error_index |= 0x80;
                error8 = 1;
            }
//            else
//            {
//                error_index &= ~0x80;
//                error8 = 0;
//            }
            data_compare = light3 - light1;
            data_compare_2 = light3 - light2;
            if((qAbs(data_compare) > light_compare) && (qAbs(data_compare_2) > light_compare))
            {
                error_index |= 0x100;
                error9 = 1;
            }

            data_compare = powder3 - powder1;
            data_compare_2 = powder3 - powder2;
            if((qAbs(data_compare) > powder_compare) && (qAbs(data_compare_2) > powder_compare))
            {
                error_index |= 0x4000;
                error15= 1;
            }

//            else
//            {
//                error_index &= ~0x100;
//                error9 = 0;
//            }
        }
    }
    emit Signal_Warning(error_index);
}
