#ifndef _MAIN_H_
#define _MAIN_H_

#define user_space 131072   //80M��̬�̿ռ䣨64M�û��ռ�+16M������Ӧ�ռ�)  64M=131072*512B
//#define user_space  2096000   //1.2G��̬�̿ռ�
//#define user_space  10066000   //6G  4.8 ��̬�̿ռ�
//#define user_space  100660000   //60G  48 ��̬�̿ռ�

//#define user_space  3774800




//80%��trace����20%��lun�ռ�
#define hot_space 26214
//#define hot_space 26843545
//#define hot_space   754960
//#define hot_space   20132650
#define max_default_rand_num 32767
int get_rand_num(int num);

#endif
