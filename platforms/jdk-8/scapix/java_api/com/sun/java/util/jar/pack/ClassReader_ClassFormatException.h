// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_CLASSFORMATEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_CLASSFORMATEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class ClassReader_ClassFormatException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::ClassReader_ClassFormatException>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/ClassReader$ClassFormatException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_CLASSFORMATEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_CLASSFORMATEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_CLASSFORMATEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::ClassReader_ClassFormatException : public jni::object_base<"com/sun/java/util/jar/pack/ClassReader$ClassFormatException",
	java::io::IOException>
{
public:

	static jni::ref<com::sun::java::util::jar::pack::ClassReader_ClassFormatException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::java::util::jar::pack::ClassReader_ClassFormatException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }

protected:

	ClassReader_ClassFormatException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_CLASSREADER_CLASSFORMATEXCEPTION
