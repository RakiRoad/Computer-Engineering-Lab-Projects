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
    work_m_00000000003924610946_0105961027_init();
    work_m_00000000002825143868_2531829270_init();
    work_m_00000000001958136172_0886308060_init();
    work_m_00000000003046502309_2563907772_init();
    work_m_00000000000186299144_0880872684_init();
    work_m_00000000000053656999_2720850422_init();
    work_m_00000000003577660138_0992325708_init();
    work_m_00000000001172752794_1983521484_init();
    work_m_00000000002432670223_1733832700_init();
    work_m_00000000003407551051_4230118071_init();
    work_m_00000000001110249786_2381739659_init();
    work_m_00000000003489301886_1277329626_init();
    work_m_00000000002927522605_2320839585_init();
    work_m_00000000001112007852_0664496283_init();
    work_m_00000000002834797136_0623387026_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002834797136_0623387026");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
