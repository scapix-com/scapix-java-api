// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_INT2_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_INT2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Int2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Int2>
{
	static constexpr fixed_string class_name = "android/renderscript/Int2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_INT2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_INT2)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_INT2

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Int2 : public jni::object_base<"android/renderscript/Int2",
	java::lang::Object>
{
public:

	jint x() { return get_field<"x", jint>(); }
	void x(jint v) { set_field<"x", jint>(v); }
	jint y() { return get_field<"y", jint>(); }
	void y(jint v) { set_field<"y", jint>(v); }

	static jni::ref<android::renderscript::Int2> new_object() { return base_::new_object(); }
	static jni::ref<android::renderscript::Int2> new_object(jint x, jint y) { return base_::new_object(x, y); }

protected:

	Int2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_INT2
