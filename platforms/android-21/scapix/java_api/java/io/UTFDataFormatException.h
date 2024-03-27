// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_UTFDATAFORMATEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_IO_UTFDATAFORMATEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class UTFDataFormatException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::UTFDataFormatException>
{
	static constexpr fixed_string class_name = "java/io/UTFDataFormatException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_UTFDATAFORMATEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_UTFDATAFORMATEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_IO_UTFDATAFORMATEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::UTFDataFormatException : public jni::object_base<"java/io/UTFDataFormatException",
	java::io::IOException>
{
public:

	static jni::ref<java::io::UTFDataFormatException> new_object() { return base_::new_object(); }
	static jni::ref<java::io::UTFDataFormatException> new_object(jni::ref<java::lang::String> detailMessage) { return base_::new_object(detailMessage); }

protected:

	UTFDataFormatException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_UTFDATAFORMATEXCEPTION
