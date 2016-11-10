//  SDLOnAppInterfaceUnregistered.m
//

#import "SDLOnAppInterfaceUnregistered.h"

#import "SDLNames.h"

@implementation SDLOnAppInterfaceUnregistered

- (instancetype)init {
    if (self = [super initWithName:SDLNameOnAppInterfaceUnregistered]) {
    }
    return self;
}

- (void)setReason:(SDLAppInterfaceUnregisteredReason)reason {
    [parameters sdl_setObject:reason forName:SDLNameReason];
}

- (SDLAppInterfaceUnregisteredReason)reason {
    return [parameters sdl_objectForName:SDLNameReason];
}

@end
