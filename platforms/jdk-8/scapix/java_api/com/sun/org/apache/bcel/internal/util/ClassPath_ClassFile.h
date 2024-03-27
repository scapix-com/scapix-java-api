// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSPATH_CLASSFILE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSPATH_CLASSFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::util { class ClassPath_ClassFile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::util::ClassPath_ClassFile>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/util/ClassPath$ClassFile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSPATH_CLASSFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSPATH_CLASSFILE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSPATH_CLASSFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::util::ClassPath_ClassFile : public jni::object_base<"com/sun/org/apache/bcel/internal/util/ClassPath$ClassFile",
	java::lang::Object>
{
public:

	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }
	jni::ref<java::lang::String> getPath() { return call_method<"getPath", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getBase() { return call_method<"getBase", jni::ref<java::lang::String>>(); }
	jlong getTime() { return call_method<"getTime", jlong>(); }
	jlong getSize() { return call_method<"getSize", jlong>(); }

protected:

	ClassPath_ClassFile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_UTIL_CLASSPATH_CLASSFILE