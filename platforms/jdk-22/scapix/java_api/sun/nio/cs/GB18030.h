// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/Charset.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class GB18030; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::GB18030>
{
	static constexpr fixed_string class_name = "sun/nio/cs/GB18030";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::Charset>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_GB18030_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_GB18030)
#define SCAPIX_JAVA_API_SUN_NIO_CS_GB18030

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::GB18030 : public jni::object_base<"sun/nio/cs/GB18030",
	java::nio::charset::Charset>
{
public:

	static jni::ref<sun::nio::cs::GB18030> new_object() { return base_::new_object(); }
	jboolean contains(jni::ref<java::nio::charset::Charset> cs) { return call_method<"contains", jboolean>(cs); }
	jni::ref<java::nio::charset::CharsetDecoder> newDecoder() { return call_method<"newDecoder", jni::ref<java::nio::charset::CharsetDecoder>>(); }
	jni::ref<java::nio::charset::CharsetEncoder> newEncoder() { return call_method<"newEncoder", jni::ref<java::nio::charset::CharsetEncoder>>(); }

protected:

	GB18030(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_GB18030
