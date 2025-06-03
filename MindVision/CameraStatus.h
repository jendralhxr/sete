
#ifndef __CAMERA_STATUS_DEF__
#define __CAMERA_STATUS_DEF__

typedef int CameraSdkStatus;


/*³£ÓÃµÄºê*/
#define SDK_SUCCESS(_FUC_)              ((_FUC_) == CAMERA_STATUS_SUCCESS)

#define SDK_UNSUCCESS(_FUC_)            ((_FUC_) != CAMERA_STATUS_SUCCESS)

#define SDK_UNSUCCESS_RETURN(_FUC_,RET) if((RET = (_FUC_)) != CAMERA_STATUS_SUCCESS)\
                                        {\
                                            return RET;\
                                        }

#define SDK_UNSUCCESS_BREAK(_FUC_)      if((_FUC_) != CAMERA_STATUS_SUCCESS)\
                                        {\
                                            break;\
                                        }


/* ³£ÓÃ´íÎó  */

#define CAMERA_STATUS_SUCCESS                    0   // ²Ù×÷³É¹¦
#define CAMERA_STATUS_FAILED                    -1   // ²Ù×÷Ê§°Ü
#define CAMERA_STATUS_INTERNAL_ERROR            -2   // ÄÚ²¿´íÎó
#define CAMERA_STATUS_UNKNOW                    -3   // Î´Öª´íÎó
#define CAMERA_STATUS_NOT_SUPPORTED             -4   // ²»Ö§³Ö¸Ã¹¦ÄÜ
#define CAMERA_STATUS_NOT_INITIALIZED           -5   // ³õÊ¼»¯Î´Íê³É
#define CAMERA_STATUS_PARAMETER_INVALID         -6   // ²ÎÊýÎÞÐ§
#define CAMERA_STATUS_PARAMETER_OUT_OF_BOUND    -7   // ²ÎÊýÔ½½ç
#define CAMERA_STATUS_UNENABLED                 -8   // Î´Ê¹ÄÜ
#define CAMERA_STATUS_USER_CANCEL               -9   // ÓÃ»§ÊÖ¶¯È¡ÏûÁË£¬±ÈÈçroiÃæ°åµã»÷È¡Ïû£¬·µ»Ø
#define CAMERA_STATUS_PATH_NOT_FOUND            -10  // ×¢²á±íÖÐÃ»ÓÐÕÒµ½¶ÔÓ¦µÄÂ·¾¶
#define CAMERA_STATUS_SIZE_DISMATCH             -11  // »ñµÃÍ¼ÏñÊý¾Ý³¤¶ÈºÍ¶¨ÒåµÄ³ß´ç²»Æ¥Åä
#define CAMERA_STATUS_TIME_OUT                  -12  // ³¬Ê±´íÎó
#define CAMERA_STATUS_IO_ERROR                  -13  // Ó²¼þIO´íÎó
#define CAMERA_STATUS_COMM_ERROR                -14  // Í¨Ñ¶´íÎó
#define CAMERA_STATUS_BUS_ERROR                 -15  // ×ÜÏß´íÎó
#define CAMERA_STATUS_NO_DEVICE_FOUND           -16  // Ã»ÓÐ·¢ÏÖÉè±¸
#define CAMERA_STATUS_NO_LOGIC_DEVICE_FOUND     -17  // Î´ÕÒµ½Âß¼­Éè±¸
#define CAMERA_STATUS_DEVICE_IS_OPENED          -18  // Éè±¸ÒÑ¾­´ò¿ª
#define CAMERA_STATUS_DEVICE_IS_CLOSED          -19  // Éè±¸ÒÑ¾­¹Ø±Õ
#define CAMERA_STATUS_DEVICE_VEDIO_CLOSED       -20  // Ã»ÓÐ´ò¿ªÉè±¸ÊÓÆµ£¬µ÷ÓÃÂ¼ÏñÏà¹ØµÄº¯ÊýÊ±£¬Èç¹ûÏà»úÊÓÆµÃ»ÓÐ´ò¿ª£¬Ôò»Ø·µ»Ø¸Ã´íÎó¡£
#define CAMERA_STATUS_NO_MEMORY                 -21  // Ã»ÓÐ×ã¹»ÏµÍ³ÄÚ´æ
#define CAMERA_STATUS_FILE_CREATE_FAILED        -22  // ´´½¨ÎÄ¼þÊ§°Ü
#define CAMERA_STATUS_FILE_INVALID              -23  // ÎÄ¼þ¸ñÊ½ÎÞÐ§
#define CAMERA_STATUS_WRITE_PROTECTED           -24  // Ð´±£»¤£¬²»¿ÉÐ´
#define CAMERA_STATUS_GRAB_FAILED               -25  // Êý¾Ý²É¼¯Ê§°Ü
#define CAMERA_STATUS_LOST_DATA                 -26  // Êý¾Ý¶ªÊ§£¬²»ÍêÕû
#define CAMERA_STATUS_EOF_ERROR                 -27  // Î´½ÓÊÕµ½Ö¡½áÊø·û
#define CAMERA_STATUS_BUSY                      -28  // ÕýÃ¦(ÉÏÒ»´Î²Ù×÷»¹ÔÚ½øÐÐÖÐ)£¬´Ë´Î²Ù×÷²»ÄÜ½øÐÐ
#define CAMERA_STATUS_WAIT                      -29  // ÐèÒªµÈ´ý(½øÐÐ²Ù×÷µÄÌõ¼þ²»³ÉÁ¢)£¬¿ÉÒÔÔÙ´Î³¢ÊÔtrf
#define CAMERA_STATUS_IN_PROCESS                -30  // ÕýÔÚ½øÐÐ£¬ÒÑ¾­±»²Ù×÷¹ý
#define CAMERA_STATUS_IIC_ERROR                 -31  // IIC´«Êä´íÎó
#define CAMERA_STATUS_SPI_ERROR                 -32  // SPI´«Êä´íÎó
#define CAMERA_STATUS_USB_CONTROL_ERROR         -33  // USB¿ØÖÆ´«Êä´íÎó
#define CAMERA_STATUS_USB_BULK_ERROR            -34  // USB BULK´«Êä´íÎó
#define CAMERA_STATUS_SOCKET_INIT_ERROR         -35  // ÍøÂç´«ÊäÌ×¼þ³õÊ¼»¯Ê§°Ü
#define CAMERA_STATUS_GIGE_FILTER_INIT_ERROR    -36  // ÍøÂçÏà»úÄÚºË¹ýÂËÇý¶¯³õÊ¼»¯Ê§°Ü£¬Çë¼ì²éÊÇ·ñÕýÈ·°²×°ÁËÇý¶¯£¬»òÕßÖØÐÂ°²×°¡£
#define CAMERA_STATUS_NET_SEND_ERROR            -37  // ÍøÂçÊý¾Ý·¢ËÍ´íÎó
#define CAMERA_STATUS_DEVICE_LOST               -38  // ÓëÍøÂçÏà»úÊ§È¥Á¬½Ó£¬ÐÄÌø¼ì²â³¬Ê±
#define CAMERA_STATUS_DATA_RECV_LESS            -39  // ½ÓÊÕµ½µÄ×Ö½ÚÊý±ÈÇëÇóµÄÉÙ
#define CAMERA_STATUS_FUNCTION_LOAD_FAILED      -40  // ´ÓÎÄ¼þÖÐ¼ÓÔØ³ÌÐòÊ§°Ü
#define CAMERA_STATUS_CRITICAL_FILE_LOST        -41  // ³ÌÐòÔËÐÐËù±ØÐëµÄÎÄ¼þ¶ªÊ§¡£
#define CAMERA_STATUS_SENSOR_ID_DISMATCH        -42  // ¹Ì¼þºÍ³ÌÐò²»Æ¥Åä£¬Ô­ÒòÊÇÏÂÔØÁË´íÎóµÄ¹Ì¼þ¡£
#define CAMERA_STATUS_OUT_OF_RANGE              -43  // ²ÎÊý³¬³öÓÐÐ§·¶Î§¡£
#define CAMERA_STATUS_REGISTRY_ERROR            -44  // °²×°³ÌÐò×¢²á´íÎó¡£ÇëÖØÐÂ°²×°³ÌÐò£¬»òÕßÔËÐÐ°²×°Ä¿Â¼Setup/Installer.exe
#define CAMERA_STATUS_ACCESS_DENY               -45  // ½ûÖ¹·ÃÎÊ¡£Ö¸¶¨Ïà»úÒÑ¾­±»ÆäËû³ÌÐòÕ¼ÓÃÊ±£¬ÔÙÉêÇë·ÃÎÊ¸ÃÏà»ú£¬»á·µ»Ø¸Ã×´Ì¬¡£(Ò»¸öÏà»ú²»ÄÜ±»¶à¸ö³ÌÐòÍ¬Ê±·ÃÎÊ)
#define CAMERA_STATUS_CAMERA_NEED_RESET         -46  // ±íÊ¾Ïà»úÐèÒª¸´Î»ºó²ÅÄÜÕý³£Ê¹ÓÃ£¬´ËÊ±ÇëÈÃÏà»ú¶ÏµçÖØÆô£¬»òÕßÖØÆô²Ù×÷ÏµÍ³ºó£¬±ã¿ÉÕý³£Ê¹ÓÃ¡£
#define CAMERA_STATUS_ISP_MOUDLE_NOT_INITIALIZED -47 // ISPÄ£¿éÎ´³õÊ¼»¯
#define CAMERA_STATUS_ISP_DATA_CRC_ERROR        -48  // Êý¾ÝÐ£Ñé´íÎó
#define CAMERA_STATUS_MV_TEST_FAILED            -49  // Êý¾Ý²âÊÔÊ§°Ü
#define CAMERA_STATUS_INTERNAL_ERR1             -50	 // ÄÚ²¿´íÎó1
#define CAMERA_STATUS_U3V_NO_CONTROL_EP			-51	 // U3V¿ØÖÆ¶ËµãÎ´ÕÒµ½
#define CAMERA_STATUS_U3V_CONTROL_ERROR			-52	 // U3V¿ØÖÆÍ¨Ñ¶´íÎó
#define CAMERA_STATUS_INVALID_FRIENDLY_NAME		-53	 ///< \~chinese ÎÞÐ§µÄÉè±¸Ãû£¬Ãû×ÖÀï²»ÄÜ°üº¬ÒÔÏÂ×Ö·û(\/:*?"<>|") \~english Invalid device name, the name cannot contain the following characters (\/:*?"<>|")
#define CAMERA_STATUS_FORMAT_ERROR				-54	 ///< \~chinese ¸ñÊ½´íÎó \~english Format error
#define CAMERA_STATUS_PCIE_OPEN_ERROR			-55  ///< \~chinese PCIEÉè±¸´ò¿ªÊ§°Ü \~english PCIE device open failed
#define CAMERA_STATUS_PCIE_COMM_ERROR			-56  ///< \~chinese PCIEÉè±¸Í¨Ñ¶Ê§°Ü \~english PCIE device communication failed
#define CAMERA_STATUS_PCIE_DDR_ERROR			-57  ///< \~chinese PCIE DDR´íÎó \~english PCIE DDR error



