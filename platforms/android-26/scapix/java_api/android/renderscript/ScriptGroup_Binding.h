// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTGROUP_BINDING_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTGROUP_BINDING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class ScriptGroup_Binding; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::ScriptGroup_Binding>
{
	static constexpr fixed_string class_name = "android/renderscript/ScriptGroup$Binding";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTGROUP_BINDING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTGROUP_BINDING)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTGROUP_BINDING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/Script_FieldID.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::ScriptGroup_Binding : public jni::object_base<"android/renderscript/ScriptGroup$Binding",
	java::lang::Object>
{
public:

	static jni::ref<android::renderscript::ScriptGroup_Binding> new_object(jni::ref<android::renderscript::Script_FieldID> field, jni::ref<java::lang::Object> value) { return base_::new_object(field, value); }

protected:

	ScriptGroup_Binding(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTGROUP_BINDING