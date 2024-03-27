// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterWriter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_UTILITY_JAVAWRITER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_UTILITY_JAVAWRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::classfile { class Utility_JavaWriter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::classfile::Utility_JavaWriter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/classfile/Utility$JavaWriter";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterWriter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_UTILITY_JAVAWRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_UTILITY_JAVAWRITER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_UTILITY_JAVAWRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/Writer.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::bcel::internal::classfile::Utility_JavaWriter : public jni::object_base<"com/sun/org/apache/bcel/internal/classfile/Utility$JavaWriter",
	java::io::FilterWriter>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::classfile::Utility_JavaWriter> new_object(jni::ref<java::io::Writer> p1) { return base_::new_object(p1); }
	void write(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void write(jint p1) { return call_method<"write", void>(p1); }
	void write(jni::ref<java::lang::String> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }

protected:

	Utility_JavaWriter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_CLASSFILE_UTILITY_JAVAWRITER
