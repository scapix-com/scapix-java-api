// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Element_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Element_Builder>
{
	static constexpr fixed_string class_name = "android/renderscript/Element$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/renderscript/Element.h>
#include <scapix/java_api/android/renderscript/RenderScript.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Element_Builder : public jni::object_base<"android/renderscript/Element$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::renderscript::Element_Builder> new_object(jni::ref<android::renderscript::RenderScript> rs) { return base_::new_object(rs); }
	jni::ref<android::renderscript::Element_Builder> add(jni::ref<android::renderscript::Element> element, jni::ref<java::lang::String> name, jint arraySize) { return call_method<"add", jni::ref<android::renderscript::Element_Builder>>(element, name, arraySize); }
	jni::ref<android::renderscript::Element_Builder> add(jni::ref<android::renderscript::Element> element, jni::ref<java::lang::String> name) { return call_method<"add", jni::ref<android::renderscript::Element_Builder>>(element, name); }
	jni::ref<android::renderscript::Element> create() { return call_method<"create", jni::ref<android::renderscript::Element>>(); }

protected:

	Element_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_ELEMENT_BUILDER
