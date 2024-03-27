// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Class_Member.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FIELD_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FIELD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Package_Class_Field; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Package_Class_Field>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Package$Class$Field";
	using base_classes = std::tuple<scapix::java_api::com::sun::java::util::jar::pack::Package_Class_Member>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FIELD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FIELD)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FIELD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_DescriptorEntry.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::Package_Class_Field : public jni::object_base<"com/sun/java/util/jar/pack/Package$Class$Field",
	com::sun::java::util::jar::pack::Package_Class_Member>
{
public:

	static jni::ref<com::sun::java::util::jar::pack::Package_Class_Field> new_object(jni::ref<com::sun::java::util::jar::pack::Package_Class> this_1, jint flags, jni::ref<com::sun::java::util::jar::pack::ConstantPool_DescriptorEntry> descriptor) { return base_::new_object(this_1, flags, descriptor); }
	jbyte getLiteralTag() { return call_method<"getLiteralTag", jbyte>(); }
	jint compareTo(jni::ref<com::sun::java::util::jar::pack::Package_Class_Member> o) { return call_method<"compareTo", jint>(o); }

protected:

	Package_Class_Field(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_CLASS_FIELD