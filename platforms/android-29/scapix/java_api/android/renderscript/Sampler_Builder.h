// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Sampler_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Sampler_Builder>
{
	static constexpr fixed_string class_name = "android/renderscript/Sampler$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/android/renderscript/Sampler.h>
#include <scapix/java_api/android/renderscript/Sampler_Value.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Sampler_Builder : public jni::object_base<"android/renderscript/Sampler$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::renderscript::Sampler_Builder> new_object(jni::ref<android::renderscript::RenderScript> rs) { return base_::new_object(rs); }
	void setMinification(jni::ref<android::renderscript::Sampler_Value> v) { return call_method<"setMinification", void>(v); }
	void setMagnification(jni::ref<android::renderscript::Sampler_Value> v) { return call_method<"setMagnification", void>(v); }
	void setWrapS(jni::ref<android::renderscript::Sampler_Value> v) { return call_method<"setWrapS", void>(v); }
	void setWrapT(jni::ref<android::renderscript::Sampler_Value> v) { return call_method<"setWrapT", void>(v); }
	void setAnisotropy(jfloat v) { return call_method<"setAnisotropy", void>(v); }
	jni::ref<android::renderscript::Sampler> create() { return call_method<"create", jni::ref<android::renderscript::Sampler>>(); }

protected:

	Sampler_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SAMPLER_BUILDER