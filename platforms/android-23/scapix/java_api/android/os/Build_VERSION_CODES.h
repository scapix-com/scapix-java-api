// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_BUILD_VERSION_CODES_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_BUILD_VERSION_CODES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Build_VERSION_CODES; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Build_VERSION_CODES>
{
	static constexpr fixed_string class_name = "android/os/Build$VERSION_CODES";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_BUILD_VERSION_CODES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_BUILD_VERSION_CODES)
#define SCAPIX_JAVA_API_ANDROID_OS_BUILD_VERSION_CODES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Build_VERSION_CODES : public jni::object_base<"android/os/Build$VERSION_CODES",
	java::lang::Object>
{
public:

	static jint BASE() { return get_static_field<"BASE", jint>(); }
	static jint BASE_1_1() { return get_static_field<"BASE_1_1", jint>(); }
	static jint CUPCAKE() { return get_static_field<"CUPCAKE", jint>(); }
	static jint CUR_DEVELOPMENT() { return get_static_field<"CUR_DEVELOPMENT", jint>(); }
	static jint DONUT() { return get_static_field<"DONUT", jint>(); }
	static jint ECLAIR() { return get_static_field<"ECLAIR", jint>(); }
	static jint ECLAIR_0_1() { return get_static_field<"ECLAIR_0_1", jint>(); }
	static jint ECLAIR_MR1() { return get_static_field<"ECLAIR_MR1", jint>(); }
	static jint FROYO() { return get_static_field<"FROYO", jint>(); }
	static jint GINGERBREAD() { return get_static_field<"GINGERBREAD", jint>(); }
	static jint GINGERBREAD_MR1() { return get_static_field<"GINGERBREAD_MR1", jint>(); }
	static jint HONEYCOMB() { return get_static_field<"HONEYCOMB", jint>(); }
	static jint HONEYCOMB_MR1() { return get_static_field<"HONEYCOMB_MR1", jint>(); }
	static jint HONEYCOMB_MR2() { return get_static_field<"HONEYCOMB_MR2", jint>(); }
	static jint ICE_CREAM_SANDWICH() { return get_static_field<"ICE_CREAM_SANDWICH", jint>(); }
	static jint ICE_CREAM_SANDWICH_MR1() { return get_static_field<"ICE_CREAM_SANDWICH_MR1", jint>(); }
	static jint JELLY_BEAN() { return get_static_field<"JELLY_BEAN", jint>(); }
	static jint JELLY_BEAN_MR1() { return get_static_field<"JELLY_BEAN_MR1", jint>(); }
	static jint JELLY_BEAN_MR2() { return get_static_field<"JELLY_BEAN_MR2", jint>(); }
	static jint KITKAT() { return get_static_field<"KITKAT", jint>(); }
	static jint KITKAT_WATCH() { return get_static_field<"KITKAT_WATCH", jint>(); }
	static jint LOLLIPOP() { return get_static_field<"LOLLIPOP", jint>(); }
	static jint LOLLIPOP_MR1() { return get_static_field<"LOLLIPOP_MR1", jint>(); }
	static jint M() { return get_static_field<"M", jint>(); }

	static jni::ref<android::os::Build_VERSION_CODES> new_object() { return base_::new_object(); }

protected:

	Build_VERSION_CODES(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_BUILD_VERSION_CODES
