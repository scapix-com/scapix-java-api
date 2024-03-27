// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_HOLDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_HOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Attribute_Holder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Attribute_Holder>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Attribute$Holder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_HOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_HOLDER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_HOLDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/Attribute.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Attribute_Layout.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::Attribute_Holder : public jni::object_base<"com/sun/java/util/jar/pack/Attribute$Holder",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::java::util::jar::pack::Attribute_Holder> new_object() { return base_::new_object(); }
	jint attributeSize() { return call_method<"attributeSize", jint>(); }
	void trimToSize() { return call_method<"trimToSize", void>(); }
	void addAttribute(jni::ref<com::sun::java::util::jar::pack::Attribute> p1) { return call_method<"addAttribute", void>(p1); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> removeAttribute(jni::ref<com::sun::java::util::jar::pack::Attribute> p1) { return call_method<"removeAttribute", jni::ref<com::sun::java::util::jar::pack::Attribute>>(p1); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> getAttribute(jint p1) { return call_method<"getAttribute", jni::ref<com::sun::java::util::jar::pack::Attribute>>(p1); }
	jni::ref<java::util::List> getAttributes() { return call_method<"getAttributes", jni::ref<java::util::List>>(); }
	void setAttributes(jni::ref<java::util::List> p1) { return call_method<"setAttributes", void>(p1); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> getAttribute(jni::ref<java::lang::String> p1) { return call_method<"getAttribute", jni::ref<com::sun::java::util::jar::pack::Attribute>>(p1); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> getAttribute(jni::ref<com::sun::java::util::jar::pack::Attribute_Layout> p1) { return call_method<"getAttribute", jni::ref<com::sun::java::util::jar::pack::Attribute>>(p1); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> removeAttribute(jni::ref<java::lang::String> p1) { return call_method<"removeAttribute", jni::ref<com::sun::java::util::jar::pack::Attribute>>(p1); }
	jni::ref<com::sun::java::util::jar::pack::Attribute> removeAttribute(jni::ref<com::sun::java::util::jar::pack::Attribute_Layout> p1) { return call_method<"removeAttribute", jni::ref<com::sun::java::util::jar::pack::Attribute>>(p1); }
	void strip(jni::ref<java::lang::String> p1) { return call_method<"strip", void>(p1); }

protected:

	Attribute_Holder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_ATTRIBUTE_HOLDER
