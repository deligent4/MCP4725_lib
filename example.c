/* DO NOT BUILD OR RUN THIS CODE
*  THIS IS JUST A EXAMPLE SHOWING THE LIBRARY USAGE
*/

#include "main.h"
#include "i2c.h"
#include "MCP4725.h"

uint16_t dac_value = 500;

int main(void)
{
    MCP4725 myMCP4725 = MCP4725_init(&hi2c1, MCP4725_ADDR, 3260);

    
    while(1){
        MCP4725_Set_Voltage(&myMCP4725, dac_value);
        /*OR*/
        MCP4725_Set_Voltage_EEPROM(&myMCP4725, dac_value);
    }

}