/*******************************************************************************
* File Name: COMin.h  
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

#if !defined(CY_PINS_COMin_H) /* Pins COMin_H */
#define CY_PINS_COMin_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "COMin_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 COMin__PORT == 15 && ((COMin__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    COMin_Write(uint8 value);
void    COMin_SetDriveMode(uint8 mode);
uint8   COMin_ReadDataReg(void);
uint8   COMin_Read(void);
void    COMin_SetInterruptMode(uint16 position, uint16 mode);
uint8   COMin_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the COMin_SetDriveMode() function.
     *  @{
     */
        #define COMin_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define COMin_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define COMin_DM_RES_UP          PIN_DM_RES_UP
        #define COMin_DM_RES_DWN         PIN_DM_RES_DWN
        #define COMin_DM_OD_LO           PIN_DM_OD_LO
        #define COMin_DM_OD_HI           PIN_DM_OD_HI
        #define COMin_DM_STRONG          PIN_DM_STRONG
        #define COMin_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define COMin_MASK               COMin__MASK
#define COMin_SHIFT              COMin__SHIFT
#define COMin_WIDTH              1u

/* Interrupt constants */
#if defined(COMin__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in COMin_SetInterruptMode() function.
     *  @{
     */
        #define COMin_INTR_NONE      (uint16)(0x0000u)
        #define COMin_INTR_RISING    (uint16)(0x0001u)
        #define COMin_INTR_FALLING   (uint16)(0x0002u)
        #define COMin_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define COMin_INTR_MASK      (0x01u) 
#endif /* (COMin__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define COMin_PS                     (* (reg8 *) COMin__PS)
/* Data Register */
#define COMin_DR                     (* (reg8 *) COMin__DR)
/* Port Number */
#define COMin_PRT_NUM                (* (reg8 *) COMin__PRT) 
/* Connect to Analog Globals */                                                  
#define COMin_AG                     (* (reg8 *) COMin__AG)                       
/* Analog MUX bux enable */
#define COMin_AMUX                   (* (reg8 *) COMin__AMUX) 
/* Bidirectional Enable */                                                        
#define COMin_BIE                    (* (reg8 *) COMin__BIE)
/* Bit-mask for Aliased Register Access */
#define COMin_BIT_MASK               (* (reg8 *) COMin__BIT_MASK)
/* Bypass Enable */
#define COMin_BYP                    (* (reg8 *) COMin__BYP)
/* Port wide control signals */                                                   
#define COMin_CTL                    (* (reg8 *) COMin__CTL)
/* Drive Modes */
#define COMin_DM0                    (* (reg8 *) COMin__DM0) 
#define COMin_DM1                    (* (reg8 *) COMin__DM1)
#define COMin_DM2                    (* (reg8 *) COMin__DM2) 
/* Input Buffer Disable Override */
#define COMin_INP_DIS                (* (reg8 *) COMin__INP_DIS)
/* LCD Common or Segment Drive */
#define COMin_LCD_COM_SEG            (* (reg8 *) COMin__LCD_COM_SEG)
/* Enable Segment LCD */
#define COMin_LCD_EN                 (* (reg8 *) COMin__LCD_EN)
/* Slew Rate Control */
#define COMin_SLW                    (* (reg8 *) COMin__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define COMin_PRTDSI__CAPS_SEL       (* (reg8 *) COMin__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define COMin_PRTDSI__DBL_SYNC_IN    (* (reg8 *) COMin__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define COMin_PRTDSI__OE_SEL0        (* (reg8 *) COMin__PRTDSI__OE_SEL0) 
#define COMin_PRTDSI__OE_SEL1        (* (reg8 *) COMin__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define COMin_PRTDSI__OUT_SEL0       (* (reg8 *) COMin__PRTDSI__OUT_SEL0) 
#define COMin_PRTDSI__OUT_SEL1       (* (reg8 *) COMin__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define COMin_PRTDSI__SYNC_OUT       (* (reg8 *) COMin__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(COMin__SIO_CFG)
    #define COMin_SIO_HYST_EN        (* (reg8 *) COMin__SIO_HYST_EN)
    #define COMin_SIO_REG_HIFREQ     (* (reg8 *) COMin__SIO_REG_HIFREQ)
    #define COMin_SIO_CFG            (* (reg8 *) COMin__SIO_CFG)
    #define COMin_SIO_DIFF           (* (reg8 *) COMin__SIO_DIFF)
#endif /* (COMin__SIO_CFG) */

/* Interrupt Registers */
#if defined(COMin__INTSTAT)
    #define COMin_INTSTAT            (* (reg8 *) COMin__INTSTAT)
    #define COMin_SNAP               (* (reg8 *) COMin__SNAP)
    
	#define COMin_0_INTTYPE_REG 		(* (reg8 *) COMin__0__INTTYPE)
#endif /* (COMin__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_COMin_H */


/* [] END OF FILE */
