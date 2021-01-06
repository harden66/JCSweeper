//
//  LDSweeperModel.h
//  demo
//
//  Created by JC on 2020/11/20.
//  Copyright © 2020 admin. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LDSweeperModel : NSObject
@property (nonatomic, assign) NSInteger allArea;
@property (nonatomic, assign) NSInteger allTime;
@property (nonatomic, assign) NSInteger cleanArea;
@property (nonatomic, assign) NSInteger cleanTime;
@property (nonatomic, assign) NSInteger elec;               //!< 电量百分比，精确到十位
@property (nonatomic, assign) NSInteger elecReal;           //!< 电量百分比，精确到个位
@property (nonatomic, assign) NSInteger phi;
@property (nonatomic, assign) NSInteger windPower;      //!< 风力等级
@property (nonatomic, assign) NSInteger height;
@property (nonatomic, assign) NSInteger width;
@property (nonatomic, assign) NSInteger baseLen;
@property (nonatomic, assign) NSInteger lzLen;
@property (nonatomic, assign) NSInteger autoAreaId;  //!<
@property (nonatomic, assign) NSInteger curPathUpdateTime;
@property (nonatomic, strong) NSNumber *ver;
@property (nonatomic, strong) NSArray *errorState;  //!< 错误
@property (nonatomic, strong) NSArray *positionArray;
@property (nonatomic, assign) CGFloat resolution; //每个像素代表的世界坐标系下的距离 单位:米
@property (nonatomic, assign) CGFloat x_min;
@property (nonatomic, assign) CGFloat y_min;
@property (nonatomic, assign) CGFloat orignlScale;  //!< 比例
@property (nonatomic, assign) UInt32 mapId; // 当前地图ID,重建地图时更新
@property (nonatomic, assign) UInt32 pathId;  //!<
@property (nonatomic, copy) NSString *subMode;    //!< {"null","point","area","total","curpoint","room"}
@property (nonatomic, copy) NSString *workNoisy;        //!< 工作模式  “quiet,strong,auto”
@property (nonatomic, copy) NSString *sn;
@property (nonatomic, copy) NSString *map;
@property (nonatomic, copy) NSString *mode;//!< 待机中、充电中、清扫中、异常、 暂停中、回充中、回充暂停、休眠、充电完成、 关机、遥控模式 ("idle","charge","sweep","fault", "pause","backcharge","findchargerpause", "dormant","fullcharge","shutdown","rfctrl")
@end

NS_ASSUME_NONNULL_END
