/*
 * GPUImage-x
 *
 * Copyright (C) 2017 Yijin Wang, Yiqian Wang
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef RGBFilter_hpp
#define RGBFilter_hpp

#include "../macros.h"
#include "Filter.hpp"

NS_GI_BEGIN

    class RGBFilter : public Filter {
    public:
        static RGBFilter *create();

        bool init();

        virtual bool proceed(bool bUpdateTargets = true) override;

        void setRedAdjustment(float redAdjustment);

        void setGreenAdjustment(float greenAdjustment);

        void setBlueAdjustment(float blueAdjustment);

    protected:
        RGBFilter() {};

        float _redAdjustment;
        float _greenAdjustment;
        float _blueAdjustment;
    };

NS_GI_END

#endif /* RGBFilter_hpp */
