// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_FILENAMEMAP_FWD
#define SCAPIX_JAVA_API_JAVA_NET_FILENAMEMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class FileNameMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::FileNameMap>
{
	static constexpr fixed_string class_name = "java/net/FileNameMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_FILENAMEMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_FILENAMEMAP)
#define SCAPIX_JAVA_API_JAVA_NET_FILENAMEMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::FileNameMap : public jni::object_base<"java/net/FileNameMap",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getContentTypeFor(jni::ref<java::lang::String> p1) { return call_method<"getContentTypeFor", jni::ref<java::lang::String>>(p1); }

protected:

	FileNameMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_FILENAMEMAP
