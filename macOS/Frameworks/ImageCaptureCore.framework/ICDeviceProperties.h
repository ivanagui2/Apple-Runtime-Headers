//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSNumber, NSSet, NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface ICDeviceProperties : NSObject
{
    id _delegate;
    NSNumber *_deviceRef;
    NSNumber *_connectionID;
    NSNumber *_deviceID;
    NSNumber *_remoteDeviceID;
    NSNumber *_sessionID;
    unsigned long long _type;
    NSString *_name;
    NSString *_productKind;
    struct CGImage *_icon;
    NSMutableSet *_capabilities;
    double _softwareInstallPercentDone;
    BOOL _canCancelSoftwareInstallation;
    BOOL _systemReportsEjectable;
    NSString *_modulePath;
    NSString *_moduleVersion;
    int _moduleExecutableArchitecture;
    BOOL _remote;
    BOOL _shared;
    BOOL _hasConfigurableWiFiInterface;
    NSString *_transportType;
    NSString *_iconPath;
    int _usbLocationID;
    int _usbProductID;
    int _usbVendorID;
    int _usbIntefaceClass;
    int _usbInterfaceSubClass;
    int _usbInterfaceProtocol;
    long long _fwGUID;
    NSString *_UUIDString;
    NSString *_persistentIDString;
    NSString *_serialNumberString;
    BOOL _autolaunchDevice;
    NSString *_autolaunchApplicationPath;
    NSString *_bonjourServiceType;
    NSString *_bonjourServiceName;
    NSString *_locationDescription;
    NSDictionary *_bonjourTXTRecord;
    NSString *_ipAddress;
    int _ipPort;
    BOOL _autoOpenSession;
    BOOL _openSessionPending;
    BOOL _closeSessionPending;
    BOOL _preferred;
    double _preferredTimeStamp;
    NSString *_buttonPressed;
    NSMutableDictionary *_userData;
    BOOL _ready;
    NSString *_softwareUpdateQueryString;
    unsigned long long _deviceSoftwareInstallPercentCompleted;
    BOOL _installSoftwareRequested;
    NSDictionary *_lastSoftwareInstallStatus;
    id _userObject;
    unsigned int _assertionID;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_endpoint;
    NSLock *_connectionLock;
}

@property(retain) NSLock *connectionLock; // @synthesize connectionLock=_connectionLock;
@property(retain) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property unsigned int assertionID; // @synthesize assertionID=_assertionID;
@property(retain) id userObject; // @synthesize userObject=_userObject;
@property(retain) NSDictionary *lastSoftwareInstallStatus; // @synthesize lastSoftwareInstallStatus=_lastSoftwareInstallStatus;
@property BOOL installSoftwareRequested; // @synthesize installSoftwareRequested=_installSoftwareRequested;
@property(retain) NSString *softwareUpdateQueryString; // @synthesize softwareUpdateQueryString=_softwareUpdateQueryString;
@property BOOL ready; // @synthesize ready=_ready;
@property(retain) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(copy) NSString *buttonPressed; // @synthesize buttonPressed=_buttonPressed;
@property BOOL preferred; // @synthesize preferred=_preferred;
@property BOOL closeSessionPending; // @synthesize closeSessionPending=_closeSessionPending;
@property BOOL openSessionPending; // @synthesize openSessionPending=_openSessionPending;
@property BOOL autoOpenSession; // @synthesize autoOpenSession=_autoOpenSession;
@property int ipPort; // @synthesize ipPort=_ipPort;
@property(retain) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(retain) NSDictionary *bonjourTXTRecord; // @synthesize bonjourTXTRecord=_bonjourTXTRecord;
@property(retain) NSString *locationDescription; // @synthesize locationDescription=_locationDescription;
@property(retain) NSString *bonjourServiceName; // @synthesize bonjourServiceName=_bonjourServiceName;
@property(retain) NSString *bonjourServiceType; // @synthesize bonjourServiceType=_bonjourServiceType;
@property(retain) NSString *autolaunchApplicationPath; // @synthesize autolaunchApplicationPath=_autolaunchApplicationPath;
@property BOOL autolaunchDevice; // @synthesize autolaunchDevice=_autolaunchDevice;
@property(retain) NSString *serialNumberString; // @synthesize serialNumberString=_serialNumberString;
@property(retain) NSString *persistentIDString; // @synthesize persistentIDString=_persistentIDString;
@property(retain) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property long long fwGUID; // @synthesize fwGUID=_fwGUID;
@property int usbInterfaceProtocol; // @synthesize usbInterfaceProtocol=_usbInterfaceProtocol;
@property int usbInterfaceSubClass; // @synthesize usbInterfaceSubClass=_usbInterfaceSubClass;
@property int usbIntefaceClass; // @synthesize usbIntefaceClass=_usbIntefaceClass;
@property int usbVendorID; // @synthesize usbVendorID=_usbVendorID;
@property int usbProductID; // @synthesize usbProductID=_usbProductID;
@property int usbLocationID; // @synthesize usbLocationID=_usbLocationID;
@property(retain) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(retain) NSString *transportType; // @synthesize transportType=_transportType;
@property BOOL hasConfigurableWiFiInterface; // @synthesize hasConfigurableWiFiInterface=_hasConfigurableWiFiInterface;
@property BOOL shared; // @synthesize shared=_shared;
@property BOOL remote; // @synthesize remote=_remote;
@property int moduleExecutableArchitecture; // @synthesize moduleExecutableArchitecture=_moduleExecutableArchitecture;
@property(retain) NSString *moduleVersion; // @synthesize moduleVersion=_moduleVersion;
@property(retain) NSString *modulePath; // @synthesize modulePath=_modulePath;
@property BOOL canCancelSoftwareInstallation; // @synthesize canCancelSoftwareInstallation=_canCancelSoftwareInstallation;
@property double softwareInstallPercentDone; // @synthesize softwareInstallPercentDone=_softwareInstallPercentDone;
@property(readonly) NSSet *capabilities; // @synthesize capabilities=_capabilities;
@property(retain) NSString *productKind; // @synthesize productKind=_productKind;
@property(retain) NSString *name; // @synthesize name=_name;
@property BOOL systemReportsEjectable; // @synthesize systemReportsEjectable=_systemReportsEjectable;
@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSNumber *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) NSNumber *remoteDeviceID; // @synthesize remoteDeviceID=_remoteDeviceID;
@property(retain) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain) NSNumber *connectionID; // @synthesize connectionID=_connectionID;
@property(retain) NSNumber *deviceRef; // @synthesize deviceRef=_deviceRef;
@property id delegate; // @synthesize delegate=_delegate;
- (void)unlockConnection;
- (void)lockConnection;
- (void)releaseConnection;
- (void)removeCapabilities;
- (void)removeCapability:(id)arg1;
- (void)addCapability:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)releasePowerAssertion;
- (void)takePowerAssertion:(id)arg1;
- (void)initPowerAssertion;
@property struct CGImage *icon; // @dynamic icon;
- (id)init;

@end
