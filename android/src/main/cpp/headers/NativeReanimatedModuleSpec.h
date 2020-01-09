#ifndef REANIMATEDEXAMPLE_NATIVEREANIMATEDMODULESPEC_H
#define REANIMATEDEXAMPLE_NATIVEREANIMATEDMODULESPEC_H

#include <memory>
#include <string>

#include "ReanimatedTurboModule.h"

namespace facebook {
namespace react {

class JSI_EXPORT NativeReanimatedModuleSpec : public ReanimatedTurboModule {
 protected:
  NativeReanimatedModuleSpec();

 public:
  virtual jsi::String getString(jsi::Runtime &rt, const jsi::String &arg) = 0;
};

} // namespace react
} // namespace facebook

#endif //REANIMATEDEXAMPLE_NATIVEREANIMATEDMODULESPEC_H
