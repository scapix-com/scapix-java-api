// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Script_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Script_Builder>
{
	static constexpr fixed_string class_name = "android/renderscript/Script$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_BUILDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Script_Builder : public jni::object_base<"android/renderscript/Script$Builder",
	java::lang::Object>
{
public:


protected:

	Script_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPT_BUILDER