//ºÍAIAÖÆ¶¨µÄ±ê×¼ÏàÍ¬
/*#define CAMERA_AIA_SUCCESS                        0x0000 */
#define CAMERA_AIA_PACKET_RESEND                          0x0100 //¸ÃÖ¡ÐèÒªÖØ´«
#define CAMERA_AIA_NOT_IMPLEMENTED                        0x8001 //Éè±¸²»Ö§³ÖµÄÃüÁî
#define CAMERA_AIA_INVALID_PARAMETER                      0x8002 //ÃüÁî²ÎÊý·Ç·¨
#define CAMERA_AIA_INVALID_ADDRESS                        0x8003 //²»¿É·ÃÎÊµÄµØÖ·
#define CAMERA_AIA_WRITE_PROTECT                          0x8004 //·ÃÎÊµÄ¶ÔÏó²»¿ÉÐ´
#define CAMERA_AIA_BAD_ALIGNMENT                          0x8005 //·ÃÎÊµÄµØÖ·Ã»ÓÐ°´ÕÕÒªÇó¶ÔÆë
#define CAMERA_AIA_ACCESS_DENIED                          0x8006 //Ã»ÓÐ·ÃÎÊÈ¨ÏÞ
#define CAMERA_AIA_BUSY                                   0x8007 //ÃüÁîÕýÔÚ´¦ÀíÖÐ
#define CAMERA_AIA_DEPRECATED                             0x8008 //0x8008-0x0800B  0x800F  ¸ÃÖ¸ÁîÒÑ¾­·ÏÆú
#define CAMERA_AIA_PACKET_UNAVAILABLE                     0x800C //°üÎÞÐ§
#define CAMERA_AIA_DATA_OVERRUN                           0x800D //Êý¾ÝÒç³ö£¬Í¨³£ÊÇÊÕµ½µÄÊý¾Ý±ÈÐèÒªµÄ¶à
#define CAMERA_AIA_INVALID_HEADER                         0x800E //Êý¾Ý°üÍ·²¿ÖÐÄ³Ð©ÇøÓòÓëÐ­Òé²»Æ¥Åä
#define CAMERA_AIA_PACKET_NOT_YET_AVAILABLE               0x8010 //Í¼Ïñ·Ö°üÊý¾Ý»¹Î´×¼±¸ºÃ£¬¶àÓÃÓÚ´¥·¢Ä£Ê½£¬Ó¦ÓÃ³ÌÐò·ÃÎÊ³¬Ê±
#define CAMERA_AIA_PACKET_AND_PREV_REMOVED_FROM_MEMORY    0x8011 //ÐèÒª·ÃÎÊµÄ·Ö°üÒÑ¾­²»´æÔÚ¡£¶àÓÃÓÚÖØ´«Ê±Êý¾ÝÒÑ¾­²»ÔÚ»º³åÇøÖÐ
#define CAMERA_AIA_PACKET_REMOVED_FROM_MEMORY             0x8012 //CAMERA_AIA_PACKET_AND_PREV_REMOVED_FROM_MEMORY
#define CAMERA_AIA_NO_REF_TIME                            0x0813 //Ã»ÓÐ²Î¿¼Ê±ÖÓÔ´¡£¶àÓÃÓÚÊ±¼äÍ¬²½µÄÃüÁîÖ´ÐÐÊ±
#define CAMERA_AIA_PACKET_TEMPORARILY_UNAVAILABLE         0x0814 //ÓÉÓÚÐÅµÀ´ø¿íÎÊÌâ£¬µ±Ç°·Ö°üÔÝÊ±²»¿ÉÓÃ£¬ÐèÉÔºó½øÐÐ·ÃÎÊ
#define CAMERA_AIA_OVERFLOW                               0x0815 //Éè±¸¶ËÊý¾ÝÒç³ö£¬Í¨³£ÊÇ¶ÓÁÐÒÑÂú
#define CAMERA_AIA_ACTION_LATE                            0x0816 //ÃüÁîÖ´ÐÐÒÑ¾­³¬¹ýÓÐÐ§µÄÖ¸¶¨Ê±¼ä
#define CAMERA_AIA_ERROR                                  0x8FFF //´íÎó





#endif
