// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/InternalError.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPERROR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPERROR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class ZipError; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::ZipError>
{
	static constexpr fixed_string class_name = "java/util/zip/ZipError";
	using base_classes = std::tuple<scapix::java_api::java::lang::InternalError>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPERROR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPERROR)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPERROR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::ZipError : public jni::object_base<"java/util/zip/ZipError",
	java::lang::InternalError>
{
public:

	static jni::ref<java::util::zip::ZipError> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }

protected:

	ZipError(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPERROR
