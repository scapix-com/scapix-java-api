// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/renderscript/ScriptIntrinsic.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class ScriptIntrinsicBlur; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::ScriptIntrinsicBlur>
{
	static constexpr fixed_string class_name = "android/renderscript/ScriptIntrinsicBlur";
	using base_classes = std::tuple<scapix::java_api::android::renderscript::ScriptIntrinsic>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/Allocation.h>
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Script_FieldID.h>
#include <scapix/java_api/android/renderscript/Script_KernelID.h>
#include <scapix/java_api/android/renderscript/Script_LaunchOptions.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::ScriptIntrinsicBlur : public jni::object_base<"android/renderscript/ScriptIntrinsicBlur",
	android::renderscript::ScriptIntrinsic>
{
public:

	static jni::ref<android::renderscript::ScriptIntrinsicBlur> create(jni::ref<android::renderscript::RenderScript> rs, jni::ref<android::renderscript::Element> e) { return call_static_method<"create", jni::ref<android::renderscript::ScriptIntrinsicBlur>>(rs, e); }
	void setInput(jni::ref<android::renderscript::Allocation> ain) { return call_method<"setInput", void>(ain); }
	void setRadius(jfloat radius) { return call_method<"setRadius", void>(radius); }
	void forEach(jni::ref<android::renderscript::Allocation> aout) { return call_method<"forEach", void>(aout); }
	void forEach(jni::ref<android::renderscript::Allocation> aout, jni::ref<android::renderscript::Script_LaunchOptions> opt) { return call_method<"forEach", void>(aout, opt); }
	jni::ref<android::renderscript::Script_KernelID> getKernelID() { return call_method<"getKernelID", jni::ref<android::renderscript::Script_KernelID>>(); }
	jni::ref<android::renderscript::Script_FieldID> getFieldID_Input() { return call_method<"getFieldID_Input", jni::ref<android::renderscript::Script_FieldID>>(); }

protected:

	ScriptIntrinsicBlur(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SCRIPTINTRINSICBLUR
