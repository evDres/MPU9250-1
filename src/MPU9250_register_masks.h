#ifndef _MPU9250_REGSITER_MASKS_H
#define _MPU9250_REGSITER_MASKS_H

#include <BitMasks.h>

//x1A CONFIG
#define MPU9250_MASK_FIFO_MODE         BIT_6
#define MPU9250_MASK_EXT_SYNC_SET      BIT_5_3
#define MPU9250_MASK_DLPF_CFG          BIT_2_0
#define MPU9250_SHIFT_FIFO_MODE        6
#define MPU9250_SHIFT_EXT_SYNC_SET     3
#define MPU9250_SHIFT_DLPF_CFG         0

//x1B GYRO_CONFIG
#define MPU9250_MASK_GYRO_CT_EN        BIT_7_5
#define MPU9250_MASK_XGYRO_CT_EN       BIT_7
#define MPU9250_MASK_YGYRO_CT_EN       BIT_6
#define MPU9250_MASK_ZGYRO_CT_EN       BIT_5
#define MPU9250_MASK_GYRO_FS_SEL       BIT_4_3
#define MPU9250_MASK_FCHOICE_B         BIT_1_0
#define MPU9250_SHIFT_GYRO_CT_EN       5
#define MPU9250_SHIFT_GYRO_FS_SEL      3
#define MPU9250_SHIFT_FCHOICE_B        0

#define MPU9250_MASK_GYRO_SCALE        BIT_4_3
//#define MPU9250_MASK_GYRO_FCHOICE      BIT_0_1
#define MPU9250_SHIFT_GYRO_SCALE       3
//#define MPU9250_SHIFT_GYRO_FCHOICE     0

//x1C ACCEL_CONFIG
#define MPU9250_MASK_A_ST_EN           BIT_7_5
#define MPU9250_MASK_AX_ST_EN          BIT_7
#define MPU9250_MASK_AY_ST_EN          BIT_6
#define MPU9250_MASK_AZ_ST_EN          BIT_5
#define MPU9250_MASK_ACCEL_FS_SEL      BIT_4_3
#define MPU9250_SHIFT_A_ST_EN          5
#define MPU9250_SHIFT_ACCEL_FS_SEL     3

#define MPU9250_MASK_ACCEL_SCALE       BIT_4_3
#define MPU9250_SHIFT_ACCEL_SCALE      3

//x1D ACCEL_CONFIG2
/* The documenetation is conflicting here. 
The table says [3:2] and [1:0]
The paragraph [3] and [2:0]

*/
//#define MPU9250_MASK_ACCEL_FCHOICE_B   BIT_3_2
//#define MPU9250_MASK_A_DLPF_CFG        BIT_1_0
//#define MPU9250_SHIFT_ACCEL_FCHOICE_B  2
#define MPU9250_MASK_ACCEL_FCHOICE_B   BIT_3
#define MPU9250_MASK_A_DLPF_CFG        BIT_2_0
#define MPU9250_SHIFT_ACCEL_FCHOICE_B  3
#define MPU9250_SHIFT_A_DLPF_CFG       0

//x1E 30 LP_ACCEL_ODR
#define MPU9250_MASK_LPOSC_CLKSEL      BIT_3_0

//x23 35 FIFO_EN
#define MPU9250_MASK_TEMP_OUT          BIT_7
#define MPU9250_MASK_GYRO_OUT          BIT_6_4
#define MPU9250_MASK_ACCEL_OUT         BIT_3
#define MPU9250_MASK_SLV2              BIT_2
#define MPU9250_MASK_SLV1              BIT_1
#define MPU9250_MASK_SLV0              BIT_0


#define MPU9250_MASK_GYRO_RST          BIT_2
#define MPU9250_MASK_ACCEL_RST         BIT_1
#define MPU9250_MASK_TEMP_RST          BIT_0

//x24-x36 I2C registers

//x37 55 INT_PIN_CFG
#define MPU9250_MASK_ACTL              BIT_7
#define MPU9250_MASK_OPEN              BIT_6
#define MPU9250_MASK_LATCH_INT_EN      BIT_5
#define MPU9250_MASK_INT_ANYRD_2CLEAR  BIT_4
#define MPU9250_MASK_ACTL_FSYNC        BIT_3
#define MPU9250_MASK_FSYNC_INT_MODE_EN BIT_2
#define MPU9250_MASK_BYPASS_EN         BIT_1

//x38 56 INT_ENABLE
#define MPU9250_MASK_WOM_EN            BIT_6
#define MPU9250_MASK_FIFO_OVERFLOW_EN  BIT_4
#define MPU9250_MASK_FSYNC_INT_EN      BIT_3
#define MPU9250_MASK_RAW_RDY_EN        BIT_0

//x3A 58 INT_STATUS
#define MPU9250_MASK_WOM_INT           BIT_6
#define MPU9250_MASK_FIFO_OFLOW_INT    BIT_4
#define MPU9250_MASK_FSYNC_INT         BIT_3
#define MPU9250_MASK_RAW_RDY_INT       BIT_0

//x3B-x60 Read only byte data
//x63-x67 I2C
//x68 SIGNAL_PATH_RESET

//x69 105 MOT_DETECT_CTRL
#define MPU9250_MASK_ACCEL_INTEL_EN    BIT_7
#define MPU9250_MASK_ACCEL_INTEL_MODE  BIT_6

//x6A 106 USER_CTRL
#define MPU9250_MASK_FIFO_EN           BIT_6
#define MPU9250_MASK_I2C_MST_EN        BIT_5
#define MPU9250_MASK_I2C_IF_DIS        BIT_4
#define MPU9250_MASK_FIFO_RST          BIT_2
#define MPU9250_MASK_I2C_MST_RST       BIT_1
#define MPU9250_MASK_SIG_COND_RST      BIT_0

//x6B 107 PWR_MGMT_1
#define MPU9250_MASK_H_RESET           BIT_7
#define MPU9250_MASK_SLEEP             BIT_6
#define MPU9250_MASK_CYCLE             BIT_5
#define MPU9250_MASK_GYRO_STANDBY      BIT_4
#define MPU9250_MASK_PD_PTAT           BIT_3
#define MPU9250_MASK_CLKSEL            BIT_2_0
#define MPU9250_CLKSEL_SHIFT           0

//x6C 108 PWR_MGMT_2
#define MPU9250_MASK_DISABLE_A         BIT_5_3
#define MPU9250_MASK_DISABLE_XA        BIT_5
#define MPU9250_MASK_DISABLE_YA        BIT_4
#define MPU9250_MASK_DISABLE_ZA        BIT_3
#define MPU9250_MASK_DISABLE_G         BIT_2_0
#define MPU9250_MASK_DISABLE_XG        BIT_2
#define MPU9250_MASK_DISABLE_YG        BIT_1
#define MPU9250_MASK_DISABLE_ZG        BIT_0
#define MAKS_MPU9250_DISABLE_ACCEL     BIT_5_3
#define MAKS_MPU9250_DISABLE_GYRO      BIT_2_0
#define MPU9250_SHIFT_DISABLE_A        3
#define MPU9250_SHIFT_DISABLE_G        0



#endif
