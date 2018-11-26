//
//  GCTestAppDelegate.h
//  GCTest
//
//  Created by Rohan Kuruvilla on 06/08/2012.
//  Copyright __MyCompanyName__ 2012. All rights reserved.
//

#ifndef  _APP_DELEGATE_H_
#define  _APP_DELEGATE_H_

#include "platform/CCApplication.h"
#include "platform/CCApplicationProtocol.h"
/**
 @brief    The cocos2d Application.
 
 The reason for implement as private inheritance is to hide some interface call by Director.
 */
class  AppDelegate : public cocos2d::ApplicationProtocol
{
public:
    AppDelegate();
    virtual ~AppDelegate();
    
    virtual cocos2d::GLView* initView() override;
    
    /**
     @brief    Implement Director and Scene init code here.
     @return true    Initialize success, app continue.
     @return false   Initialize failed, app terminate.
     */
    virtual bool applicationDidFinishLaunching() override;
    
    /**
     @brief  The function be called when the application enter background
     @param  the pointer of the application
     */
    virtual void applicationDidEnterBackground() override;
    
    /**
     @brief  The function be called when the application enter foreground
     @param  the pointer of the application
     */
    virtual void applicationWillEnterForeground() override;
};

#endif // _APP_DELEGATE_H_

