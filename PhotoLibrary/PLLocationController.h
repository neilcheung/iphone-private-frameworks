/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLLocationController.h"
#import <Foundation/NSObject.h>
#import "CLLocationManagerDelegate.h"

@class NSString, NSDictionary, CLLocationManager, CLHeading, NSMutableArray;

@interface PLLocationController : NSObject <CLLocationManagerDelegate> {
	CLLocationManager* _locationManager;
	int _managerRefCount;
	NSMutableArray* _locationPendingPaths;
	NSMutableArray* _pendingPathTimestamps;
	CLHeading* _lastHeading;
	NSDictionary* _supportDOPInfo;
	NSDictionary* _exifDictionary;
	NSString* _locationStr;
	BOOL _isUpdating;
}
+(id)sharedInstance;
// inherited: -(void)dealloc;
-(void)start;
-(void)stop;
-(BOOL)_isRunning;
-(BOOL)isUpdating;
-(id)location;
-(id)locationEXIFDictionary;
-(id)locationString;
-(BOOL)_addLocationToMediaPath:(id)mediaPath;
-(void)addLocationToMediaAtPathWhenAvailable:(id)pathWhenAvailable;
-(void)_updatePendingImagePaths;
-(void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3 usingSupportInfo:(id)info;
// in a protocol: -(void)locationManager:(id)manager didUpdateHeading:(id)heading;
@end

@interface PLLocationController (PhotoSavingAdditions)
-(void)_locationlessImageFinishedWriting:(id)writing withError:(id)error atPath:(id)path;
@end
