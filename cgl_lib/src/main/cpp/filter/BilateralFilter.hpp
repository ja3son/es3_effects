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

#ifndef BilateralFilter_hpp
#define BilateralFilter_hpp

#include "../macros.h"
#include "FilterGroup.hpp"

NS_GI_BEGIN


    class BilateralMonoFilter : public Filter {
    public:
        enum Type {
            HORIZONTAL, VERTICAL
        };

        static BilateralMonoFilter *create(Type type = HORIZONTAL);

        bool init();

        virtual bool proceed(bool bUpdateTargets = true) override;

        void setTexelSpacingMultiplier(float multiplier);

        void setDistanceNormalizationFactor(float value);

    protected:
        BilateralMonoFilter(Type type);

        Type _type;
        float _texelSpacingMultiplier;
        float _distanceNormalizationFactor;
    };

    class BilateralFilter : public FilterGroup {
    public:
        virtual ~BilateralFilter();

        static BilateralFilter *create();

        bool init();

        void setTexelSpacingMultiplier(float multiplier);

        void setDistanceNormalizationFactor(float value);

    protected:
        BilateralFilter();

    private:
        //friend BilateralMonoFilter;
        BilateralMonoFilter *_hBlurFilter;
        BilateralMonoFilter *_vBlurFilter;
    };


NS_GI_END

#endif /* BilateralFilter_hpp */
