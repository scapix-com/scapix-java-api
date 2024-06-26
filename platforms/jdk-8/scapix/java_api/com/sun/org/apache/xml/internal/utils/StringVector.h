// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_STRINGVECTOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_STRINGVECTOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class StringVector; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::StringVector>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/StringVector";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_STRINGVECTOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_STRINGVECTOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_STRINGVECTOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::StringVector : public jni::object_base<"com/sun/org/apache/xml/internal/utils/StringVector",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::StringVector> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::StringVector> new_object(jint p1) { return base_::new_object(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jint size() { return call_method<"size", jint>(); }
	void addElement(jni::ref<java::lang::String> p1) { return call_method<"addElement", void>(p1); }
	jni::ref<java::lang::String> elementAt(jint p1) { return call_method<"elementAt", jni::ref<java::lang::String>>(p1); }
	jboolean contains(jni::ref<java::lang::String> p1) { return call_method<"contains", jboolean>(p1); }
	jboolean containsIgnoreCase(jni::ref<java::lang::String> p1) { return call_method<"containsIgnoreCase", jboolean>(p1); }
	void push(jni::ref<java::lang::String> p1) { return call_method<"push", void>(p1); }
	jni::ref<java::lang::String> pop() { return call_method<"pop", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> peek() { return call_method<"peek", jni::ref<java::lang::String>>(); }

protected:

	StringVector(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_STRINGVECTOR
