// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_BITS_FWD
#define SCAPIX_JAVA_API_JAVA_IO_BITS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class Bits; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::Bits>
{
	static constexpr fixed_string class_name = "java/io/Bits";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BITS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_BITS)
#define SCAPIX_JAVA_API_JAVA_IO_BITS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::Bits : public jni::object_base<"java/io/Bits",
	java::lang::Object>
{
public:


protected:

	Bits(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_BITS
