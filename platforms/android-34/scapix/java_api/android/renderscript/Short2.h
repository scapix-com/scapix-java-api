// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SHORT2_FWD
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SHORT2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::renderscript { class Short2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::renderscript::Short2>
{
	static constexpr fixed_string class_name = "android/renderscript/Short2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SHORT2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SHORT2)
#define SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SHORT2

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::renderscript::Short2 : public jni::object_base<"android/renderscript/Short2",
	java::lang::Object>
{
public:

	jshort x() { return get_field<"x", jshort>(); }
	void x(jshort v) { set_field<"x", jshort>(v); }
	jshort y() { return get_field<"y", jshort>(); }
	void y(jshort v) { set_field<"y", jshort>(v); }

	static jni::ref<android::renderscript::Short2> new_object() { return base_::new_object(); }
	static jni::ref<android::renderscript::Short2> new_object(jshort x, jshort y) { return base_::new_object(x, y); }

protected:

	Short2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_RENDERSCRIPT_SHORT2
