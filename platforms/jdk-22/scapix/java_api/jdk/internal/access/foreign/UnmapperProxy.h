// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_FOREIGN_UNMAPPERPROXY_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_FOREIGN_UNMAPPERPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access::foreign { class UnmapperProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::foreign::UnmapperProxy>
{
	static constexpr fixed_string class_name = "jdk/internal/access/foreign/UnmapperProxy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_FOREIGN_UNMAPPERPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_FOREIGN_UNMAPPERPROXY)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_FOREIGN_UNMAPPERPROXY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::foreign::UnmapperProxy : public jni::object_base<"jdk/internal/access/foreign/UnmapperProxy",
	java::lang::Object>
{
public:

	jlong address() { return call_method<"address", jlong>(); }
	jni::ref<java::io::FileDescriptor> fileDescriptor() { return call_method<"fileDescriptor", jni::ref<java::io::FileDescriptor>>(); }
	jboolean isSync() { return call_method<"isSync", jboolean>(); }
	void unmap() { return call_method<"unmap", void>(); }

protected:

	UnmapperProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_FOREIGN_UNMAPPERPROXY
