/*
 * 
 * Boeffla touchkey control Samsung Galaxy S5 (Samsung stock version)
 *
 * Author: andip71 (aka Lord Boeffla)
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */


/*****************************************/
// Definitions
/*****************************************/

#define	MODE_NORMAL			0
#define MODE_TOUCHKEY_ONLY	1
#define MODE_OFF			2

#define TIMEOUT_DEFAULT		2
#define TIMEOUT_MIN			1
#define TIMEOUT_MAX			30

#define LED_OFF				0
#define LED_ON				1

#define BTK_CONTROL_VERSION 	"1.1.0"


/*****************************************/
// Function declarations
/*****************************************/

void btkc_store_handle(struct cypress_touchkey_info *info);
int btkc_block_touchkey_backlight(int state);
void btkc_touch(void);
void btkc_touch_start(void);

