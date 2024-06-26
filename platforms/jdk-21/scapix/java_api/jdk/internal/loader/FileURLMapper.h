// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_FILEURLMAPPER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_FILEURLMAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::loader { class FileURLMapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::loader::FileURLMapper>
{
	static constexpr fixed_string class_name = "jdk/internal/loader/FileURLMapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_FILEURLMAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_FILEURLMAPPER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_FILEURLMAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::loader::FileURLMapper : public jni::object_base<"jdk/internal/loader/FileURLMapper",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::loader::FileURLMapper> new_object(jni::ref<java::net::URL> url) { return base_::new_object(url); }
	jni::ref<java::lang::String> getPath() { return call_method<"getPath", jni::ref<java::lang::String>>(); }
	jboolean exists() { return call_method<"exists", jboolean>(); }

protected:

	FileURLMapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_LOADER_FILEURLMAPPER
