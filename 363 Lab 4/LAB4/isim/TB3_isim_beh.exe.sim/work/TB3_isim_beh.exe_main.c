/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003774933716_4033376979_init();
    work_m_00000000003205160283_1300881431_init();
    work_m_00000000003940929970_1938225339_init();
    work_m_00000000003320518009_0254784918_init();
    work_m_00000000000459220492_2950114442_init();
    work_m_00000000001167090789_1900080952_init();
    work_m_00000000001167090789_1273948991_init();
    work_m_00000000003775747600_0920550704_init();
    work_m_00000000001803804116_0864879315_init();
    work_m_00000000000270227278_0886308060_init();
    work_m_00000000001659495983_1104760230_init();
    work_m_00000000000054060809_3257924705_init();
    work_m_00000000002983351857_3753760773_init();
    work_m_00000000002532918424_2973510161_init();
    work_m_00000000002431391371_0342652068_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002431391371_0342652068");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
