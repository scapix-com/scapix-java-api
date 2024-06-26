// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MISC_JAVAUTILZIPFILEACCESS_FWD
#define SCAPIX_JAVA_API_SUN_MISC_JAVAUTILZIPFILEACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::misc { class JavaUtilZipFileAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::misc::JavaUtilZipFileAccess>
{
	static constexpr fixed_string class_name = "sun/misc/JavaUtilZipFileAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JAVAUTILZIPFILEACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MISC_JAVAUTILZIPFILEACCESS)
#define SCAPIX_JAVA_API_SUN_MISC_JAVAUTILZIPFILEACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/zip/ZipFile.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::misc::JavaUtilZipFileAccess : public jni::object_base<"sun/misc/JavaUtilZipFileAccess",
	java::lang::Object>
{
public:

	jboolean startsWithLocHeader(jni::ref<java::util::zip::ZipFile> p1) { return call_method<"startsWithLocHeader", jboolean>(p1); }

protected:

	JavaUtilZipFileAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MISC_JAVAUTILZIPFILEACCESS
