// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/Attribute_Holder.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Package_Class; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Package_Class>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Package$Class";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::Attribute_Holder, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/Package.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_File.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Class_Member.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Class_Field.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Class_Method.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::Package_Class : public jni::object_base<"com/sun/java/util/jar/pack/Package$Class",
	com::sun::java::util::jar::pack::Attribute_Holder,
	java::lang::Comparable>
{
public:

	using Member = Package_Class_Member;
	using Field = Package_Class_Field;
	using Method = Package_Class_Method;

	jni::ref<com::sun::java::util::jar::pack::Package> getPackage() { return call_method<"getPackage", jni::ref<com::sun::java::util::jar::pack::Package>>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jint compareTo(jni::ref<com::sun::java::util::jar::pack::Package_Class> p1) { return call_method<"compareTo", jint>(p1); }
	void setInnerClasses(jni::ref<java::util::Collection> p1) { return call_method<"setInnerClasses", void>(p1); }
	jni::ref<java::util::List> computeGloballyImpliedICs() { return call_method<"computeGloballyImpliedICs", jni::ref<java::util::List>>(); }
	void trimToSize() { return call_method<"trimToSize", void>(); }
	void strip(jni::ref<java::lang::String> p1) { return call_method<"strip", void>(p1); }
	void initFile(jni::ref<com::sun::java::util::jar::pack::Package_File> p1) { return call_method<"initFile", void>(p1); }
	void maybeChooseFileName() { return call_method<"maybeChooseFileName", void>(); }
	jni::ref<java::lang::String> canonicalFileName() { return call_method<"canonicalFileName", jni::ref<java::lang::String>>(); }
	jni::ref<java::io::File> getFileName(jni::ref<java::io::File> p1) { return call_method<"getFileName", jni::ref<java::io::File>>(p1); }
	jni::ref<java::io::File> getFileName() { return call_method<"getFileName", jni::ref<java::io::File>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Package_Class(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS
