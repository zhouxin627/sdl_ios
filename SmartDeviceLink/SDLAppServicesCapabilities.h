//
//  SDLAppServicesCapabilities.h
//  SmartDeviceLink
//
//  Created by Nicole on 1/30/19.
//  Copyright © 2019 smartdevicelink. All rights reserved.
//

#import "SDLRPCRequest.h"
#import "SDLAppServiceCapability.h"
#import "SDLAppServiceType.h"

NS_ASSUME_NONNULL_BEGIN

/*
 *  Capabilities of app services including what service types are supported and the current state of services.
 */
@interface SDLAppServicesCapabilities : SDLRPCStruct

- (instancetype)initWithServicesSupported:(NSArray<SDLAppServiceType> *)servicesSupported appServices:(NSArray<SDLAppServiceCapability *> *)appServices;

/**
 *  An array of supported app service types.
 *
 *  Array of SDLAppServiceType, Required
 */
@property (strong, nonatomic) NSArray<SDLAppServiceType> *servicesSupported;

/**
 *  An array of currently available services. If this is an update to the capability the affected services will include an update reason in that item.
 *
 *  Array of SDLAppServiceCapability, Optional
 */
@property (nullable, strong, nonatomic) NSArray<SDLAppServiceCapability *> *appServices;

@end

NS_ASSUME_NONNULL_END
