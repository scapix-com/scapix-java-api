// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_CONVERSION_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_CONVERSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Formatter_Conversion; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Formatter_Conversion>
{
	static constexpr fixed_string class_name = "java/util/Formatter$Conversion";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_CONVERSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_CONVERSION)
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_CONVERSION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Formatter_Conversion : public jni::object_base<"java/util/Formatter$Conversion",
	java::lang::Object>
{
public:


protected:

	Formatter_Conversion(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATTER_CONVERSION
