//  SDLTouchEventCapabilities.m
//


#import "SDLTouchEventCapabilities.h"

#import "SDLNames.h"

@implementation SDLTouchEventCapabilities

- (void)setPressAvailable:(NSNumber<SDLBool> *)pressAvailable {
    [store sdl_setObject:pressAvailable forName:SDLNamePressAvailable];
}

- (NSNumber<SDLBool> *)pressAvailable {
    return [store sdl_objectForName:SDLNamePressAvailable];
}

- (void)setMultiTouchAvailable:(NSNumber<SDLBool> *)multiTouchAvailable {
    [store sdl_setObject:multiTouchAvailable forName:SDLNameMultiTouchAvailable];
}

- (NSNumber<SDLBool> *)multiTouchAvailable {
    return [store sdl_objectForName:SDLNameMultiTouchAvailable];
}

- (void)setDoublePressAvailable:(NSNumber<SDLBool> *)doublePressAvailable {
    [store sdl_setObject:doublePressAvailable forName:SDLNameDoublePressAvailable];
}

- (NSNumber<SDLBool> *)doublePressAvailable {
    return [store sdl_objectForName:SDLNameDoublePressAvailable];
}

@end
