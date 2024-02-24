#pragma once

namespace boilerplate_module
{
    class boilerplate
    {
        public:
            // prevent implicit conversion or copy-initialization, useful when having only 1 arg and others default
            explicit boilerplate(int arg);
            double return_sum(double v1, double v2);
    };

} // namespace boilerplate_module