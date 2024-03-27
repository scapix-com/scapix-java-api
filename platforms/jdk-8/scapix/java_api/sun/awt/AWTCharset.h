// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/Charset.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_AWTCHARSET_FWD
#define SCAPIX_JAVA_API_SUN_AWT_AWTCHARSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class AWTCharset; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::AWTCharset>
{
	static constexpr fixed_string class_name = "sun/awt/AWTCharset";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::Charset>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTCHARSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_AWTCHARSET)
#define SCAPIX_JAVA_API_SUN_AWT_AWTCHARSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#include <scapix/java_api/sun/awt/AWTCharset_Encoder.h>
#include <scapix/java_api/sun/awt/AWTCharset_Decoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::AWTCharset : public jni::object_base<"sun/awt/AWTCharset",
	java::nio::charset::Charset>
{
public:

	using Encoder = AWTCharset_Encoder;
	using Decoder = AWTCharset_Decoder;

	static jni::ref<sun::awt::AWTCharset> new_object(jni::ref<java::lang::String> p1, jni::ref<java::nio::charset::Charset> p2) { return base_::new_object(p1, p2); }
	jboolean contains(jni::ref<java::nio::charset::Charset> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::nio::charset::CharsetEncoder> newEncoder() { return call_method<"newEncoder", jni::ref<java::nio::charset::CharsetEncoder>>(); }
	jni::ref<java::nio::charset::CharsetDecoder> newDecoder() { return call_method<"newDecoder", jni::ref<java::nio::charset::CharsetDecoder>>(); }

protected:

	AWTCharset(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_AWTCHARSET