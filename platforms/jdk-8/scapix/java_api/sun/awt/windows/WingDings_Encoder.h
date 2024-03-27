// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_ENCODER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_ENCODER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WingDings_Encoder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WingDings_Encoder>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WingDings$Encoder";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::CharsetEncoder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_ENCODER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_ENCODER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_ENCODER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/Charset.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WingDings_Encoder : public jni::object_base<"sun/awt/windows/WingDings$Encoder",
	java::nio::charset::CharsetEncoder>
{
public:

	static jni::ref<sun::awt::windows::WingDings_Encoder> new_object(jni::ref<java::nio::charset::Charset> p1) { return base_::new_object(p1); }
	jboolean canEncode(jchar p1) { return call_method<"canEncode", jboolean>(p1); }
	jboolean isLegalReplacement(jni::ref<jni::array<jbyte>> p1) { return call_method<"isLegalReplacement", jboolean>(p1); }

protected:

	WingDings_Encoder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WINGDINGS_ENCODER