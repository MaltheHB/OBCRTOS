/*******************************************************************************
* File Name: arduino_out2.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_arduino_out2_H) /* Pins arduino_out2_H */
#define CY_PINS_arduino_out2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "arduino_out2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 arduino_out2__PORT == 15 && ((arduino_out2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    arduino_out2_Write(uint8 value);
void    arduino_out2_SetDriveMode(uint8 mode);
uint8   arduino_out2_ReadDataReg(void);
uint8   arduino_out2_Read(void);
void    arduino_out2_SetInterruptMode(uint16 position, uint16 mode);
uint8   arduino_out2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the arduino_out2_SetDriveMode() function.
     *  @{
     */
        #define arduino_out2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define arduino_out2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define arduino_out2_DM_RES_UP          PIN_DM_RES_UP
        #define arduino_out2_DM_RES_DWN         PIN_DM_RES_DWN
        #define arduino_out2_DM_OD_LO           PIN_DM_OD_LO
        #define arduino_out2_DM_OD_HI           PIN_DM_OD_HI
        #define arduino_out2_DM_STRONG          PIN_DM_STRONG
        #define arduino_out2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define arduino_out2_MASK               arduino_out2__MASK
#define arduino_out2_SHIFT              arduino_out2__SHIFT
#define arduino_out2_WIDTH              1u

/* Interrupt constants */
#if defined(arduino_out2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in arduino_out2_SetInterruptMode() function.
     *  @{
     */
        #define arduino_out2_INTR_NONE      (uint16)(0x0000u)
        #define arduino_out2_INTR_RISING    (uint16)(0x0001u)
        #define arduino_out2_INTR_FALLING   (uint16)(0x0002u)
        #define arduino_out2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define arduino_out2_INTR_MASK      (0x01u) 
#endif /* (arduino_out2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define arduino_out2_PS                     (* (reg8 *) arduino_out2__PS)
/* Data Register */
#define arduino_out2_DR                     (* (reg8 *) arduino_out2__DR)
/* Port Number */
#define arduino_out2_PRT_NUM                (* (reg8 *) arduino_out2__PRT) 
/* Connect to Analog Globals */                                                  
#define arduino_out2_AG                     (* (reg8 *) arduino_out2__AG)                       
/* Analog MUX bux enable */
#define arduino_out2_AMUX                   (* (reg8 *) arduino_out2__AMUX) 
/* Bidirectional Enable */                                                        
#define arduino_out2_BIE                    (* (reg8 *) arduino_out2__BIE)
/* Bit-mask for Aliased Register Access */
#define arduino_out2_BIT_MASK               (* (reg8 *) arduino_out2__BIT_MASK)
/* Bypass Enable */
#define arduino_out2_BYP                    (* (reg8 *) arduino_out2__BYP)
/* Port wide control signals */                                                   
#define arduino_out2_CTL                    (* (reg8 *) arduino_out2__CTL)
/* Drive Modes */
#define arduino_out2_DM0                    (* (reg8 *) arduino_out2__DM0) 
#define arduino_out2_DM1                    (* (reg8 *) arduino_out2__DM1)
#define arduino_out2_DM2                    (* (reg8 *) arduino_out2__DM2) 
/* Input Buffer Disable Override */
#define arduino_out2_INP_DIS                (* (reg8 *) arduino_out2__INP_DIS)
/* LCD Common or Segment Drive */
#define arduino_out2_LCD_COM_SEG            (* (reg8 *) arduino_out2__LCD_COM_SEG)
/* Enable Segment LCD */
#define arduino_out2_LCD_EN                 (* (reg8 *) arduino_out2__LCD_EN)
/* Slew Rate Control */
#define arduino_out2_SLW                    (* (reg8 *) arduino_out2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define arduino_out2_PRTDSI__CAPS_SEL       (* (reg8 *) arduino_out2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define arduino_out2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) arduino_out2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define arduino_out2_PRTDSI__OE_SEL0        (* (reg8 *) arduino_out2__PRTDSI__OE_SEL0) 
#define arduino_out2_PRTDSI__OE_SEL1        (* (reg8 *) arduino_out2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define arduino_out2_PRTDSI__OUT_SEL0       (* (reg8 *) arduino_out2__PRTDSI__OUT_SEL0) 
#define arduino_out2_PRTDSI__OUT_SEL1       (* (reg8 *) arduino_out2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define arduino_out2_PRTDSI__SYNC_OUT       (* (reg8 *) arduino_out2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(arduino_out2__SIO_CFG)
    #define arduino_out2_SIO_HYST_EN        (* (reg8 *) arduino_out2__SIO_HYST_EN)
    #define arduino_out2_SIO_REG_HIFREQ     (* (reg8 *) arduino_out2__SIO_REG_HIFREQ)
    #define arduino_out2_SIO_CFG            (* (reg8 *) arduino_out2__SIO_CFG)
    #define arduino_out2_SIO_DIFF           (* (reg8 *) arduino_out2__SIO_DIFF)
#endif /* (arduino_out2__SIO_CFG) */

/* Interrupt Registers */
#if defined(arduino_out2__INTSTAT)
    #define arduino_out2_INTSTAT            (* (reg8 *) arduino_out2__INTSTAT)
    #define arduino_out2_SNAP               (* (reg8 *) arduino_out2__SNAP)
    
	#define arduino_out2_0_INTTYPE_REG 		(* (reg8 *) arduino_out2__0__INTTYPE)
#endif /* (arduino_out2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_arduino_out2_H */


/* [] END OF FILE */
