/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[80];
    char stringdata[1473];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "listItemClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "startListener1"
QT_MOC_LITERAL(4, 43, 11), // "StartPlayer"
QT_MOC_LITERAL(5, 55, 10), // "StartPrint"
QT_MOC_LITERAL(6, 66, 12), // "StartSendCMD"
QT_MOC_LITERAL(7, 79, 11), // "StartListen"
QT_MOC_LITERAL(8, 91, 9), // "StartKmsg"
QT_MOC_LITERAL(9, 101, 9), // "fileroute"
QT_MOC_LITERAL(10, 111, 8), // "filename"
QT_MOC_LITERAL(11, 120, 7), // "StopLog"
QT_MOC_LITERAL(12, 128, 11), // "timeOutSlot"
QT_MOC_LITERAL(13, 140, 14), // "timeOutNetSlot"
QT_MOC_LITERAL(14, 155, 12), // "PrintLogSlot"
QT_MOC_LITERAL(15, 168, 17), // "UpdateShootScreen"
QT_MOC_LITERAL(16, 186, 15), // "singleClickSlot"
QT_MOC_LITERAL(17, 202, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(18, 219, 22), // "BoxFilesingleClickSlot"
QT_MOC_LITERAL(19, 242, 15), // "DoubleClickSlot"
QT_MOC_LITERAL(20, 258, 10), // "closeEvent"
QT_MOC_LITERAL(21, 269, 12), // "QCloseEvent*"
QT_MOC_LITERAL(22, 282, 1), // "e"
QT_MOC_LITERAL(23, 284, 18), // "on_connect_clicked"
QT_MOC_LITERAL(24, 303, 21), // "on_disconnect_clicked"
QT_MOC_LITERAL(25, 325, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(26, 349, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(27, 373, 15), // "on_curi_clicked"
QT_MOC_LITERAL(28, 389, 14), // "on_ddr_clicked"
QT_MOC_LITERAL(29, 404, 16), // "on_mache_clicked"
QT_MOC_LITERAL(30, 421, 16), // "on_flash_clicked"
QT_MOC_LITERAL(31, 438, 14), // "on_cpu_clicked"
QT_MOC_LITERAL(32, 453, 14), // "on_GPU_clicked"
QT_MOC_LITERAL(33, 468, 14), // "on_num_clicked"
QT_MOC_LITERAL(34, 483, 14), // "on_mac_clicked"
QT_MOC_LITERAL(35, 498, 19), // "on_fireware_clicked"
QT_MOC_LITERAL(36, 518, 17), // "on_kernel_clicked"
QT_MOC_LITERAL(37, 536, 17), // "on_SysVer_clicked"
QT_MOC_LITERAL(38, 554, 16), // "on_print_clicked"
QT_MOC_LITERAL(39, 571, 17), // "on_upload_clicked"
QT_MOC_LITERAL(40, 589, 19), // "on_download_clicked"
QT_MOC_LITERAL(41, 609, 21), // "on_upload_dir_clicked"
QT_MOC_LITERAL(42, 631, 23), // "on_download_dir_clicked"
QT_MOC_LITERAL(43, 655, 18), // "on_AppList_clicked"
QT_MOC_LITERAL(44, 674, 18), // "on_Install_clicked"
QT_MOC_LITERAL(45, 693, 20), // "on_uninstall_clicked"
QT_MOC_LITERAL(46, 714, 16), // "on_start_clicked"
QT_MOC_LITERAL(47, 731, 15), // "on_stop_clicked"
QT_MOC_LITERAL(48, 747, 22), // "on_shootscreen_clicked"
QT_MOC_LITERAL(49, 770, 17), // "on_player_clicked"
QT_MOC_LITERAL(50, 788, 17), // "on_listen_clicked"
QT_MOC_LITERAL(51, 806, 21), // "on_print_kmsg_clicked"
QT_MOC_LITERAL(52, 828, 32), // "on_roteCotrul_pushButton_clicked"
QT_MOC_LITERAL(53, 861, 31), // "on_Recovery1_pushButton_clicked"
QT_MOC_LITERAL(54, 893, 31), // "on_Recovery2_pushButton_clicked"
QT_MOC_LITERAL(55, 925, 31), // "on_Recovery3_pushButton_clicked"
QT_MOC_LITERAL(56, 957, 27), // "on_RebootpushButton_clicked"
QT_MOC_LITERAL(57, 985, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(58, 1009, 27), // "on_DownLoadFastboot_clicked"
QT_MOC_LITERAL(59, 1037, 25), // "on_DownLoadKernel_clicked"
QT_MOC_LITERAL(60, 1063, 20), // "on_App_GetIP_clicked"
QT_MOC_LITERAL(61, 1084, 15), // "on_Scan_clicked"
QT_MOC_LITERAL(62, 1100, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(63, 1122, 21), // "on_ScanBoxDir_clicked"
QT_MOC_LITERAL(64, 1144, 19), // "on_dir_back_clicked"
QT_MOC_LITERAL(65, 1164, 21), // "on_Create_Dir_clicked"
QT_MOC_LITERAL(66, 1186, 24), // "on_DeleteDirFile_clicked"
QT_MOC_LITERAL(67, 1211, 22), // "on_cmd_confirm_clicked"
QT_MOC_LITERAL(68, 1234, 20), // "on_clean_cmd_clicked"
QT_MOC_LITERAL(69, 1255, 16), // "on_fresh_clicked"
QT_MOC_LITERAL(70, 1272, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(71, 1296, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(72, 1320, 17), // "on_up_bnt_clicked"
QT_MOC_LITERAL(73, 1338, 19), // "on_down_bnt_clicked"
QT_MOC_LITERAL(74, 1358, 19), // "on_left_bnt_clicked"
QT_MOC_LITERAL(75, 1378, 20), // "on_right_bnt_clicked"
QT_MOC_LITERAL(76, 1399, 17), // "on_ok_bnt_clicked"
QT_MOC_LITERAL(77, 1417, 19), // "on_back_bnt_clicked"
QT_MOC_LITERAL(78, 1437, 25), // "on_chooseJpegPath_clicked"
QT_MOC_LITERAL(79, 1463, 9) // "GetLogPiD"

    },
    "MainWindow\0listItemClicked\0\0startListener1\0"
    "StartPlayer\0StartPrint\0StartSendCMD\0"
    "StartListen\0StartKmsg\0fileroute\0"
    "filename\0StopLog\0timeOutSlot\0"
    "timeOutNetSlot\0PrintLogSlot\0"
    "UpdateShootScreen\0singleClickSlot\0"
    "QListWidgetItem*\0BoxFilesingleClickSlot\0"
    "DoubleClickSlot\0closeEvent\0QCloseEvent*\0"
    "e\0on_connect_clicked\0on_disconnect_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_6_clicked\0"
    "on_curi_clicked\0on_ddr_clicked\0"
    "on_mache_clicked\0on_flash_clicked\0"
    "on_cpu_clicked\0on_GPU_clicked\0"
    "on_num_clicked\0on_mac_clicked\0"
    "on_fireware_clicked\0on_kernel_clicked\0"
    "on_SysVer_clicked\0on_print_clicked\0"
    "on_upload_clicked\0on_download_clicked\0"
    "on_upload_dir_clicked\0on_download_dir_clicked\0"
    "on_AppList_clicked\0on_Install_clicked\0"
    "on_uninstall_clicked\0on_start_clicked\0"
    "on_stop_clicked\0on_shootscreen_clicked\0"
    "on_player_clicked\0on_listen_clicked\0"
    "on_print_kmsg_clicked\0"
    "on_roteCotrul_pushButton_clicked\0"
    "on_Recovery1_pushButton_clicked\0"
    "on_Recovery2_pushButton_clicked\0"
    "on_Recovery3_pushButton_clicked\0"
    "on_RebootpushButton_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_DownLoadFastboot_clicked\0"
    "on_DownLoadKernel_clicked\0"
    "on_App_GetIP_clicked\0on_Scan_clicked\0"
    "on_pushButton_clicked\0on_ScanBoxDir_clicked\0"
    "on_dir_back_clicked\0on_Create_Dir_clicked\0"
    "on_DeleteDirFile_clicked\0"
    "on_cmd_confirm_clicked\0on_clean_cmd_clicked\0"
    "on_fresh_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0on_up_bnt_clicked\0"
    "on_down_bnt_clicked\0on_left_bnt_clicked\0"
    "on_right_bnt_clicked\0on_ok_bnt_clicked\0"
    "on_back_bnt_clicked\0on_chooseJpegPath_clicked\0"
    "GetLogPiD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      73,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  379,    2, 0x06 /* Public */,
       3,    0,  382,    2, 0x06 /* Public */,
       4,    1,  383,    2, 0x06 /* Public */,
       5,    3,  386,    2, 0x06 /* Public */,
       6,    2,  393,    2, 0x06 /* Public */,
       7,    0,  398,    2, 0x06 /* Public */,
       8,    2,  399,    2, 0x06 /* Public */,
      11,    0,  404,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  405,    2, 0x08 /* Private */,
      13,    0,  406,    2, 0x08 /* Private */,
      14,    1,  407,    2, 0x08 /* Private */,
      15,    0,  410,    2, 0x08 /* Private */,
      16,    1,  411,    2, 0x08 /* Private */,
      18,    1,  414,    2, 0x08 /* Private */,
      19,    1,  417,    2, 0x08 /* Private */,
      20,    1,  420,    2, 0x08 /* Private */,
      23,    0,  423,    2, 0x08 /* Private */,
      24,    0,  424,    2, 0x08 /* Private */,
      25,    0,  425,    2, 0x08 /* Private */,
      26,    0,  426,    2, 0x08 /* Private */,
      27,    0,  427,    2, 0x08 /* Private */,
      28,    0,  428,    2, 0x08 /* Private */,
      29,    0,  429,    2, 0x08 /* Private */,
      30,    0,  430,    2, 0x08 /* Private */,
      31,    0,  431,    2, 0x08 /* Private */,
      32,    0,  432,    2, 0x08 /* Private */,
      33,    0,  433,    2, 0x08 /* Private */,
      34,    0,  434,    2, 0x08 /* Private */,
      35,    0,  435,    2, 0x08 /* Private */,
      36,    0,  436,    2, 0x08 /* Private */,
      37,    0,  437,    2, 0x08 /* Private */,
      38,    0,  438,    2, 0x08 /* Private */,
      39,    0,  439,    2, 0x08 /* Private */,
      40,    0,  440,    2, 0x08 /* Private */,
      41,    0,  441,    2, 0x08 /* Private */,
      42,    0,  442,    2, 0x08 /* Private */,
      43,    0,  443,    2, 0x08 /* Private */,
      44,    0,  444,    2, 0x08 /* Private */,
      45,    0,  445,    2, 0x08 /* Private */,
      46,    0,  446,    2, 0x08 /* Private */,
      47,    0,  447,    2, 0x08 /* Private */,
      48,    0,  448,    2, 0x08 /* Private */,
      49,    0,  449,    2, 0x08 /* Private */,
      50,    0,  450,    2, 0x08 /* Private */,
      51,    0,  451,    2, 0x08 /* Private */,
      52,    0,  452,    2, 0x08 /* Private */,
      53,    0,  453,    2, 0x08 /* Private */,
      54,    0,  454,    2, 0x08 /* Private */,
      55,    0,  455,    2, 0x08 /* Private */,
      56,    0,  456,    2, 0x08 /* Private */,
      57,    0,  457,    2, 0x08 /* Private */,
      58,    0,  458,    2, 0x08 /* Private */,
      59,    0,  459,    2, 0x08 /* Private */,
      60,    0,  460,    2, 0x08 /* Private */,
      61,    0,  461,    2, 0x08 /* Private */,
      62,    0,  462,    2, 0x08 /* Private */,
      63,    0,  463,    2, 0x08 /* Private */,
      64,    0,  464,    2, 0x08 /* Private */,
      65,    0,  465,    2, 0x08 /* Private */,
      66,    0,  466,    2, 0x08 /* Private */,
      67,    0,  467,    2, 0x08 /* Private */,
      68,    0,  468,    2, 0x08 /* Private */,
      69,    0,  469,    2, 0x08 /* Private */,
      70,    0,  470,    2, 0x08 /* Private */,
      71,    0,  471,    2, 0x08 /* Private */,
      72,    0,  472,    2, 0x08 /* Private */,
      73,    0,  473,    2, 0x08 /* Private */,
      74,    0,  474,    2, 0x08 /* Private */,
      75,    0,  475,    2, 0x08 /* Private */,
      76,    0,  476,    2, 0x08 /* Private */,
      77,    0,  477,    2, 0x08 /* Private */,
      78,    0,  478,    2, 0x08 /* Private */,
      79,    0,  479,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->listItemClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: { int _r = _t->startListener1();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->StartPlayer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->StartPrint((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 4: _t->StartSendCMD((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->StartListen(); break;
        case 6: _t->StartKmsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->StopLog(); break;
        case 8: _t->timeOutSlot(); break;
        case 9: _t->timeOutNetSlot(); break;
        case 10: _t->PrintLogSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->UpdateShootScreen(); break;
        case 12: _t->singleClickSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->BoxFilesingleClickSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 14: _t->DoubleClickSlot((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 15: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 16: _t->on_connect_clicked(); break;
        case 17: _t->on_disconnect_clicked(); break;
        case 18: _t->on_pushButton_3_clicked(); break;
        case 19: _t->on_pushButton_6_clicked(); break;
        case 20: _t->on_curi_clicked(); break;
        case 21: _t->on_ddr_clicked(); break;
        case 22: _t->on_mache_clicked(); break;
        case 23: _t->on_flash_clicked(); break;
        case 24: _t->on_cpu_clicked(); break;
        case 25: _t->on_GPU_clicked(); break;
        case 26: _t->on_num_clicked(); break;
        case 27: _t->on_mac_clicked(); break;
        case 28: _t->on_fireware_clicked(); break;
        case 29: _t->on_kernel_clicked(); break;
        case 30: _t->on_SysVer_clicked(); break;
        case 31: _t->on_print_clicked(); break;
        case 32: _t->on_upload_clicked(); break;
        case 33: _t->on_download_clicked(); break;
        case 34: _t->on_upload_dir_clicked(); break;
        case 35: _t->on_download_dir_clicked(); break;
        case 36: _t->on_AppList_clicked(); break;
        case 37: _t->on_Install_clicked(); break;
        case 38: _t->on_uninstall_clicked(); break;
        case 39: _t->on_start_clicked(); break;
        case 40: _t->on_stop_clicked(); break;
        case 41: _t->on_shootscreen_clicked(); break;
        case 42: _t->on_player_clicked(); break;
        case 43: _t->on_listen_clicked(); break;
        case 44: _t->on_print_kmsg_clicked(); break;
        case 45: _t->on_roteCotrul_pushButton_clicked(); break;
        case 46: _t->on_Recovery1_pushButton_clicked(); break;
        case 47: _t->on_Recovery2_pushButton_clicked(); break;
        case 48: _t->on_Recovery3_pushButton_clicked(); break;
        case 49: _t->on_RebootpushButton_clicked(); break;
        case 50: _t->on_pushButton_2_clicked(); break;
        case 51: _t->on_DownLoadFastboot_clicked(); break;
        case 52: _t->on_DownLoadKernel_clicked(); break;
        case 53: _t->on_App_GetIP_clicked(); break;
        case 54: _t->on_Scan_clicked(); break;
        case 55: _t->on_pushButton_clicked(); break;
        case 56: _t->on_ScanBoxDir_clicked(); break;
        case 57: _t->on_dir_back_clicked(); break;
        case 58: _t->on_Create_Dir_clicked(); break;
        case 59: _t->on_DeleteDirFile_clicked(); break;
        case 60: _t->on_cmd_confirm_clicked(); break;
        case 61: _t->on_clean_cmd_clicked(); break;
        case 62: _t->on_fresh_clicked(); break;
        case 63: _t->on_pushButton_4_clicked(); break;
        case 64: _t->on_pushButton_5_clicked(); break;
        case 65: _t->on_up_bnt_clicked(); break;
        case 66: _t->on_down_bnt_clicked(); break;
        case 67: _t->on_left_bnt_clicked(); break;
        case 68: _t->on_right_bnt_clicked(); break;
        case 69: _t->on_ok_bnt_clicked(); break;
        case 70: _t->on_back_bnt_clicked(); break;
        case 71: _t->on_chooseJpegPath_clicked(); break;
        case 72: _t->GetLogPiD(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::listItemClicked)) {
                *result = 0;
            }
        }
        {
            typedef int (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::startListener1)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::StartPlayer)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::StartPrint)) {
                *result = 3;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::StartSendCMD)) {
                *result = 4;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::StartListen)) {
                *result = 5;
            }
        }
        {
            typedef void (MainWindow::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::StartKmsg)) {
                *result = 6;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::StopLog)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 73)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 73;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::listItemClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
int MainWindow::startListener1()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
void MainWindow::StartPlayer(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::StartPrint(QString _t1, QString _t2, QString _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::StartSendCMD(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::StartListen()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void MainWindow::StartKmsg(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::StopLog()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
