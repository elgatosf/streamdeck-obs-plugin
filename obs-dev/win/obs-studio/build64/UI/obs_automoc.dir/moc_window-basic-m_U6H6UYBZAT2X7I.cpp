/****************************************************************************
** Meta object code from reading C++ file 'window-basic-main.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UI/window-basic-main.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-main.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBSBasic_t {
    QByteArrayData data[179];
    char stringdata0[3863];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasic_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasic_t qt_meta_stringdata_OBSBasic = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OBSBasic"
QT_MOC_LITERAL(1, 9, 14), // "StartStreaming"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 13), // "StopStreaming"
QT_MOC_LITERAL(4, 39, 18), // "ForceStopStreaming"
QT_MOC_LITERAL(5, 58, 19), // "StreamDelayStarting"
QT_MOC_LITERAL(6, 78, 3), // "sec"
QT_MOC_LITERAL(7, 82, 19), // "StreamDelayStopping"
QT_MOC_LITERAL(8, 102, 14), // "StreamingStart"
QT_MOC_LITERAL(9, 117, 14), // "StreamStopping"
QT_MOC_LITERAL(10, 132, 13), // "StreamingStop"
QT_MOC_LITERAL(11, 146, 9), // "errorcode"
QT_MOC_LITERAL(12, 156, 14), // "StartRecording"
QT_MOC_LITERAL(13, 171, 13), // "StopRecording"
QT_MOC_LITERAL(14, 185, 14), // "RecordingStart"
QT_MOC_LITERAL(15, 200, 14), // "RecordStopping"
QT_MOC_LITERAL(16, 215, 13), // "RecordingStop"
QT_MOC_LITERAL(17, 229, 4), // "code"
QT_MOC_LITERAL(18, 234, 17), // "StartReplayBuffer"
QT_MOC_LITERAL(19, 252, 16), // "StopReplayBuffer"
QT_MOC_LITERAL(20, 269, 17), // "ReplayBufferStart"
QT_MOC_LITERAL(21, 287, 20), // "ReplayBufferStopping"
QT_MOC_LITERAL(22, 308, 16), // "ReplayBufferStop"
QT_MOC_LITERAL(23, 325, 19), // "SaveProjectDeferred"
QT_MOC_LITERAL(24, 345, 11), // "SaveProject"
QT_MOC_LITERAL(25, 357, 13), // "SetTransition"
QT_MOC_LITERAL(26, 371, 9), // "OBSSource"
QT_MOC_LITERAL(27, 381, 10), // "transition"
QT_MOC_LITERAL(28, 392, 17), // "TransitionToScene"
QT_MOC_LITERAL(29, 410, 8), // "OBSScene"
QT_MOC_LITERAL(30, 419, 5), // "scene"
QT_MOC_LITERAL(31, 425, 5), // "force"
QT_MOC_LITERAL(32, 431, 15), // "SetCurrentScene"
QT_MOC_LITERAL(33, 447, 12), // "AddSceneItem"
QT_MOC_LITERAL(34, 460, 12), // "OBSSceneItem"
QT_MOC_LITERAL(35, 473, 4), // "item"
QT_MOC_LITERAL(36, 478, 15), // "RemoveSceneItem"
QT_MOC_LITERAL(37, 494, 8), // "AddScene"
QT_MOC_LITERAL(38, 503, 6), // "source"
QT_MOC_LITERAL(39, 510, 11), // "RemoveScene"
QT_MOC_LITERAL(40, 522, 13), // "RenameSources"
QT_MOC_LITERAL(41, 536, 7), // "newName"
QT_MOC_LITERAL(42, 544, 8), // "prevName"
QT_MOC_LITERAL(43, 553, 15), // "SelectSceneItem"
QT_MOC_LITERAL(44, 569, 6), // "select"
QT_MOC_LITERAL(45, 576, 19), // "ActivateAudioSource"
QT_MOC_LITERAL(46, 596, 21), // "DeactivateAudioSource"
QT_MOC_LITERAL(47, 618, 22), // "DuplicateSelectedScene"
QT_MOC_LITERAL(48, 641, 19), // "RemoveSelectedScene"
QT_MOC_LITERAL(49, 661, 23), // "RemoveSelectedSceneItem"
QT_MOC_LITERAL(50, 685, 17), // "ToggleAlwaysOnTop"
QT_MOC_LITERAL(51, 703, 14), // "ReorderSources"
QT_MOC_LITERAL(52, 718, 13), // "ProcessHotkey"
QT_MOC_LITERAL(53, 732, 13), // "obs_hotkey_id"
QT_MOC_LITERAL(54, 746, 2), // "id"
QT_MOC_LITERAL(55, 749, 7), // "pressed"
QT_MOC_LITERAL(56, 757, 13), // "AddTransition"
QT_MOC_LITERAL(57, 771, 16), // "RenameTransition"
QT_MOC_LITERAL(58, 788, 17), // "TransitionClicked"
QT_MOC_LITERAL(59, 806, 17), // "TransitionStopped"
QT_MOC_LITERAL(60, 824, 22), // "TriggerQuickTransition"
QT_MOC_LITERAL(61, 847, 20), // "SetDeinterlacingMode"
QT_MOC_LITERAL(62, 868, 21), // "SetDeinterlacingOrder"
QT_MOC_LITERAL(63, 890, 14), // "SetScaleFilter"
QT_MOC_LITERAL(64, 905, 13), // "IconActivated"
QT_MOC_LITERAL(65, 919, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(66, 953, 6), // "reason"
QT_MOC_LITERAL(67, 960, 10), // "SetShowing"
QT_MOC_LITERAL(68, 971, 7), // "showing"
QT_MOC_LITERAL(69, 979, 14), // "ToggleShowHide"
QT_MOC_LITERAL(70, 994, 34), // "on_actionShow_Recordings_trig..."
QT_MOC_LITERAL(71, 1029, 24), // "on_actionRemux_triggered"
QT_MOC_LITERAL(72, 1054, 28), // "on_action_Settings_triggered"
QT_MOC_LITERAL(73, 1083, 37), // "on_actionAdvAudioProperties_t..."
QT_MOC_LITERAL(74, 1121, 24), // "on_advAudioProps_clicked"
QT_MOC_LITERAL(75, 1146, 26), // "on_advAudioProps_destroyed"
QT_MOC_LITERAL(76, 1173, 27), // "on_actionShowLogs_triggered"
QT_MOC_LITERAL(77, 1201, 35), // "on_actionUploadCurrentLog_tri..."
QT_MOC_LITERAL(78, 1237, 32), // "on_actionUploadLastLog_triggered"
QT_MOC_LITERAL(79, 1270, 33), // "on_actionViewCurrentLog_trigg..."
QT_MOC_LITERAL(80, 1304, 34), // "on_actionCheckForUpdates_trig..."
QT_MOC_LITERAL(81, 1339, 32), // "on_actionEditTransform_triggered"
QT_MOC_LITERAL(82, 1372, 32), // "on_actionCopyTransform_triggered"
QT_MOC_LITERAL(83, 1405, 33), // "on_actionPasteTransform_trigg..."
QT_MOC_LITERAL(84, 1439, 29), // "on_actionRotate90CW_triggered"
QT_MOC_LITERAL(85, 1469, 30), // "on_actionRotate90CCW_triggered"
QT_MOC_LITERAL(86, 1500, 28), // "on_actionRotate180_triggered"
QT_MOC_LITERAL(87, 1529, 33), // "on_actionFlipHorizontal_trigg..."
QT_MOC_LITERAL(88, 1563, 31), // "on_actionFlipVertical_triggered"
QT_MOC_LITERAL(89, 1595, 30), // "on_actionFitToScreen_triggered"
QT_MOC_LITERAL(90, 1626, 34), // "on_actionStretchToScreen_trig..."
QT_MOC_LITERAL(91, 1661, 33), // "on_actionCenterToScreen_trigg..."
QT_MOC_LITERAL(92, 1695, 28), // "on_scenes_currentItemChanged"
QT_MOC_LITERAL(93, 1724, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(94, 1741, 7), // "current"
QT_MOC_LITERAL(95, 1749, 4), // "prev"
QT_MOC_LITERAL(96, 1754, 36), // "on_scenes_customContextMenuRe..."
QT_MOC_LITERAL(97, 1791, 3), // "pos"
QT_MOC_LITERAL(98, 1795, 27), // "on_actionAddScene_triggered"
QT_MOC_LITERAL(99, 1823, 30), // "on_actionRemoveScene_triggered"
QT_MOC_LITERAL(100, 1854, 26), // "on_actionSceneUp_triggered"
QT_MOC_LITERAL(101, 1881, 28), // "on_actionSceneDown_triggered"
QT_MOC_LITERAL(102, 1910, 31), // "on_sources_itemSelectionChanged"
QT_MOC_LITERAL(103, 1942, 37), // "on_sources_customContextMenuR..."
QT_MOC_LITERAL(104, 1980, 28), // "on_sources_itemDoubleClicked"
QT_MOC_LITERAL(105, 2009, 28), // "on_actionAddSource_triggered"
QT_MOC_LITERAL(106, 2038, 31), // "on_actionRemoveSource_triggered"
QT_MOC_LITERAL(107, 2070, 27), // "on_actionInteract_triggered"
QT_MOC_LITERAL(108, 2098, 35), // "on_actionSourceProperties_tri..."
QT_MOC_LITERAL(109, 2134, 27), // "on_actionSourceUp_triggered"
QT_MOC_LITERAL(110, 2162, 29), // "on_actionSourceDown_triggered"
QT_MOC_LITERAL(111, 2192, 25), // "on_actionMoveUp_triggered"
QT_MOC_LITERAL(112, 2218, 27), // "on_actionMoveDown_triggered"
QT_MOC_LITERAL(113, 2246, 28), // "on_actionMoveToTop_triggered"
QT_MOC_LITERAL(114, 2275, 31), // "on_actionMoveToBottom_triggered"
QT_MOC_LITERAL(115, 2307, 30), // "on_actionLockPreview_triggered"
QT_MOC_LITERAL(116, 2338, 26), // "on_scalingMenu_aboutToShow"
QT_MOC_LITERAL(117, 2365, 30), // "on_actionScaleWindow_triggered"
QT_MOC_LITERAL(118, 2396, 30), // "on_actionScaleCanvas_triggered"
QT_MOC_LITERAL(119, 2427, 30), // "on_actionScaleOutput_triggered"
QT_MOC_LITERAL(120, 2458, 23), // "on_streamButton_clicked"
QT_MOC_LITERAL(121, 2482, 23), // "on_recordButton_clicked"
QT_MOC_LITERAL(122, 2506, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(123, 2532, 26), // "on_actionWebsite_triggered"
QT_MOC_LITERAL(124, 2559, 37), // "on_preview_customContextMenuR..."
QT_MOC_LITERAL(125, 2597, 50), // "on_previewDisabledLabel_custo..."
QT_MOC_LITERAL(126, 2648, 37), // "on_actionNewSceneCollection_t..."
QT_MOC_LITERAL(127, 2686, 37), // "on_actionDupSceneCollection_t..."
QT_MOC_LITERAL(128, 2724, 40), // "on_actionRenameSceneCollectio..."
QT_MOC_LITERAL(129, 2765, 40), // "on_actionRemoveSceneCollectio..."
QT_MOC_LITERAL(130, 2806, 40), // "on_actionImportSceneCollectio..."
QT_MOC_LITERAL(131, 2847, 40), // "on_actionExportSceneCollectio..."
QT_MOC_LITERAL(132, 2888, 29), // "on_actionNewProfile_triggered"
QT_MOC_LITERAL(133, 2918, 29), // "on_actionDupProfile_triggered"
QT_MOC_LITERAL(134, 2948, 32), // "on_actionRenameProfile_triggered"
QT_MOC_LITERAL(135, 2981, 32), // "on_actionRemoveProfile_triggered"
QT_MOC_LITERAL(136, 3014, 32), // "on_actionImportProfile_triggered"
QT_MOC_LITERAL(137, 3047, 32), // "on_actionExportProfile_triggered"
QT_MOC_LITERAL(138, 3080, 37), // "on_actionShowSettingsFolder_t..."
QT_MOC_LITERAL(139, 3118, 36), // "on_actionShowProfileFolder_tr..."
QT_MOC_LITERAL(140, 3155, 30), // "on_actionAlwaysOnTop_triggered"
QT_MOC_LITERAL(141, 3186, 33), // "on_toggleSceneTransitions_tog..."
QT_MOC_LITERAL(142, 3220, 7), // "visible"
QT_MOC_LITERAL(143, 3228, 32), // "on_toggleListboxToolbars_toggled"
QT_MOC_LITERAL(144, 3261, 26), // "on_toggleStatusBar_toggled"
QT_MOC_LITERAL(145, 3288, 34), // "on_transitions_currentIndexCh..."
QT_MOC_LITERAL(146, 3323, 5), // "index"
QT_MOC_LITERAL(147, 3329, 24), // "on_transitionAdd_clicked"
QT_MOC_LITERAL(148, 3354, 27), // "on_transitionRemove_clicked"
QT_MOC_LITERAL(149, 3382, 26), // "on_transitionProps_clicked"
QT_MOC_LITERAL(150, 3409, 21), // "on_modeSwitch_clicked"
QT_MOC_LITERAL(151, 3431, 17), // "logUploadFinished"
QT_MOC_LITERAL(152, 3449, 4), // "text"
QT_MOC_LITERAL(153, 3454, 5), // "error"
QT_MOC_LITERAL(154, 3460, 18), // "updateFileFinished"
QT_MOC_LITERAL(155, 3479, 19), // "AddSourceFromAction"
QT_MOC_LITERAL(156, 3499, 14), // "MoveSceneToTop"
QT_MOC_LITERAL(157, 3514, 17), // "MoveSceneToBottom"
QT_MOC_LITERAL(158, 3532, 13), // "EditSceneName"
QT_MOC_LITERAL(159, 3546, 17), // "EditSceneItemName"
QT_MOC_LITERAL(160, 3564, 15), // "SceneNameEdited"
QT_MOC_LITERAL(161, 3580, 8), // "QWidget*"
QT_MOC_LITERAL(162, 3589, 6), // "editor"
QT_MOC_LITERAL(163, 3596, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(164, 3631, 7), // "endHint"
QT_MOC_LITERAL(165, 3639, 19), // "SceneItemNameEdited"
QT_MOC_LITERAL(166, 3659, 16), // "OpenSceneFilters"
QT_MOC_LITERAL(167, 3676, 11), // "OpenFilters"
QT_MOC_LITERAL(168, 3688, 20), // "EnablePreviewDisplay"
QT_MOC_LITERAL(169, 3709, 6), // "enable"
QT_MOC_LITERAL(170, 3716, 13), // "TogglePreview"
QT_MOC_LITERAL(171, 3730, 7), // "NudgeUp"
QT_MOC_LITERAL(172, 3738, 9), // "NudgeDown"
QT_MOC_LITERAL(173, 3748, 9), // "NudgeLeft"
QT_MOC_LITERAL(174, 3758, 10), // "NudgeRight"
QT_MOC_LITERAL(175, 3769, 20), // "OpenPreviewProjector"
QT_MOC_LITERAL(176, 3790, 19), // "OpenSourceProjector"
QT_MOC_LITERAL(177, 3810, 18), // "OpenSceneProjector"
QT_MOC_LITERAL(178, 3829, 33) // "on_actionResetTransform_trigg..."

    },
    "OBSBasic\0StartStreaming\0\0StopStreaming\0"
    "ForceStopStreaming\0StreamDelayStarting\0"
    "sec\0StreamDelayStopping\0StreamingStart\0"
    "StreamStopping\0StreamingStop\0errorcode\0"
    "StartRecording\0StopRecording\0"
    "RecordingStart\0RecordStopping\0"
    "RecordingStop\0code\0StartReplayBuffer\0"
    "StopReplayBuffer\0ReplayBufferStart\0"
    "ReplayBufferStopping\0ReplayBufferStop\0"
    "SaveProjectDeferred\0SaveProject\0"
    "SetTransition\0OBSSource\0transition\0"
    "TransitionToScene\0OBSScene\0scene\0force\0"
    "SetCurrentScene\0AddSceneItem\0OBSSceneItem\0"
    "item\0RemoveSceneItem\0AddScene\0source\0"
    "RemoveScene\0RenameSources\0newName\0"
    "prevName\0SelectSceneItem\0select\0"
    "ActivateAudioSource\0DeactivateAudioSource\0"
    "DuplicateSelectedScene\0RemoveSelectedScene\0"
    "RemoveSelectedSceneItem\0ToggleAlwaysOnTop\0"
    "ReorderSources\0ProcessHotkey\0obs_hotkey_id\0"
    "id\0pressed\0AddTransition\0RenameTransition\0"
    "TransitionClicked\0TransitionStopped\0"
    "TriggerQuickTransition\0SetDeinterlacingMode\0"
    "SetDeinterlacingOrder\0SetScaleFilter\0"
    "IconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0SetShowing\0showing\0ToggleShowHide\0"
    "on_actionShow_Recordings_triggered\0"
    "on_actionRemux_triggered\0"
    "on_action_Settings_triggered\0"
    "on_actionAdvAudioProperties_triggered\0"
    "on_advAudioProps_clicked\0"
    "on_advAudioProps_destroyed\0"
    "on_actionShowLogs_triggered\0"
    "on_actionUploadCurrentLog_triggered\0"
    "on_actionUploadLastLog_triggered\0"
    "on_actionViewCurrentLog_triggered\0"
    "on_actionCheckForUpdates_triggered\0"
    "on_actionEditTransform_triggered\0"
    "on_actionCopyTransform_triggered\0"
    "on_actionPasteTransform_triggered\0"
    "on_actionRotate90CW_triggered\0"
    "on_actionRotate90CCW_triggered\0"
    "on_actionRotate180_triggered\0"
    "on_actionFlipHorizontal_triggered\0"
    "on_actionFlipVertical_triggered\0"
    "on_actionFitToScreen_triggered\0"
    "on_actionStretchToScreen_triggered\0"
    "on_actionCenterToScreen_triggered\0"
    "on_scenes_currentItemChanged\0"
    "QListWidgetItem*\0current\0prev\0"
    "on_scenes_customContextMenuRequested\0"
    "pos\0on_actionAddScene_triggered\0"
    "on_actionRemoveScene_triggered\0"
    "on_actionSceneUp_triggered\0"
    "on_actionSceneDown_triggered\0"
    "on_sources_itemSelectionChanged\0"
    "on_sources_customContextMenuRequested\0"
    "on_sources_itemDoubleClicked\0"
    "on_actionAddSource_triggered\0"
    "on_actionRemoveSource_triggered\0"
    "on_actionInteract_triggered\0"
    "on_actionSourceProperties_triggered\0"
    "on_actionSourceUp_triggered\0"
    "on_actionSourceDown_triggered\0"
    "on_actionMoveUp_triggered\0"
    "on_actionMoveDown_triggered\0"
    "on_actionMoveToTop_triggered\0"
    "on_actionMoveToBottom_triggered\0"
    "on_actionLockPreview_triggered\0"
    "on_scalingMenu_aboutToShow\0"
    "on_actionScaleWindow_triggered\0"
    "on_actionScaleCanvas_triggered\0"
    "on_actionScaleOutput_triggered\0"
    "on_streamButton_clicked\0on_recordButton_clicked\0"
    "on_settingsButton_clicked\0"
    "on_actionWebsite_triggered\0"
    "on_preview_customContextMenuRequested\0"
    "on_previewDisabledLabel_customContextMenuRequested\0"
    "on_actionNewSceneCollection_triggered\0"
    "on_actionDupSceneCollection_triggered\0"
    "on_actionRenameSceneCollection_triggered\0"
    "on_actionRemoveSceneCollection_triggered\0"
    "on_actionImportSceneCollection_triggered\0"
    "on_actionExportSceneCollection_triggered\0"
    "on_actionNewProfile_triggered\0"
    "on_actionDupProfile_triggered\0"
    "on_actionRenameProfile_triggered\0"
    "on_actionRemoveProfile_triggered\0"
    "on_actionImportProfile_triggered\0"
    "on_actionExportProfile_triggered\0"
    "on_actionShowSettingsFolder_triggered\0"
    "on_actionShowProfileFolder_triggered\0"
    "on_actionAlwaysOnTop_triggered\0"
    "on_toggleSceneTransitions_toggled\0"
    "visible\0on_toggleListboxToolbars_toggled\0"
    "on_toggleStatusBar_toggled\0"
    "on_transitions_currentIndexChanged\0"
    "index\0on_transitionAdd_clicked\0"
    "on_transitionRemove_clicked\0"
    "on_transitionProps_clicked\0"
    "on_modeSwitch_clicked\0logUploadFinished\0"
    "text\0error\0updateFileFinished\0"
    "AddSourceFromAction\0MoveSceneToTop\0"
    "MoveSceneToBottom\0EditSceneName\0"
    "EditSceneItemName\0SceneNameEdited\0"
    "QWidget*\0editor\0QAbstractItemDelegate::EndEditHint\0"
    "endHint\0SceneItemNameEdited\0"
    "OpenSceneFilters\0OpenFilters\0"
    "EnablePreviewDisplay\0enable\0TogglePreview\0"
    "NudgeUp\0NudgeDown\0NudgeLeft\0NudgeRight\0"
    "OpenPreviewProjector\0OpenSourceProjector\0"
    "OpenSceneProjector\0on_actionResetTransform_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasic[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     148,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  754,    2, 0x0a /* Public */,
       3,    0,  755,    2, 0x0a /* Public */,
       4,    0,  756,    2, 0x0a /* Public */,
       5,    1,  757,    2, 0x0a /* Public */,
       7,    1,  760,    2, 0x0a /* Public */,
       8,    0,  763,    2, 0x0a /* Public */,
       9,    0,  764,    2, 0x0a /* Public */,
      10,    1,  765,    2, 0x0a /* Public */,
      12,    0,  768,    2, 0x0a /* Public */,
      13,    0,  769,    2, 0x0a /* Public */,
      14,    0,  770,    2, 0x0a /* Public */,
      15,    0,  771,    2, 0x0a /* Public */,
      16,    1,  772,    2, 0x0a /* Public */,
      18,    0,  775,    2, 0x0a /* Public */,
      19,    0,  776,    2, 0x0a /* Public */,
      20,    0,  777,    2, 0x0a /* Public */,
      21,    0,  778,    2, 0x0a /* Public */,
      22,    1,  779,    2, 0x0a /* Public */,
      23,    0,  782,    2, 0x0a /* Public */,
      24,    0,  783,    2, 0x0a /* Public */,
      25,    1,  784,    2, 0x0a /* Public */,
      28,    2,  787,    2, 0x0a /* Public */,
      28,    1,  792,    2, 0x2a /* Public | MethodCloned */,
      28,    2,  795,    2, 0x0a /* Public */,
      28,    1,  800,    2, 0x2a /* Public | MethodCloned */,
      32,    2,  803,    2, 0x0a /* Public */,
      32,    1,  808,    2, 0x2a /* Public | MethodCloned */,
      33,    1,  811,    2, 0x08 /* Private */,
      36,    1,  814,    2, 0x08 /* Private */,
      37,    1,  817,    2, 0x08 /* Private */,
      39,    1,  820,    2, 0x08 /* Private */,
      40,    2,  823,    2, 0x08 /* Private */,
      43,    3,  828,    2, 0x08 /* Private */,
      45,    1,  835,    2, 0x08 /* Private */,
      46,    1,  838,    2, 0x08 /* Private */,
      47,    0,  841,    2, 0x08 /* Private */,
      48,    0,  842,    2, 0x08 /* Private */,
      49,    0,  843,    2, 0x08 /* Private */,
      50,    0,  844,    2, 0x08 /* Private */,
      51,    1,  845,    2, 0x08 /* Private */,
      52,    2,  848,    2, 0x08 /* Private */,
      56,    0,  853,    2, 0x08 /* Private */,
      57,    0,  854,    2, 0x08 /* Private */,
      58,    0,  855,    2, 0x08 /* Private */,
      59,    0,  856,    2, 0x08 /* Private */,
      60,    1,  857,    2, 0x08 /* Private */,
      61,    0,  860,    2, 0x08 /* Private */,
      62,    0,  861,    2, 0x08 /* Private */,
      63,    0,  862,    2, 0x08 /* Private */,
      64,    1,  863,    2, 0x08 /* Private */,
      67,    1,  866,    2, 0x08 /* Private */,
      69,    0,  869,    2, 0x08 /* Private */,
      70,    0,  870,    2, 0x08 /* Private */,
      71,    0,  871,    2, 0x08 /* Private */,
      72,    0,  872,    2, 0x08 /* Private */,
      73,    0,  873,    2, 0x08 /* Private */,
      74,    0,  874,    2, 0x08 /* Private */,
      75,    0,  875,    2, 0x08 /* Private */,
      76,    0,  876,    2, 0x08 /* Private */,
      77,    0,  877,    2, 0x08 /* Private */,
      78,    0,  878,    2, 0x08 /* Private */,
      79,    0,  879,    2, 0x08 /* Private */,
      80,    0,  880,    2, 0x08 /* Private */,
      81,    0,  881,    2, 0x08 /* Private */,
      82,    0,  882,    2, 0x08 /* Private */,
      83,    0,  883,    2, 0x08 /* Private */,
      84,    0,  884,    2, 0x08 /* Private */,
      85,    0,  885,    2, 0x08 /* Private */,
      86,    0,  886,    2, 0x08 /* Private */,
      87,    0,  887,    2, 0x08 /* Private */,
      88,    0,  888,    2, 0x08 /* Private */,
      89,    0,  889,    2, 0x08 /* Private */,
      90,    0,  890,    2, 0x08 /* Private */,
      91,    0,  891,    2, 0x08 /* Private */,
      92,    2,  892,    2, 0x08 /* Private */,
      96,    1,  897,    2, 0x08 /* Private */,
      98,    0,  900,    2, 0x08 /* Private */,
      99,    0,  901,    2, 0x08 /* Private */,
     100,    0,  902,    2, 0x08 /* Private */,
     101,    0,  903,    2, 0x08 /* Private */,
     102,    0,  904,    2, 0x08 /* Private */,
     103,    1,  905,    2, 0x08 /* Private */,
     104,    1,  908,    2, 0x08 /* Private */,
     105,    0,  911,    2, 0x08 /* Private */,
     106,    0,  912,    2, 0x08 /* Private */,
     107,    0,  913,    2, 0x08 /* Private */,
     108,    0,  914,    2, 0x08 /* Private */,
     109,    0,  915,    2, 0x08 /* Private */,
     110,    0,  916,    2, 0x08 /* Private */,
     111,    0,  917,    2, 0x08 /* Private */,
     112,    0,  918,    2, 0x08 /* Private */,
     113,    0,  919,    2, 0x08 /* Private */,
     114,    0,  920,    2, 0x08 /* Private */,
     115,    0,  921,    2, 0x08 /* Private */,
     116,    0,  922,    2, 0x08 /* Private */,
     117,    0,  923,    2, 0x08 /* Private */,
     118,    0,  924,    2, 0x08 /* Private */,
     119,    0,  925,    2, 0x08 /* Private */,
     120,    0,  926,    2, 0x08 /* Private */,
     121,    0,  927,    2, 0x08 /* Private */,
     122,    0,  928,    2, 0x08 /* Private */,
     123,    0,  929,    2, 0x08 /* Private */,
     124,    1,  930,    2, 0x08 /* Private */,
     125,    1,  933,    2, 0x08 /* Private */,
     126,    0,  936,    2, 0x08 /* Private */,
     127,    0,  937,    2, 0x08 /* Private */,
     128,    0,  938,    2, 0x08 /* Private */,
     129,    0,  939,    2, 0x08 /* Private */,
     130,    0,  940,    2, 0x08 /* Private */,
     131,    0,  941,    2, 0x08 /* Private */,
     132,    0,  942,    2, 0x08 /* Private */,
     133,    0,  943,    2, 0x08 /* Private */,
     134,    0,  944,    2, 0x08 /* Private */,
     135,    0,  945,    2, 0x08 /* Private */,
     136,    0,  946,    2, 0x08 /* Private */,
     137,    0,  947,    2, 0x08 /* Private */,
     138,    0,  948,    2, 0x08 /* Private */,
     139,    0,  949,    2, 0x08 /* Private */,
     140,    0,  950,    2, 0x08 /* Private */,
     141,    1,  951,    2, 0x08 /* Private */,
     143,    1,  954,    2, 0x08 /* Private */,
     144,    1,  957,    2, 0x08 /* Private */,
     145,    1,  960,    2, 0x08 /* Private */,
     147,    0,  963,    2, 0x08 /* Private */,
     148,    0,  964,    2, 0x08 /* Private */,
     149,    0,  965,    2, 0x08 /* Private */,
     150,    0,  966,    2, 0x08 /* Private */,
     151,    2,  967,    2, 0x08 /* Private */,
     154,    2,  972,    2, 0x08 /* Private */,
     155,    0,  977,    2, 0x08 /* Private */,
     156,    0,  978,    2, 0x08 /* Private */,
     157,    0,  979,    2, 0x08 /* Private */,
     158,    0,  980,    2, 0x08 /* Private */,
     159,    0,  981,    2, 0x08 /* Private */,
     160,    2,  982,    2, 0x08 /* Private */,
     165,    2,  987,    2, 0x08 /* Private */,
     166,    0,  992,    2, 0x08 /* Private */,
     167,    0,  993,    2, 0x08 /* Private */,
     168,    1,  994,    2, 0x08 /* Private */,
     170,    0,  997,    2, 0x08 /* Private */,
     171,    0,  998,    2, 0x08 /* Private */,
     172,    0,  999,    2, 0x08 /* Private */,
     173,    0, 1000,    2, 0x08 /* Private */,
     174,    0, 1001,    2, 0x08 /* Private */,
     175,    0, 1002,    2, 0x08 /* Private */,
     176,    0, 1003,    2, 0x08 /* Private */,
     177,    0, 1004,    2, 0x08 /* Private */,
     178,    0, 1005,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 29, QMetaType::Bool,   30,   31,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 26, QMetaType::Bool,   30,   31,
    QMetaType::Void, 0x80000000 | 26,   30,
    QMetaType::Void, 0x80000000 | 26, QMetaType::Bool,   30,   31,
    QMetaType::Void, 0x80000000 | 26,   30,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 26,   38,
    QMetaType::Void, 0x80000000 | 26,   38,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   41,   42,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 34, QMetaType::Bool,   30,   35,   44,
    QMetaType::Void, 0x80000000 | 26,   38,
    QMetaType::Void, 0x80000000 | 26,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, 0x80000000 | 53, QMetaType::Bool,   54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 65,   66,
    QMetaType::Void, QMetaType::Bool,   68,
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
    QMetaType::Void, 0x80000000 | 93, 0x80000000 | 93,   94,   95,
    QMetaType::Void, QMetaType::QPoint,   97,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   97,
    QMetaType::Void, 0x80000000 | 93,   35,
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
    QMetaType::Void, QMetaType::QPoint,   97,
    QMetaType::Void, QMetaType::QPoint,   97,
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
    QMetaType::Void, QMetaType::Bool,  142,
    QMetaType::Void, QMetaType::Bool,  142,
    QMetaType::Void, QMetaType::Bool,  142,
    QMetaType::Void, QMetaType::Int,  146,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  152,  153,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,  152,  153,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 161, 0x80000000 | 163,  162,  164,
    QMetaType::Void, 0x80000000 | 161, 0x80000000 | 163,  162,  164,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  169,
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

void OBSBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSBasic *_t = static_cast<OBSBasic *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->StartStreaming(); break;
        case 1: _t->StopStreaming(); break;
        case 2: _t->ForceStopStreaming(); break;
        case 3: _t->StreamDelayStarting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->StreamDelayStopping((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->StreamingStart(); break;
        case 6: _t->StreamStopping(); break;
        case 7: _t->StreamingStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->StartRecording(); break;
        case 9: _t->StopRecording(); break;
        case 10: _t->RecordingStart(); break;
        case 11: _t->RecordStopping(); break;
        case 12: _t->RecordingStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->StartReplayBuffer(); break;
        case 14: _t->StopReplayBuffer(); break;
        case 15: _t->ReplayBufferStart(); break;
        case 16: _t->ReplayBufferStopping(); break;
        case 17: _t->ReplayBufferStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->SaveProjectDeferred(); break;
        case 19: _t->SaveProject(); break;
        case 20: _t->SetTransition((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 21: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 22: _t->TransitionToScene((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 23: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 24: _t->TransitionToScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 25: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->SetCurrentScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 27: _t->AddSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 28: _t->RemoveSceneItem((*reinterpret_cast< OBSSceneItem(*)>(_a[1]))); break;
        case 29: _t->AddScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 30: _t->RemoveScene((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 31: _t->RenameSources((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 32: _t->SelectSceneItem((*reinterpret_cast< OBSScene(*)>(_a[1])),(*reinterpret_cast< OBSSceneItem(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 33: _t->ActivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 34: _t->DeactivateAudioSource((*reinterpret_cast< OBSSource(*)>(_a[1]))); break;
        case 35: _t->DuplicateSelectedScene(); break;
        case 36: _t->RemoveSelectedScene(); break;
        case 37: _t->RemoveSelectedSceneItem(); break;
        case 38: _t->ToggleAlwaysOnTop(); break;
        case 39: _t->ReorderSources((*reinterpret_cast< OBSScene(*)>(_a[1]))); break;
        case 40: _t->ProcessHotkey((*reinterpret_cast< obs_hotkey_id(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->AddTransition(); break;
        case 42: _t->RenameTransition(); break;
        case 43: _t->TransitionClicked(); break;
        case 44: _t->TransitionStopped(); break;
        case 45: _t->TriggerQuickTransition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->SetDeinterlacingMode(); break;
        case 47: _t->SetDeinterlacingOrder(); break;
        case 48: _t->SetScaleFilter(); break;
        case 49: _t->IconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 50: _t->SetShowing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->ToggleShowHide(); break;
        case 52: _t->on_actionShow_Recordings_triggered(); break;
        case 53: _t->on_actionRemux_triggered(); break;
        case 54: _t->on_action_Settings_triggered(); break;
        case 55: _t->on_actionAdvAudioProperties_triggered(); break;
        case 56: _t->on_advAudioProps_clicked(); break;
        case 57: _t->on_advAudioProps_destroyed(); break;
        case 58: _t->on_actionShowLogs_triggered(); break;
        case 59: _t->on_actionUploadCurrentLog_triggered(); break;
        case 60: _t->on_actionUploadLastLog_triggered(); break;
        case 61: _t->on_actionViewCurrentLog_triggered(); break;
        case 62: _t->on_actionCheckForUpdates_triggered(); break;
        case 63: _t->on_actionEditTransform_triggered(); break;
        case 64: _t->on_actionCopyTransform_triggered(); break;
        case 65: _t->on_actionPasteTransform_triggered(); break;
        case 66: _t->on_actionRotate90CW_triggered(); break;
        case 67: _t->on_actionRotate90CCW_triggered(); break;
        case 68: _t->on_actionRotate180_triggered(); break;
        case 69: _t->on_actionFlipHorizontal_triggered(); break;
        case 70: _t->on_actionFlipVertical_triggered(); break;
        case 71: _t->on_actionFitToScreen_triggered(); break;
        case 72: _t->on_actionStretchToScreen_triggered(); break;
        case 73: _t->on_actionCenterToScreen_triggered(); break;
        case 74: _t->on_scenes_currentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 75: _t->on_scenes_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 76: _t->on_actionAddScene_triggered(); break;
        case 77: _t->on_actionRemoveScene_triggered(); break;
        case 78: _t->on_actionSceneUp_triggered(); break;
        case 79: _t->on_actionSceneDown_triggered(); break;
        case 80: _t->on_sources_itemSelectionChanged(); break;
        case 81: _t->on_sources_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 82: _t->on_sources_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 83: _t->on_actionAddSource_triggered(); break;
        case 84: _t->on_actionRemoveSource_triggered(); break;
        case 85: _t->on_actionInteract_triggered(); break;
        case 86: _t->on_actionSourceProperties_triggered(); break;
        case 87: _t->on_actionSourceUp_triggered(); break;
        case 88: _t->on_actionSourceDown_triggered(); break;
        case 89: _t->on_actionMoveUp_triggered(); break;
        case 90: _t->on_actionMoveDown_triggered(); break;
        case 91: _t->on_actionMoveToTop_triggered(); break;
        case 92: _t->on_actionMoveToBottom_triggered(); break;
        case 93: _t->on_actionLockPreview_triggered(); break;
        case 94: _t->on_scalingMenu_aboutToShow(); break;
        case 95: _t->on_actionScaleWindow_triggered(); break;
        case 96: _t->on_actionScaleCanvas_triggered(); break;
        case 97: _t->on_actionScaleOutput_triggered(); break;
        case 98: _t->on_streamButton_clicked(); break;
        case 99: _t->on_recordButton_clicked(); break;
        case 100: _t->on_settingsButton_clicked(); break;
        case 101: _t->on_actionWebsite_triggered(); break;
        case 102: _t->on_preview_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 103: _t->on_previewDisabledLabel_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 104: _t->on_actionNewSceneCollection_triggered(); break;
        case 105: _t->on_actionDupSceneCollection_triggered(); break;
        case 106: _t->on_actionRenameSceneCollection_triggered(); break;
        case 107: _t->on_actionRemoveSceneCollection_triggered(); break;
        case 108: _t->on_actionImportSceneCollection_triggered(); break;
        case 109: _t->on_actionExportSceneCollection_triggered(); break;
        case 110: _t->on_actionNewProfile_triggered(); break;
        case 111: _t->on_actionDupProfile_triggered(); break;
        case 112: _t->on_actionRenameProfile_triggered(); break;
        case 113: _t->on_actionRemoveProfile_triggered(); break;
        case 114: _t->on_actionImportProfile_triggered(); break;
        case 115: _t->on_actionExportProfile_triggered(); break;
        case 116: _t->on_actionShowSettingsFolder_triggered(); break;
        case 117: _t->on_actionShowProfileFolder_triggered(); break;
        case 118: _t->on_actionAlwaysOnTop_triggered(); break;
        case 119: _t->on_toggleSceneTransitions_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 120: _t->on_toggleListboxToolbars_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 121: _t->on_toggleStatusBar_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 122: _t->on_transitions_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 123: _t->on_transitionAdd_clicked(); break;
        case 124: _t->on_transitionRemove_clicked(); break;
        case 125: _t->on_transitionProps_clicked(); break;
        case 126: _t->on_modeSwitch_clicked(); break;
        case 127: _t->logUploadFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 128: _t->updateFileFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 129: _t->AddSourceFromAction(); break;
        case 130: _t->MoveSceneToTop(); break;
        case 131: _t->MoveSceneToBottom(); break;
        case 132: _t->EditSceneName(); break;
        case 133: _t->EditSceneItemName(); break;
        case 134: _t->SceneNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 135: _t->SceneItemNameEdited((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 136: _t->OpenSceneFilters(); break;
        case 137: _t->OpenFilters(); break;
        case 138: _t->EnablePreviewDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 139: _t->TogglePreview(); break;
        case 140: _t->NudgeUp(); break;
        case 141: _t->NudgeDown(); break;
        case 142: _t->NudgeLeft(); break;
        case 143: _t->NudgeRight(); break;
        case 144: _t->OpenPreviewProjector(); break;
        case 145: _t->OpenSourceProjector(); break;
        case 146: _t->OpenSceneProjector(); break;
        case 147: _t->on_actionResetTransform_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 134:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 135:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject OBSBasic::staticMetaObject = {
    { &OBSMainWindow::staticMetaObject, qt_meta_stringdata_OBSBasic.data,
      qt_meta_data_OBSBasic,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OBSBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasic.stringdata0))
        return static_cast<void*>(const_cast< OBSBasic*>(this));
    return OBSMainWindow::qt_metacast(_clname);
}

int OBSBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 148)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 148;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
