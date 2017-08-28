/******************************************************************************

                  ��Ȩ���� (C), 2001-2011, ��Ϊ�������޹�˾

 ******************************************************************************
  �� �� ��   : dmac_auto_cali.h
  �� �� ��   : ����
  ��    ��   : w00269675
  ��������   : 2014��8��27��
  ����޸�   :
  ��������   : dmac_auto_cali.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2014��8��27��
    ��    ��   : w00269675
    �޸�����   : �����ļ�

******************************************************************************/

#ifndef __DMAC_AUTO_CALI_H__
#define __DMAC_AUTO_CALI_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#ifdef _PRE_WLAN_RF_CALI

/*****************************************************************************
  1 ����ͷ�ļ�����
*****************************************************************************/
#include "oal_mem.h"
#include "oal_types.h"
#include "oal_ext_if.h"
#include "oam_ext_if.h"
#include "wlan_spec.h"
#include "frw_ext_if.h"
#include "mac_vap.h"
#include "mac_device.h"
#include "mac_resource.h"
#include "hal_witp_rf.h"
#include "oal_net.h"


#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_DMAC_AUTO_CALI_H

/*****************************************************************************
  2 �궨��
*****************************************************************************/

/*****************************************************************************
  3 ö�ٶ���
*****************************************************************************/

/*****************************************************************************
  4 ȫ�ֱ�������
*****************************************************************************/
extern oal_workqueue_stru  *g_auto_cali_workqueue;           /* У׼��������ȫ�ֱ��� */

/*****************************************************************************
  5 ��Ϣͷ����
*****************************************************************************/


/*****************************************************************************
  6 ��Ϣ����
*****************************************************************************/


/*****************************************************************************
  7 STRUCT����
*****************************************************************************/

/*****************************************************************************
  8 UNION����
*****************************************************************************/


/*****************************************************************************
  9 OTHERS����
*****************************************************************************/


/*****************************************************************************
  10 ��������
*****************************************************************************/
extern oal_uint32  dmac_config_auto_cali(mac_vap_stru *pst_mac_vap, oal_uint8 uc_len, oal_uint8 *puc_param);
extern oal_uint32  dmac_auto_cali_init(oal_void);
extern oal_uint32  dmac_auto_cali_exit(oal_void);

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif

#endif /* end of dmac_auto_cali.h */
