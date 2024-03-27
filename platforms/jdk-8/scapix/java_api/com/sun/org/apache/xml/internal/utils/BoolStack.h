// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_BOOLSTACK_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_BOOLSTACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::utils { class BoolStack; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::utils::BoolStack>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/utils/BoolStack";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_BOOLSTACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_BOOLSTACK)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_BOOLSTACK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::utils::BoolStack : public jni::object_base<"com/sun/org/apache/xml/internal/utils/BoolStack",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::utils::BoolStack> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xml::internal::utils::BoolStack> new_object(jint p1) { return base_::new_object(p1); }
	jint size() { return call_method<"size", jint>(); }
	void clear() { return call_method<"clear", void>(); }
	jboolean push(jboolean p1) { return call_method<"push", jboolean>(p1); }
	jboolean pop() { return call_method<"pop", jboolean>(); }
	jboolean popAndTop() { return call_method<"popAndTop", jboolean>(); }
	void setTop(jboolean p1) { return call_method<"setTop", void>(p1); }
	jboolean peek() { return call_method<"peek", jboolean>(); }
	jboolean peekOrFalse() { return call_method<"peekOrFalse", jboolean>(); }
	jboolean peekOrTrue() { return call_method<"peekOrTrue", jboolean>(); }
	jboolean isEmpty() { return call_method<"isEmpty", jboolean>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	BoolStack(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_UTILS_BOOLSTACK
