// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_FILEINPUTSTREAMPOOL_UNCLOSABLEINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_FILEINPUTSTREAMPOOL_UNCLOSABLEINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class FileInputStreamPool_UnclosableInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::FileInputStreamPool_UnclosableInputStream>
{
	static constexpr fixed_string class_name = "sun/security/provider/FileInputStreamPool$UnclosableInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_FILEINPUTSTREAMPOOL_UNCLOSABLEINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_FILEINPUTSTREAMPOOL_UNCLOSABLEINPUTSTREAM)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_FILEINPUTSTREAMPOOL_UNCLOSABLEINPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::FileInputStreamPool_UnclosableInputStream : public jni::object_base<"sun/security/provider/FileInputStreamPool$UnclosableInputStream",
	java::io::FilterInputStream>
{
public:

	void close() { return call_method<"close", void>(); }

protected:

	FileInputStreamPool_UnclosableInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_FILEINPUTSTREAMPOOL_UNCLOSABLEINPUTSTREAM
