//  SDLECallInfo.m
//

#import "SDLECallInfo.h"

#import "SDLNames.h"


@implementation SDLECallInfo

- (void)setECallNotificationStatus:(SDLVehicleDataNotificationStatus)eCallNotificationStatus {
    [store sdl_setObject:eCallNotificationStatus forName:SDLNameECallNotificationStatus];
}

- (SDLVehicleDataNotificationStatus)eCallNotificationStatus {
    return [store sdl_objectForName:SDLNameECallNotificationStatus];
}

- (void)setAuxECallNotificationStatus:(SDLVehicleDataNotificationStatus)auxECallNotificationStatus {
    [store sdl_setObject:auxECallNotificationStatus forName:SDLNameAuxECallNotificationStatus];
}

- (SDLVehicleDataNotificationStatus)auxECallNotificationStatus {
    return [store sdl_objectForName:SDLNameAuxECallNotificationStatus];
}

- (void)setECallConfirmationStatus:(SDLECallConfirmationStatus)eCallConfirmationStatus {
    [store sdl_setObject:eCallConfirmationStatus forName:SDLNameECallConfirmationStatus];
}

- (SDLECallConfirmationStatus)eCallConfirmationStatus {
    return [store sdl_objectForName:SDLNameECallConfirmationStatus];
}

@end
