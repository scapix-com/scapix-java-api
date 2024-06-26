// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_FILEKEY_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_FILEKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class FileKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::FileKey>
{
	static constexpr fixed_string class_name = "sun/nio/ch/FileKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_FILEKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_FILEKEY)
#define SCAPIX_JAVA_API_SUN_NIO_CH_FILEKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::FileKey : public jni::object_base<"sun/nio/ch/FileKey",
	java::lang::Object>
{
public:

	static jni::ref<sun::nio::ch::FileKey> create(jni::ref<java::io::FileDescriptor> p1) { return call_static_method<"create", jni::ref<sun::nio::ch::FileKey>>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	FileKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_FILEKEY
