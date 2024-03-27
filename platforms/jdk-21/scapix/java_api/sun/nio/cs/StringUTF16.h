// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_STRINGUTF16_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_STRINGUTF16_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class StringUTF16; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::StringUTF16>
{
	static constexpr fixed_string class_name = "sun/nio/cs/StringUTF16";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_STRINGUTF16_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_STRINGUTF16)
#define SCAPIX_JAVA_API_SUN_NIO_CS_STRINGUTF16

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::cs::StringUTF16 : public jni::object_base<"sun/nio/cs/StringUTF16",
	java::lang::Object>
{
public:

	static jchar getChar(jni::ref<jni::array<jbyte>> val, jint index) { return call_static_method<"getChar", jchar>(val, index); }

protected:

	StringUTF16(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_STRINGUTF16
