// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/Charset.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WingDings; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WingDings>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WingDings";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::Charset>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::windows::WingDings : public jni::object_base<"sun/awt/windows/WingDings",
	java::nio::charset::Charset>
{
public:

	static jni::ref<sun::awt::windows::WingDings> new_object() { return base_::new_object(); }
	jni::ref<java::nio::charset::CharsetEncoder> newEncoder() { return call_method<"newEncoder", jni::ref<java::nio::charset::CharsetEncoder>>(); }
	jni::ref<java::nio::charset::CharsetDecoder> newDecoder() { return call_method<"newDecoder", jni::ref<java::nio::charset::CharsetDecoder>>(); }
	jboolean contains(jni::ref<java::nio::charset::Charset> p1) { return call_method<"contains", jboolean>(p1); }

protected:

	WingDings(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS
