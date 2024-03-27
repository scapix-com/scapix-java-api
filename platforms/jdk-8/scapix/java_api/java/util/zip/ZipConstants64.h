// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCONSTANTS64_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCONSTANTS64_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class ZipConstants64; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::ZipConstants64>
{
	static constexpr fixed_string class_name = "java/util/zip/ZipConstants64";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCONSTANTS64_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCONSTANTS64)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCONSTANTS64

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::zip::ZipConstants64 : public jni::object_base<"java/util/zip/ZipConstants64",
	java::lang::Object>
{
public:


protected:

	ZipConstants64(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPCONSTANTS64
