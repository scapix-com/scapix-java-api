// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/BaseObj.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_INVOKEID_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_INVOKEID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Script_InvokeID; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Script_InvokeID>
{
	static constexpr fixed_string class_name = "android/renderscript/Script$InvokeID";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::BaseObj>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_INVOKEID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_INVOKEID)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_INVOKEID

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Script_InvokeID : public jni::object_base<"android/renderscript/Script$InvokeID",
	android::renderscript::BaseObj>
{
public:


protected:

	Script_InvokeID(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_INVOKEID