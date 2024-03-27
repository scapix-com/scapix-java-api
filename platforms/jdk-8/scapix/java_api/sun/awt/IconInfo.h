// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_ICONINFO_FWD
#define SCAPIX_JAVA_API_SUN_AWT_ICONINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class IconInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::IconInfo>
{
	static constexpr fixed_string class_name = "sun/awt/IconInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_ICONINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_ICONINFO)
#define SCAPIX_JAVA_API_SUN_AWT_ICONINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::IconInfo : public jni::object_base<"sun/awt/IconInfo",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::IconInfo> new_object(jni::ref<jni::array<jint>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::awt::IconInfo> new_object(jni::ref<jni::array<jlong>> p1) { return base_::new_object(p1); }
	static jni::ref<sun::awt::IconInfo> new_object(jni::ref<java::awt::Image> p1) { return base_::new_object(p1); }
	void setScaledSize(jint p1, jint p2) { return call_method<"setScaledSize", void>(p1, p2); }
	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getRawLength() { return call_method<"getRawLength", jint>(); }
	jni::ref<jni::array<jint>> getIntData() { return call_method<"getIntData", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jlong>> getLongData() { return call_method<"getLongData", jni::ref<jni::array<jlong>>>(); }
	jni::ref<java::awt::Image> getImage() { return call_method<"getImage", jni::ref<java::awt::Image>>(); }

protected:

	IconInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_ICONINFO
