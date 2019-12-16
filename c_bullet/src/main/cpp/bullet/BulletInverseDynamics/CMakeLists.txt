INCLUDE_DIRECTORIES(${BULLET_PHYSICS_SOURCE_DIR})

SET(BulletInverseDynamics_SRCS
        IDMath.cpp
        MultiBodyTree.cpp
        details/MultiBodyTreeInitCache.cpp
        details/MultiBodyTreeImpl.cpp)

SET(BulletInverseDynamicsRoot_HDRS
        IDConfig.hpp
        IDConfigEigen.hpp
        IDMath.hpp
        IDConfigBuiltin.hpp
        IDErrorMessages.hpp
        MultiBodyTree.hpp)

SET(BulletInverseDynamicsDetails_HDRS
        details/IDEigenInterface.hpp
        details/IDMatVec.hpp
        details/IDLinearMathInterface.hpp
        details/MultiBodyTreeImpl.hpp
        details/MultiBodyTreeInitCache.hpp)

SET(BulletInverseDynamics_HDRS
        ${BulletInverseDynamicsRoot_HDRS}
        ${BulletInverseDynamicsDetails_HDRS})

ADD_LIBRARY(BulletInverseDynamics ${BulletInverseDynamics_SRCS} ${BulletInverseDynamics_HDRS})
SET_TARGET_PROPERTIES(BulletInverseDynamics PROPERTIES VERSION ${BULLET_VERSION})
SET_TARGET_PROPERTIES(BulletInverseDynamics PROPERTIES SOVERSION ${BULLET_VERSION})