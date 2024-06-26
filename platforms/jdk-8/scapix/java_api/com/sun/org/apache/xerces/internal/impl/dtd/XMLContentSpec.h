// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLCONTENTSPEC_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLCONTENTSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd { class XMLContentSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLCONTENTSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLCONTENTSPEC)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLCONTENTSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec_Provider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dtd/XMLContentSpec",
	java::lang::Object>
{
public:

	using Provider = XMLContentSpec_Provider;

	static jshort CONTENTSPECNODE_LEAF() { return get_static_field<"CONTENTSPECNODE_LEAF", jshort>(); }
	static jshort CONTENTSPECNODE_ZERO_OR_ONE() { return get_static_field<"CONTENTSPECNODE_ZERO_OR_ONE", jshort>(); }
	static jshort CONTENTSPECNODE_ZERO_OR_MORE() { return get_static_field<"CONTENTSPECNODE_ZERO_OR_MORE", jshort>(); }
	static jshort CONTENTSPECNODE_ONE_OR_MORE() { return get_static_field<"CONTENTSPECNODE_ONE_OR_MORE", jshort>(); }
	static jshort CONTENTSPECNODE_CHOICE() { return get_static_field<"CONTENTSPECNODE_CHOICE", jshort>(); }
	static jshort CONTENTSPECNODE_SEQ() { return get_static_field<"CONTENTSPECNODE_SEQ", jshort>(); }
	static jshort CONTENTSPECNODE_ANY() { return get_static_field<"CONTENTSPECNODE_ANY", jshort>(); }
	static jshort CONTENTSPECNODE_ANY_OTHER() { return get_static_field<"CONTENTSPECNODE_ANY_OTHER", jshort>(); }
	static jshort CONTENTSPECNODE_ANY_LOCAL() { return get_static_field<"CONTENTSPECNODE_ANY_LOCAL", jshort>(); }
	static jshort CONTENTSPECNODE_ANY_LAX() { return get_static_field<"CONTENTSPECNODE_ANY_LAX", jshort>(); }
	static jshort CONTENTSPECNODE_ANY_OTHER_LAX() { return get_static_field<"CONTENTSPECNODE_ANY_OTHER_LAX", jshort>(); }
	static jshort CONTENTSPECNODE_ANY_LOCAL_LAX() { return get_static_field<"CONTENTSPECNODE_ANY_LOCAL_LAX", jshort>(); }
	static jshort CONTENTSPECNODE_ANY_SKIP() { return get_static_field<"CONTENTSPECNODE_ANY_SKIP", jshort>(); }
	static jshort CONTENTSPECNODE_ANY_OTHER_SKIP() { return get_static_field<"CONTENTSPECNODE_ANY_OTHER_SKIP", jshort>(); }
	static jshort CONTENTSPECNODE_ANY_LOCAL_SKIP() { return get_static_field<"CONTENTSPECNODE_ANY_LOCAL_SKIP", jshort>(); }
	jshort type() { return get_field<"type", jshort>(); }
	void type(jshort v) { set_field<"type", jshort>(v); }
	jni::ref<java::lang::Object> value() { return get_field<"value", jni::ref<java::lang::Object>>(); }
	void value(jni::ref<java::lang::Object> v) { set_field<"value", jni::ref<java::lang::Object>>(v); }
	jni::ref<java::lang::Object> otherValue() { return get_field<"otherValue", jni::ref<java::lang::Object>>(); }
	void otherValue(jni::ref<java::lang::Object> v) { set_field<"otherValue", jni::ref<java::lang::Object>>(v); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec> new_object(jshort p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec> new_object(jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec_Provider> p1, jint p2) { return base_::new_object(p1, p2); }
	void clear() { return call_method<"clear", void>(); }
	void setValues(jshort p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"setValues", void>(p1, p2, p3); }
	void setValues(jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec> p1) { return call_method<"setValues", void>(p1); }
	void setValues(jni::ref<com::sun::org::apache::xerces::internal::impl::dtd::XMLContentSpec_Provider> p1, jint p2) { return call_method<"setValues", void>(p1, p2); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	XMLContentSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DTD_XMLCONTENTSPEC
