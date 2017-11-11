/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#import "WXModuleProtocol.h"

#define BIZTYPE             @"bizType"
#define PAGENAME            @"pageName"
#define WXSDKVERSION        @"WXSDKVersion"
#define JSLIBVERSION        @"JSLibVersion"
#define WXREQUESTTYPE       @"requestType"
#define WXCONNECTIONTYPE    @"connectionType"
#define WXCUSTOMMONITORINFO @"customMonitorInfo"
//give choice that js can add dimension point to monitor
#define WXDIMENSION1        @"wxdim1"
#define WXDIMENSION2        @"wxdim2"
#define WXDIMENSION3        @"wxdim3"
#define WXDIMENSION4        @"wxdim4"
#define WXDIMENSION5        @"wxdim5"

#define SDKINITTIME         @"SDKInitTime"
#define SDKINITINVOKETIME   @"SDKInitInvokeTime"
#define JSLIBINITTIME       @"JSLibInitTime"
#define JSTEMPLATESIZE      @"JSTemplateSize"
#define NETWORKTIME         @"networkTime"
#define COMMUNICATETIME     @"communicateTime"
#define SCREENRENDERTIME    @"screenRenderTime"
#define TOTALTIME           @"totalTime"
#define FIRSETSCREENJSFEXECUTETIME  @"firstScreenJSFExecuteTime"
//give choice that js can add measure point to monitor
#define WXMEASURETIME1      @"measureTime1"
#define WXMEASURETIME2      @"measureTime2"
#define WXMEASURETIME3      @"measureTime3"
#define WXMEASURETIME4      @"measureTime4"
#define WXMEASURETIME5      @"measureTime5"

#define CACHEPROCESSTIME    @"cacheProcessTime"
#define CACHERATIO          @"cacheRatio"

@protocol WXAppMonitorProtocol <WXModuleProtocol>

- (void)commitAppMonitorArgs:(NSDictionary *)args;

- (void)commitAppMonitorAlarm:(NSString *)pageName monitorPoint:(NSString *)monitorPoint success:(BOOL)success errorCode:(NSString *)errorCode errorMsg:(NSString *)errorMsg arg:(NSString *)arg;

@end
