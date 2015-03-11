/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class NSDictionary;

@interface TUAudioRoute : NSObject {
    NSDictionary *_route;
}

@property(getter=isAirTunes,readonly) BOOL airTunes;
@property(getter=isBluetooth,readonly) BOOL bluetooth;
@property(readonly) int bluetoothEndpointType;
@property(getter=isCarAudio,readonly) BOOL carAudio;
@property(getter=isReceiver,readonly) BOOL receiver;
@property(retain) NSDictionary * route;
@property(getter=isSpeaker,readonly) BOOL speaker;
@property(getter=isWirelessHeadset,readonly) BOOL wirelessHeadset;

- (BOOL)_routeNameEqualTo:(id)arg1;
- (int)bluetoothEndpointType;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isAirTunes;
- (BOOL)isBluetooth;
- (BOOL)isCarAudio;
- (BOOL)isReceiver;
- (BOOL)isSpeaker;
- (BOOL)isWirelessHeadset;
- (id)route;
- (void)setRoute:(id)arg1;

@end