/*
 * Copyright (c) 2020, SmartDeviceLink Consortium, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided with the
 * distribution.
 *
 * Neither the name of the SmartDeviceLink Consortium Inc. nor the names of
 * its contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#import "SDLEnum.h"

/**
 *  A navigation junction type.
 */
typedef SDLEnum SDLNavigationJunction NS_TYPED_ENUM;

/**
 *  A junction that represents a standard intersection with a single road crossing another.
 */
extern SDLNavigationJunction const SDLNavigationJunctionRegular;

/**
 *  A junction where the road splits off into two paths; a fork in the road.
 */
extern SDLNavigationJunction const SDLNavigationJunctionBifurcation;

/**
 *  A junction that has multiple intersections and paths.
 */
extern SDLNavigationJunction const SDLNavigationJunctionMultiCarriageway;

/**
 *  A junction where traffic moves in a single direction around a central, non-traversable point to reach one of the connecting roads.
 */
extern SDLNavigationJunction const SDLNavigationJunctionRoundabout;

/**
 *  Similar to a roundabout, however the center of the roundabout is fully traversable. Also known as a mini-roundabout.
 */
extern SDLNavigationJunction const SDLNavigationJunctionTraversableRoundabout;

/**
 *  A junction where lefts diverge to the right, then curve to the left, converting a left turn to a crossing maneuver.
 */
extern SDLNavigationJunction const SDLNavigationJunctionJughandle;

/**
 *   Multiple way intersection that allows traffic to flow based on priority; most commonly right of way and first in, first out.
 */
extern SDLNavigationJunction const SDLNavigationJunctionAllWayYield;

/**
 *  A junction designated for traffic turn arounds.
 */
extern SDLNavigationJunction const SDLNavigationJunctionTurnAround;
