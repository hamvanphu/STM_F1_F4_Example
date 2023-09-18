/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.10.0 distribution.
  *
  * @attention
  *
  * Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
  


#ifndef ANIMATEDGRAPHICSTILE_HPP_
#define ANIMATEDGRAPHICSTILE_HPP_

#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TouchArea.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <gui/common/FrontendApplication.hpp>

using namespace touchgfx;

class AnimatedGraphicsTile : public Container
{
public:
    AnimatedGraphicsTile();
    virtual ~AnimatedGraphicsTile();

    int16_t getWidth()
    {
        return Container::getWidth();
    }
    int16_t getHeight()
    {
        return Container::getHeight();
    }

    void gotoAssociatedScreen()
    {
        static_cast<FrontendApplication*>(Application::getInstance())->gotoAnimatedGraphicsScreen();
    }
private:
    TextArea tileId;
};

#endif /* ANIMATEDGRAPHICSTILE_HPP_ */
