#ifndef __HUANG_YI_HONG_H__
#define __HUANG_YI_HONG_H__

#define PAN_LONG "fool"

namespace Uestc{

    namespace Iot{

        namespace _444_{

            class Panlong{
                private:
                    bool isFool;
                    bool isVeryFool;

                public:
                    Panlong() = default;
                    Panlong(bool fool) : isFool(fool), isVeryFool(1){};
                    ~Panlong();
                    void displayWhetherIsAfool();
            };
        };
    };
};

#endif